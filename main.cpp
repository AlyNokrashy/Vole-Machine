#include "voleHeader.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    Machine machine;
    int option;
    string options[] = {
        "Load new program from a file",
        "Display screen",
        "Display register content",
        "Display memory content",
        "Run until halt",
        "Run one cycle"
    };

    cout << "Welcome!\n";

    while (true)
    {
        int list_size = (machine.halted() ? 4 : 6);
        cout << "====================================\n";
        for (int i = 1; i <= list_size; i++) {
            cout << i << "-" << options[i - 1] << endl;
        }
        cout << "(0)Exit\n";
        cout << "====================================\n";
        cout << "Your choice: ";
        cin >> option;

        if (option < 0 || option > list_size) {
            continue;
        }

        switch (option) {
            case 0:
                return 0;
            case 1:
            {
                machine.reset();
                string filename, ins, content;
                char c;
                int index = 0;
                cout << "Filename: ";
                cin >> filename;
                ifstream fs("../"+filename);
                if (!fs.is_open()) {
                    cerr << "Error: Could not open file " << filename << endl;
                    continue;
                }
                while (true) {
                    string hex_index;
                    cout << "Load the program starting at (hex index): ";
                    cin >> hex_index;
                    index = base_to_decimal(hex_index,16);
                    if (index >= 0 && index < 256) {
                        break;
                    }
                }
                while (fs >> c) {
                    content.push_back(c);
                }
                for (int i = 0; i + 1 < content.size(); i += 2) {
                    ins.push_back(content[i]), ins.push_back(content[i+1]);
                    machine.atMemory(index).set_value(base_to_decimal(ins, 16));
                    index++;
                    ins.clear();
                }
                break;
            }
            case 2:
            {
                cout << machine.atMemory(0).get_value()<< endl;
                break;
            }
            case 3:
            {
                machine.print_register();
                break;
            }
            case 4:
            {
                machine.print_memory();
                break;
            }
            case 5:
            {
                while (!machine.halted()) {
                    machine.run_one_cycle();
                }
                machine.print_register();
                machine.print_memory();
                break;
            }
            case 6:
            {
                machine.run_one_cycle();
                machine.print_register();
                machine.print_memory();
                break;
            }
        }
    }
}