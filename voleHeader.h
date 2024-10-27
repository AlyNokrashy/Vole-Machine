#ifndef TASK_3_VOLEHEADER_H
#define TASK_3_VOLEHEADER_H
#include <bits/stdc++.h>
class Memory;
class Machine;
class  Storage;
class Register;
using namespace std;
class Machine{
public:
    vector<string> readProgram(const string& filename);
    void setMemory(Memory &memory, vector<string> &instructions);
};
class Storage{
protected:
    map<string, string> cells;
    int size;
    Storage(int size): size(size) {}

public:
    void initialize(int wdth);
    void print();
    virtual void setCell(const string &address, const string &content) {cells[address] = content;};
    virtual string& getCell(const string &address) {return cells[address];};
};
class Memory : public Storage{
public:
    Memory() : Storage(256) {
        initialize(2);
    }

};
class Register : public Storage{
public:
    Register() : Storage(16){
        initialize(1);
    }
};

vector<string> split(string target, string delimiter);
#endif //TASK_3_VOLEHEADER_H
