#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <bits/stdc++.h>
#include "voleHeader.h"

#include <QLabel>
#include <QString>
#include <qfiledialog.h>
#include <QMessageBox>
Machine machine;
ifstream currProgram;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->startIndWidg->hide();
    ui->tabWidget->hide();
    update_ui();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::update_memory(){
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            QLabel* label = new QLabel(QString::fromStdString(machine.atMemory(i * 16 + j).hex_value()), this);
            ui->memory->setCellWidget(i, j, label);
        }
    }
}
void MainWindow::update_register(){

    for (int i = 0; i < machine.registerCount(); i++) {
        QLabel* label = new QLabel(QString::fromStdString(machine.atRegister(i).hex_value()), this);
        ui->register_2->setCellWidget(i, 0, label);
    }
}



void MainWindow::on_loadFile_clicked()
{
    QString filter = "(*.txt)";
    QString filePath = QFileDialog::getOpenFileName(this, "load", QDir::homePath(), filter);
    string filename;

    filename =filePath.toStdString();
    currProgram.open(filename);
    if (!currProgram.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        // continue;
    }
    ui->startIndWidg->show();
}


void MainWindow::on_loadMemory_clicked()
{
    machine.reset();
    ui->screen->setText(" ");
    char c;
    int index = 0;
    string ins, content;
    while (true) {
        string hex_index;
        hex_index = ui->startingInd->text().toStdString();
        index = base_to_decimal(hex_index,16);
        if (index >= 0 && index < 256) {
            ui->startIndWidg->hide();
            break;
        }else{
            ui->startingInd->setPlaceholderText("Enter valid hex from 00 to FF");
        }
    }
    while (currProgram >> c) {
        content.push_back(c);
    }
    int test = index + content.size()/2;
    if(test > 256){
        QMessageBox::about(this, "Error", "No enough memory to load at this index");
    }else {
    machine.set_pc(index);
    for (int i = 0; i + 1 < content.size(); i += 2) {
        ins.push_back(content[i]), ins.push_back(content[i+1]);
        machine.atMemory(index).set_value(base_to_decimal(ins, 16));
        index++;
        ins.clear();
    }
    }
    update_ui();
    currProgram.close();
}


void MainWindow::on_runtillhalt_clicked()
{
    while (!machine.halted()) {
        machine.run_one_cycle();
        update_screen();
    }
    update_ui();
}


void MainWindow::on_runonecylce_clicked()
{
    machine.run_one_cycle();
    update_ui();
}
void MainWindow::update_screen(){
    // Retrieve the value from memory
    int value = machine.atMemory(0).get_value(); // Get the value from memory

    // Check if value is valid (within ASCII range)
    if (value >= 0 && value <= 255) {
        // Convert the integer to a QChar
        QChar newChar(value);

        // Get the current text from the screen
        QString currentText = ui->screen->text();

        // Append the new character to the current text
        if (newChar!= currentText[currentText.size() -1]){
            currentText.append(newChar);
        }
        // Set the updated text back to the screen
        ui->screen->setText(currentText);
    } else {
        // Handle invalid value case
        ui->screen->setText("Invalid value");
    }

}
void MainWindow::update_ui(){
    update_screen();
    update_memory();
    update_register();
    ui->pcCntr->setText(QString::fromStdString(machine.PCtr()));
    if(machine.halted()){
        ui->pcCntr->setText("Halted");
    }
}






void MainWindow::on_templatesShow_toggled(bool checked)
{
    if(checked){
        ui->tabWidget->show();
    }
    else{
        ui->tabWidget->hide();
    }
}


void load_template(string content, string hexIndex){
    int index = base_to_decimal(hexIndex,16);
    string ins;

    // Remove spaces and newlines from `content` to ensure only hex digits are left
    content.erase(std::remove_if(content.begin(), content.end(), ::isspace), content.end());

    machine.set_pc(index);

    // Process the `content` string, loading each instruction as a 2-byte hex pair
    for (size_t i = 0; i + 1 < content.size(); i += 2) {
        // Take two characters at a time to form a complete instruction
        ins.push_back(content[i]);
        ins.push_back(content[i + 1]);

        // Convert hex string instruction to decimal and load it into memory
        machine.atMemory(index).set_value(base_to_decimal(ins, 16));
        index++;  // Move to the next memory location
        ins.clear();  // Clear `ins` for the next instruction
    }


}
void MainWindow::on_program1Apply_clicked()
{
    machine.reset();
    ui->screen->setText(" ");
    std::string program1 = R"(2000
2130
2201
23C6
2420
3100
3400
5112
3101
5113
B124
1101
B014
C000)";
    load_template(program1, "0A");
    update_ui();
    ui->tabWidget->hide();
}

void MainWindow::on_program2Apply_clicked()
{   machine.reset();
    ui->screen->setText(" ");
    std::string program2 = R"(2006
2100
2201
2300
2401
2501
2620
2730
28D0
5227
3200
5228
3600
5123
3101
5117
3100
5118
3600
4023
1201
5445
B43A
B024
C000
)";
    load_template(program2, "0A");
    update_ui();
    ui->tabWidget->hide();
}




void MainWindow::on_reset_clicked()
{
    machine.reset();
    ui->screen->setText(" ");
    update_ui();
}

