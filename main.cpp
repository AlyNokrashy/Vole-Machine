#include "voleHeader.h"
int main() {
    Memory memo;
    Register reg;
    Machine mm;
    Memory mem;
    vector <string> instructions = mm.readProgram("../programs/P1.txt");
    mm.setMemory(mem, instructions);
    mem.print();
    return 0;
}
