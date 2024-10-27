//
// Created by acer on 10/25/2024.
//
#include "voleHeader.h"
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
    if (!programFile.is_open()) {
        cout << "Program not found\n";
        return {};
    }
    string programLine;
    while(getline(programFile, programLine)){
        return split(programLine, " ");
    };
}
void Machine::setMemory(Memory &memory, vector<string> &instructions) {
    int i=0; // address iterator
    string hexa;
    for(const auto &instruct:instructions){
        if (instruct.size() == 4){
            stringstream ss;
            ss << setw(2) << setfill('0') << hex << i++;
            hexa = ss.str();
            transform(hexa.begin(), hexa.end(), hexa.begin(), ::toupper);
            memory.setCell(hexa, instruct.substr(0,2));
            stringstream ff;
            ff << setw(2) << setfill('0') << hex << i++;
            hexa = ff.str();
            memory.setCell(hexa, instruct.substr(2,2));
        }
    }
}
// Helper lambda for hex formatting with padding
auto formatHex = [](int value) {
    std::stringstream ss;
    ss << std::uppercase << std::setw(2) << std::setfill('0') << std::hex << value;
    return ss.str();
};