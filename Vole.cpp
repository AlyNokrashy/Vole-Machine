#include "voleHeader.h"

string decimal_to_base(int value, int base) {
    int v = value;
    string result;
    char digit;
    while (v) {
        int remainder = v % base;
        v /= base;
        if (remainder < 10) {
            digit = remainder + '0';
        } else {
            digit = remainder - 10 + 'A';
        }
        result.push_back(digit);
    }
    if (result.empty())
        result.push_back('0');
    reverse(result.begin(), result.end());
    return result;
}

int base_to_decimal(string value, int base) {
    reverse(value.begin(), value.end());
    int pos = 0, n = 0;
    for (auto &c : value) {
        int digit = (isalpha(c) ? c - 'A' + 10 : c - '0');
        n += digit * pos;
        pos *= base;
    }
    return n;
}

int base_to_decimal(char c) {
    int digit = (isalpha(c) ? c - 'A' + 10 : c - '0');
    return digit;
}

Memory_Cell::Memory_Cell(int val) {
    value = val;
}

void Memory_Cell::set_value(int val)
{
    value = val;
}
int Memory_Cell::get_value() const
{
    return value;
}

string Memory_Cell::binary_value() const {
    string binary_v = decimal_to_base(value, 2);
    while (binary_v.length() < 8) {
        binary_v = '0' + binary_v;
        return binary_v;
    }
}

string Memory_Cell::hex_value() const {
    string hex_v = decimal_to_base(value, 16);
    while (hex_v.length() < 2) {
        hex_v = '0' + hex_v;
    }
    return hex_v;
}

int Memory_Cell::twos_comp_value() const {
    string binary_v = binary_value();
    int num = 0;
    bool reverse = false;

    if (binary_v[0] == '1') {
        int size = binary_v.length();
        for (int i = size - 1; i >= 0; i--) {
            if (reverse) {
                binary_v[i] = !(binary_v[i] - '0') + '0';
            }
            if (binary_v[i] - '0' != 0) {
                reverse = true;
            }
        }
        return base_to_decimal(binary_v, 2) * -1;
    }
    return value;
}

double Memory_Cell::float_value() const {
    string binary_v = binary_value(), mantissa = binary_v.substr(4,4);
    double n = 0;
    int dot_index = base_to_decimal(binary_v.substr(1, 3), 2) - 4;
    while (dot_index < 0) {
        mantissa.insert(0, "0");
        dot_index++;
    }
    int exp = dot_index - 1;
    for (auto &c : mantissa) {
        n += (c - '0') * pow(2, exp);
        exp--;
    }
    if (binary_v[0] - '0' != 0) {
        n *= -1;
    }
    return n;
}

bool Register::operator==(const Memory_Cell &rhs) const {
    return value == rhs.get_value();
}

bool Register::operator!=(const Memory_Cell &rhs) const {
    return value != rhs.get_value();
}

Register Register::operator=(const Memory_Cell &rhs) {
    value = rhs.get_value();
    return *this;
}

Register Register::operator=(const int rhs) {
    value = rhs;
    return *this;
}

Register Register::operator++() {
    value++;
    return *this;
}

Register Register::operator+=(const Register &rhs) {
    value += rhs.get_value();
    return *this;
}

Register Register::operator+=(int rhs) {
    value += rhs;
    return *this;
}

string Arithmetic_Unit::float_to_binary(double d) {
    string value;

    for (int i = 0; i < 8; i++) {
        d *= 2;
        if (d >= 1) {
            value.push_back('1');
            d--;
        } else {
            value.push_back('0');
        }
    }
    return value;
}

int Arithmetic_Unit::add_int(int val1, int val2) {
    int sum = val1 + val2;
    string binary_sum = decimal_to_base(sum, 2);
    if (binary_sum.length() > 8) {
        binary_sum.substr(binary_sum.size() - 8, 8);
    }
    return base_to_decimal(binary_sum, 2);
}

double Arithmetic_Unit::add_float(double val1, double val2) {
    double sum = val1 + val2;
    int exp{4};
    string bi_val, man;
    if (sum < 0) sum *= -1, bi_val.push_back('1');
    else bi_val.push_back('0');

    man = decimal_to_base(sum, 2);
    exp = min(static_cast<int>(exp + man.size()), 7);

    sum -= static_cast<int>(sum);
    string tmp = float_to_binary(sum);
    if (exp == 4)
    {
        while (exp && tmp[0] == '0')
        {
            exp--;
            tmp.erase(0, 1);
        }
    }
    man += tmp;
    bi_val += decimal_to_base(exp, 2) + man.substr(0, 4);
    return base_to_decimal(bi_val, 2);
}

bool Machine::valid_value(string &ins) {
    for (auto &c : ins) {
        if (c < '0' || c > 'F') {
            return false;
        }
    }
    return true;
}

//load from memory to register
void Machine::__1(string &ins) {
    int reg_index = base_to_decimal(ins[1]), memory_index = base_to_decimal(ins.substr(2,2), 16);
    Register[reg_index] = Memory[memory_index];
}

//assign a value to register
void Machine::__2(string &ins) {
    int reg_index = base_to_decimal(ins[1]), value = base_to_decimal(ins.substr(2,2), 16);
    Register[reg_index] = value;
}

//store pattern in register to the memory
void Machine::__3(string &ins) {
    int reg_index = base_to_decimal(ins[1]), memory_index = base_to_decimal(ins.substr(2,2), 16);
    Memory[memory_index] = Register[reg_index];
    if (memory_index == 0) screen.push_back(Memory[memory_index].get_value());
}

//copy from register to another register
void  Machine::__4(string &ins) {

}




