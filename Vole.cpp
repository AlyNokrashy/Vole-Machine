//
// Created by acer on 10/25/2024.
//
#include "voleHeader.h"
// Helper lambda for hex formatting with padding
auto formatHex = [](int value) {
    std::stringstream ss;
    ss << std::uppercase << std::setw(2) << std::setfill('0') << std::hex << value;
    return ss.str();
};
vector<string> split(string target, string delimiter){
    vector<string> splitted;
    string word;
    for(int i=0 ; i<target.size() ; i++){
        bool split = true;
        for(int j=0 ; j < delimiter.size() ; j++){
            if(target[j+i] != delimiter[j]){
                split = false;
                break;
            }
        }
        if(word == delimiter){
            word = "";
        }
        if(split && word != ""){
            splitted.push_back(word);
            i += delimiter.size() - 1;
            word = "";
        }else{
            word += target[i];
        }
    }
    if(word!=""){
        splitted.push_back(word);
    }
    return splitted;
}
void Storage::initialize(int wdth) {
        string hexa;
        for(int i=0;i<size;i++) {
            stringstream ss;
            ss << setw(wdth) << setfill('0') << hex << i;
            hexa = ss.str();
            transform(hexa.begin(), hexa.end(), hexa.begin(), ::toupper);
            cells[hexa] = "00";
        }
}
void Storage::print() {
    for(const auto &elem:cells) {
        cout << "Address[" << elem.first << "]: " << elem.second << endl;
    }
}
vector<string> Machine::readProgram(const string &filename) {
    ifstream programFile(filename);
    vector<string> programs;
    if (!programFile.is_open()) {
        cout << "Program not found\n";
        return {};
    }
    string programLine;
    while(getline(programFile, programLine)){
        programs.push_back(programLine);
    };
    return programs;
}
void Machine::setMemory(Memory &memory, vector<string> &programs) {
    int address = 0; // address iterator
    for(const auto &program:programs){
        vector<string> instructions = split(program, " ");
        for(const auto &instruct:instructions){
            if (instruct.size() == 4){
                memory.setCell(formatHex(address++), instruct.substr(0,2));
                memory.setCell(formatHex(address++), instruct.substr(2,2));
            }
    }
    }
}
