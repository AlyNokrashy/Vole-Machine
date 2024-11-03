#ifndef TASK_3_VOLEHEADER_H
#define TASK_3_VOLEHEADER_H
#include <bits/stdc++.h>
using namespace std;

string decimal_to_base(int value, int base);
int base_to_decimal(string value, int base);
int base_to_decimal(char c);

class Memory_Cell
{
protected:
    int value{0};

public:
    Memory_Cell(int val = 0);
    void set_value(int val);
    int get_value() const;
    string binary_value() const;
    string hex_value() const;
    int twos_comp_value() const;
    double float_value() const;
};

class Register: public Memory_Cell
{
public:
    bool operator==(const Memory_Cell &rhs) const;
    bool operator!=(const Memory_Cell &rhs) const;
    Register operator=(const Memory_Cell &rhs);
    Register operator=(const int rhs);
    Register operator++();
    Register operator+=(const Register &rhs);
    Register operator+=(const int rhs);
};

class Arithmetic_Unit
{
public:
    string float_to_binary(double d);
    int add_int(int val1, int val2);
    double add_float(double val1, double val2);
};

class Machine
{
    Arithmetic_Unit AU;
    Memory_Cell *Memory;
    Register *Register, ProgramCtr, InstructionCtr;
    int rCount, mSize;
    bool halt;
    string screen;

    bool valid_value(string &ins);
    void __1(string &ins);
    void __2(string &ins);
    void __3(string &ins);
    void __4(string &ins);
    void __5(string &ins);
    void __6(string &ins);
    void __B(string &ins);

public:
    Machine(int memory_size = 256, int register_count = 16);

    int registerCount();
    int memorySize();
    bool run_one_cycle();
    string sceen();
    Memory_Cell &atM(int index);
    Register &atR(int index);
    void reset();
    string PC();
    string IR();
    bool halted();
    ~Machine();
};
#endif //TASK_3_VOLEHEADER_H