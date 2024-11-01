
#include <iostream>
#include <bits/stdc++.h>
#include "Machine.cpp"
#define all(v) v.begin(), v.end()
#define each auto &
using namespace std;


int main()
{
    Machine machine;
    int op;
    string ls[] = {
            "Load a new program from a file",
            "Display screen content",
            "Display register content",
            "Display memory content",
            "Run until halt",
            "Run one cycle",
    };
    cout << "Welcome User ^^\n";
    while (1)
    {
        int list_size = (machine.halted() ? 4 : 6);
        cout << "====================================\n";
        for (int i{1}; i <= list_size; i++)
        {
            cout << i << "-" << ls[i - 1] << endl;
        }
        cout << "0-Exit\n";
        cout << "====================================\n";
        cout << "Response: ";
        cin >> op;
        if (op < 0 || op > list_size) continue;

        switch(op)
        {
            case 0:
            {
                return 0;
            }
            case 1:
            {
                machine.reset();
                string file_name, ins, content;
                char c;
                int idx{};
                cout << "Filename: ";
                cin >> file_name;
                ifstream fs(file_name);
                while (1)
                {
                    string hex_idx;
                    cout << "Starting at (hex index): ";
                    cin >> hex_idx;
                    idx = base_to_dec(hex_idx, 16);
                    if (idx >= 0 && idx < 256) break;
                }
                while (fs >> c)
                {
                    content.push_back(c);
                }
                for (int i{}; i + 1 < content.size(); i += 2)
                {
                    ins.push_back(content[i]), ins.push_back(content[i + 1]);
                    machine.atM(idx).set_value(base_to_dec(ins, 16));
                    idx++;
                    ins.clear();
                }
                break;
            }
            case 2:
            {
                cout << machine.sceen_content() << endl;
                break;
            }
            case 3:
            {
                for (int i{}; i < machine.registerCount(); i++)
                {
                    cout << 'R' << dec_to_base(i, 16) << ": " << machine.atR(i).hex_value() << endl;
                }
                cout << "PC: " << machine.PC() << " IR: " << machine.IR() << endl;
                break;
            }
            case 4:
            {
                cout << "  ";
                for (int i{}; i < 16; i++)
                {
                    char c = (i < 10 ? i + '0' : i - 10 + 'A');
                    cout << c << "  ";
                }
                cout << endl;
                for (int i{}; i < 16; i++)
                {
                    char c = (i < 10 ? i + '0' : i - 10 + 'A');
                    cout << c << " ";
                    for (int j{}; j < 16; j++)
                    {
                        cout << machine.atM(i * 16 + j).hex_value() << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 5:
            {
                while (!machine.halted())
                {
                    machine.run_one_cycle();
                }
                break;
            }
            case 6:
            {
                machine.run_one_cycle();
                break;
            }
        }
    }
}