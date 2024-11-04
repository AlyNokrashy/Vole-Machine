#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loadFile_clicked();
    void update_memory();
    void update_register();
    void on_loadMemory_clicked();

    void on_runtillhalt_clicked();

    void on_runonecylce_clicked();
    void update_screen();
    void update_ui();

    void on_templatesShow_toggled(bool checked);

    void on_program1Apply_clicked();
    void on_program2Apply_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
