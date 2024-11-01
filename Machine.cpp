#include "Machine.h"

string dec_to_base(int value, int base)
{
    int val = value;
    string new_value;
    while (val)
    {
        int rem = val % base;
        val /= base;
        char di = (rem < 10 ? rem + '0' : 'A' + rem - 10);
        new_value.push_back(di);
    }
    if (new_value.empty()) new_value.push_back('0');
    reverse(all(new_value));
    return new_value;
}
int base_to_dec(string value, int base)
{
    reverse(all(value));
    int pos{1}, num{};
    for (auto &c: value)
    {
        int di = (isalpha(c) ? c - 'A' + 10 : c - '0');
        num += di * pos;
        pos *= base;
    }
    return num;
}
int base_to_dec(char c)
{
    int di = (isalpha(c) ? c - 'A' + 10 : c - '0');
    return di;
}

Memory_Cell::Memory_Cell(int val): value{val}
{

}
void Memory_Cell::set_value(int val)
{
    value = val;
}
int Memory_Cell::get_value() const
{
    return value;
}
string Memory_Cell::bi_value() const
{
    string bi_val = dec_to_base(value, 2);
    while (bi_val.size() < 8) bi_val = '0' + bi_val;
    return bi_val;
}
string Memory_Cell::hex_value() const
{
    string hex_val = dec_to_base(value, 16);
    while (hex_val.size() < 2) hex_val = '0' + hex_val;
    return hex_val;
}
int Memory_Cell::twos_comp_value() const
{
    string bi_val = bi_value();
    int num{};
    bool rev{};
    if (bi_val[0] == '1')
    {
        int sz = bi_val.size();
        for (int i{sz - 1}; i >= 0; i--)
        {
            if (rev) bi_val[i] = !(bi_val[i] - '0') + '0';
            if (bi_val[i] - '0' != 0) rev = true;
        }
        return base_to_dec(bi_val, 2) * -1;
    }
    return value;
}
double Memory_Cell::float_value() const
{
    string bi_val = bi_value(), man = bi_val.substr(4, 4);
    double num{};
    int dot_idx = base_to_dec(bi_val.substr(1, 3), 2) - 4;
    while (dot_idx < 0) man.insert(0, "0"), dot_idx++;
    int exp = dot_idx - 1;
    for (each c: man)
    {
        num += (c - '0') * pow(2, exp);
        exp--;
    }
    if (bi_val[0] - '0' != 0) num *= -1;
    return num;
}


bool Register::operator==(const Memory_Cell &rhs) const
{
    return value == rhs.get_value();
}
bool Register::operator!=(const Memory_Cell &rhs) const
{
    return value != rhs.get_value();
}
Register Register::operator=(const Memory_Cell &rhs)
{
    value = rhs.get_value();
    return *this;
}
Register Register::operator=(const int rhs)
{
    value = rhs;
    return *this;
}
Register Register::operator++()
{
    value++;
    return *this;
}
Register Register::operator+=(const Register &rhs)
{
    value += rhs.value;
    return *this;
}
Register Register::operator+=(const int rhs)
{
    value += rhs;
    return *this;
}


string Arthmetic_Unit::float_to_bi(double d)
{
    string val;
    for (int i = 0; i < 8; i++)
    {
        d *= 2;
        if (d >= 1) val.push_back('1'), d--;
        else val.push_back('0');
    }
    return val;
}
int Arthmetic_Unit::add_int(int val1, int val2)
{
    int sum = val1 + val2;
    string bi_sum = dec_to_base(sum, 2);
    if (bi_sum.size() > 8) bi_sum = bi_sum.substr(bi_sum.size() - 8, 8);
    return base_to_dec(bi_sum, 2);
}
double Arthmetic_Unit::add_float(double val1, double val2)
{
    double sum = val1 + val2;
    int exp{4};
    string bi_val, man;
    if (sum < 0) sum *= -1, bi_val.push_back('1');
    else bi_val.push_back('0');

    man = dec_to_base(sum, 2);
    exp = min(static_cast<int>(exp + man.size()), 7);

    sum -= static_cast<int>(sum);
    string tmp = float_to_bi(sum);
    if (exp == 4)
    {
        while (exp && tmp[0] == '0')
        {
            exp--;
            tmp.erase(0, 1);
        }
    }
    man += tmp;
    bi_val += dec_to_base(exp, 2) + man.substr(0, 4);
    return base_to_dec(bi_val, 2);
}

bool Machine::valid_value(string &ins)
{
    for (each c: ins)
    {
        if (c < '0' || c > 'F')
        {
            return false;
        }
    }
    return true;
}
// copy from memory to register
void Machine::__1(string &ins)
{
    int register_idx = base_to_dec(ins[1]), memory_cell_idx = base_to_dec(ins.substr(2, 2), 16);
    R[register_idx] = M[memory_cell_idx];
}

// assign value to register
void Machine::__2(string &ins)
{
    int register_idx = base_to_dec(ins[1]), value = base_to_dec(ins.substr(2, 2), 16);
    R[register_idx] = value;
}

// copy from register to memory
void Machine::__3(string &ins)
{
    int register_idx = base_to_dec(ins[1]), memory_cell_idx = base_to_dec(ins.substr(2, 2), 16);
    M[memory_cell_idx] = R[register_idx];
    if (memory_cell_idx == 0) screen.push_back(M[memory_cell_idx].get_value());
}

// copy from register to register
void Machine::__4(string &ins)
{
    int register_idx_1 = base_to_dec(ins[2]), register_idx_2 = base_to_dec(ins[3]);
    R[register_idx_2] = R[register_idx_1];
}

// add (2's complement)
void Machine::__5(string &ins)
{
    int r[3];
    for (int i{}; i < 3; i++) r[i] = base_to_dec(ins[i + 1]);
    R[r[0]] = AU.add_int(R[r[1]].get_value(), R[r[2]].get_value());
}

// add (floating point)
void Machine::__6(string &ins)
{
    int r[3], exp{4};
    for (int i{}; i < 3; i++) r[i] = base_to_dec(ins[i + 1]);
    R[r[0]] = AU.add_float(R[r[1]].float_value(), R[r[2]].float_value());
}

// jump
void Machine::__B(string &ins)
{
    int register_idx = base_to_dec(ins[1]), memory_cell_idx = base_to_dec(ins.substr(2, 2), 16);
    if (R[register_idx] == R[0]) PCtr = memory_cell_idx;
}

Machine::Machine(int memory_size, int register_count) : mSize(memory_size), rCount(register_count)
{
    M = new Memory_Cell[memory_size];
    R = new Register[register_count];
    PCtr = 0;
    halt = false;
}

int Machine::registerCount()
{
    return rCount;
}

int Machine::memorySize()
{
    return mSize;
}

bool Machine::run_one_cycle()
{
    if (PCtr.get_value() > 254 || halt)
    {
        halt = true;
        return false;
    }
    string ins = M[PCtr.get_value()].hex_value();
    ++PCtr;
    ins += M[PCtr.get_value()].hex_value();
    if (PCtr.get_value() < 255) ++PCtr;
    InsR = base_to_dec(ins, 16);
    switch (ins[0])
    {
        case '1':
        {
            __1(ins);
            return true;
        }
        case '2':
        {
            __2(ins);
            return true;
        }
        case '3':
        {
            __3(ins);
            return true;
        }
        case '4':
        {
            __4(ins);
            return true;
        }
        case '5':
        {
            __5(ins);
            return true;
        }
        case '6':
        {
            __6(ins);
            return true;
        }
        case 'B':
        {
            __B(ins);
            return true;
        }
    }
    if (ins == "C000")
    {
        halt = true;
        return true;
    }
    return false;
}

string Machine::sceen_content()
{
    return screen;
}

Memory_Cell &Machine::atM(int index)
{
    return M[index];
}

Register &Machine::atR(int index)
{
    return R[index];
}

void Machine::reset()
{
    for (int i{}; i < rCount; i++)
    {
        R[i] = 0;
    }
    for (int i{}; i < mSize; i++)
    {
        M[i] = 0;
    }
    PCtr = 0;
    halt = false;
    screen.clear();
}
string Machine::PC()
{
    return PCtr.hex_value();
}
string Machine::IR()
{
    return InsR.hex_value();
}
bool Machine::halted()
{
    return halt;
}

Machine::~Machine()
{
    delete [] M;
    delete [] R;
}