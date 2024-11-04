/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *buttonLayout;
    QPushButton *loadFile;
    QPushButton *runtillhalt;
    QPushButton *runonecylce;
    QPushButton *templatesShow;
    QWidget *startIndWidg;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QLineEdit *startingInd;
    QPushButton *loadMemory;
    QSpacerItem *horizontalSpacer;
    QTableWidget *register_2;
    QTextBrowser *textBrowser_2;
    QTableWidget *memory;
    QTextBrowser *textBrowser_4;
    QLineEdit *screen;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_3;
    QLineEdit *pcCntr;
    QTabWidget *tabWidget;
    QWidget *program1;
    QTextBrowser *textBrowser_6;
    QPushButton *program1Apply;
    QWidget *program2;
    QTextBrowser *textBrowser_7;
    QPushButton *program2Apply;
    QTextBrowser *Title;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(8);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1280, 720));
        MainWindow->setMaximumSize(QSize(1280, 720));
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("\n"
"    QMainWindow, QWidget {\n"
"        background-color: #1e1e1e;\n"
"        color: #ffffff;\n"
"    }\n"
"\n"
"    QPushButton {\n"
"        background-color: #0d47a1;\n"
"        color: white;\n"
"        border: none;\n"
"        padding: 8px 16px;\n"
"        border-radius: 4px;\n"
"        min-width: 100px;\n"
"        font-weight: bold;\n"
"    }\n"
"\n"
"    QPushButton:hover {\n"
"        background-color: #1565c0;\n"
"    }\n"
"\n"
"    QPushButton:pressed {\n"
"        background-color: #0a3880;\n"
"    }\n"
"\n"
"    QTableWidget {\n"
"        background-color: #2d2d2d;\n"
"        color: #ffffff;\n"
"        gridline-color: #404040;\n"
"        border: 1px solid #404040;\n"
"        border-radius: 6px;\n"
"    }\n"
"\n"
"    QTableWidget::item {\n"
"        padding: 4px;\n"
"    }\n"
"\n"
"    QTableWidget::item:selected {\n"
"        background-color: #0d47a1;\n"
"    }\n"
"\n"
"    QHeaderView::section {\n"
"        background-color: #1e1e1e;\n"
"        color: white;\n"
"        padding: 6"
                        "px;\n"
"        border: 1px solid #404040;\n"
"    }\n"
"\n"
"    QLineEdit, QTextEdit {\n"
"        background-color: #2d2d2d;\n"
"        color: #ffffff;\n"
"        border: 1px solid #404040;\n"
"        border-radius: 4px;\n"
"        padding: 4px;\n"
"    }\n"
"    .Title{\n"
"        color:#000000;\n"
"    }\n"
"\n"
"    QLineEdit:focus, QTextEdit:focus {\n"
"        border: 1px solid #0d47a1;\n"
"    }\n"
"\n"
"    QScrollBar:vertical {\n"
"        background: #2d2d2d;\n"
"        width: 12px;\n"
"        border-radius: 6px;\n"
"    }\n"
"\n"
"    QScrollBar::handle:vertical {\n"
"        background: #404040;\n"
"        border-radius: 6px;\n"
"    }\n"
"\n"
"    QScrollBar::handle:vertical:hover {\n"
"        background: #4d4d4d;\n"
"    }\n"
"\n"
"    QMenuBar {\n"
"        background-color: #1e1e1e;\n"
"        color: #ffffff;\n"
"    }\n"
"\n"
"    QMenuBar::item:selected {\n"
"        background-color: #0d47a1;\n"
"    }\n"
"\n"
"    QStatusBar {\n"
"        background-color: #1e1e1e;\n"
"        c"
                        "olor: #808080;\n"
"    }\n"
"    "));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 60, 1157, 74));
        buttonLayout = new QHBoxLayout(layoutWidget);
        buttonLayout->setSpacing(20);
        buttonLayout->setObjectName("buttonLayout");
        buttonLayout->setContentsMargins(20, 20, 0, 0);
        loadFile = new QPushButton(layoutWidget);
        loadFile->setObjectName("loadFile");

        buttonLayout->addWidget(loadFile);

        runtillhalt = new QPushButton(layoutWidget);
        runtillhalt->setObjectName("runtillhalt");

        buttonLayout->addWidget(runtillhalt);

        runonecylce = new QPushButton(layoutWidget);
        runonecylce->setObjectName("runonecylce");

        buttonLayout->addWidget(runonecylce);

        templatesShow = new QPushButton(layoutWidget);
        templatesShow->setObjectName("templatesShow");
        templatesShow->setCheckable(true);

        buttonLayout->addWidget(templatesShow);

        startIndWidg = new QWidget(layoutWidget);
        startIndWidg->setObjectName("startIndWidg");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(startIndWidg->sizePolicy().hasHeightForWidth());
        startIndWidg->setSizePolicy(sizePolicy1);
        startIndWidg->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(startIndWidg);
        horizontalLayout->setObjectName("horizontalLayout");
        textBrowser = new QTextBrowser(startIndWidg);
        textBrowser->setObjectName("textBrowser");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy2);
        textBrowser->setMinimumSize(QSize(30, 30));
        textBrowser->setMaximumSize(QSize(1111, 35));

        horizontalLayout->addWidget(textBrowser);

        startingInd = new QLineEdit(startIndWidg);
        startingInd->setObjectName("startingInd");
        sizePolicy2.setHeightForWidth(startingInd->sizePolicy().hasHeightForWidth());
        startingInd->setSizePolicy(sizePolicy2);
        startingInd->setMaximumSize(QSize(50, 35));

        horizontalLayout->addWidget(startingInd);

        loadMemory = new QPushButton(startIndWidg);
        loadMemory->setObjectName("loadMemory");
        loadMemory->setMaximumSize(QSize(16777215, 35));

        horizontalLayout->addWidget(loadMemory);


        buttonLayout->addWidget(startIndWidg);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        buttonLayout->addItem(horizontalSpacer);

        register_2 = new QTableWidget(centralwidget);
        if (register_2->columnCount() < 1)
            register_2->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        register_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (register_2->rowCount() < 16)
            register_2->setRowCount(16);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(7, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(8, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(9, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(10, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(11, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(12, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(13, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        register_2->setVerticalHeaderItem(14, __qtablewidgetitem15);
        register_2->setObjectName("register_2");
        register_2->setEnabled(true);
        register_2->setGeometry(QRect(20, 200, 111, 521));
        sizePolicy1.setHeightForWidth(register_2->sizePolicy().hasHeightForWidth());
        register_2->setSizePolicy(sizePolicy1);
        register_2->setMinimumSize(QSize(0, 0));
        register_2->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        register_2->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        register_2->horizontalHeader()->setMinimumSectionSize(70);
        register_2->horizontalHeader()->setDefaultSectionSize(70);
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(20, 150, 111, 41));
        textBrowser_2->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        textBrowser_2->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        memory = new QTableWidget(centralwidget);
        if (memory->columnCount() < 16)
            memory->setColumnCount(16);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(4, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(5, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(6, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(7, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(8, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(9, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(10, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(11, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(12, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(13, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(14, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        memory->setHorizontalHeaderItem(15, __qtablewidgetitem31);
        if (memory->rowCount() < 16)
            memory->setRowCount(16);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(4, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(5, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(6, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(7, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(8, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(9, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(10, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(11, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(12, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(13, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(14, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        memory->setVerticalHeaderItem(15, __qtablewidgetitem47);
        memory->setObjectName("memory");
        memory->setGeometry(QRect(240, 200, 671, 521));
        memory->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        memory->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        memory->horizontalHeader()->setMinimumSectionSize(40);
        memory->horizontalHeader()->setDefaultSectionSize(40);
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(240, 150, 111, 41));
        textBrowser_4->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        textBrowser_4->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        screen = new QLineEdit(centralwidget);
        screen->setObjectName("screen");
        screen->setGeometry(QRect(920, 201, 181, 161));
        screen->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        screen->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        screen->setDragEnabled(false);
        screen->setReadOnly(true);
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName("textBrowser_5");
        textBrowser_5->setGeometry(QRect(920, 150, 111, 41));
        textBrowser_5->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        textBrowser_5->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(150, 150, 61, 41));
        textBrowser_3->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        textBrowser_3->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        pcCntr = new QLineEdit(centralwidget);
        pcCntr->setObjectName("pcCntr");
        pcCntr->setGeometry(QRect(150, 201, 61, 31));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(240, 170, 671, 551));
        program1 = new QWidget();
        program1->setObjectName("program1");
        program1->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        textBrowser_6 = new QTextBrowser(program1);
        textBrowser_6->setObjectName("textBrowser_6");
        textBrowser_6->setGeometry(QRect(0, 0, 401, 521));
        program1Apply = new QPushButton(program1);
        program1Apply->setObjectName("program1Apply");
        program1Apply->setGeometry(QRect(530, 10, 132, 31));
        tabWidget->addTab(program1, QString());
        program2 = new QWidget();
        program2->setObjectName("program2");
        program2->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        textBrowser_7 = new QTextBrowser(program2);
        textBrowser_7->setObjectName("textBrowser_7");
        textBrowser_7->setGeometry(QRect(0, 0, 401, 521));
        program2Apply = new QPushButton(program2);
        program2Apply->setObjectName("program2Apply");
        program2Apply->setGeometry(QRect(530, 10, 132, 31));
        tabWidget->addTab(program2, QString());
        Title = new QTextBrowser(centralwidget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(0, 0, 411, 71));
        Title->setAutoFillBackground(false);
        Title->setStyleSheet(QString::fromUtf8("    background-color: rgba(0, 0, 0, 0);\n"
"    color: #FFFFFF;\n"
"    font-family: 'Arial';\n"
"    font-size: 16px;\n"
"    font-weight: bold; \n"
"    font-style: italic; \n"
"    padding: 10px; \n"
"    border: none; "));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Vole Machine Simulator", nullptr));
        loadFile->setText(QCoreApplication::translate("MainWindow", "Load Program", nullptr));
        runtillhalt->setText(QCoreApplication::translate("MainWindow", "Run till Halt", nullptr));
        runonecylce->setText(QCoreApplication::translate("MainWindow", "Run one cycle", nullptr));
        templatesShow->setText(QCoreApplication::translate("MainWindow", "Templates", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Starting Index to Load memory, In Hexa:</p></body></html>", nullptr));
        startingInd->setPlaceholderText(QCoreApplication::translate("MainWindow", "00", nullptr));
        loadMemory->setText(QCoreApplication::translate("MainWindow", "Load Memory", nullptr));
        QTableWidgetItem *___qtablewidgetitem = register_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Content", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = register_2->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = register_2->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = register_2->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = register_2->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = register_2->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = register_2->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = register_2->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = register_2->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = register_2->verticalHeaderItem(8);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = register_2->verticalHeaderItem(9);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = register_2->verticalHeaderItem(10);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = register_2->verticalHeaderItem(11);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = register_2->verticalHeaderItem(12);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = register_2->verticalHeaderItem(13);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = register_2->verticalHeaderItem(14);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">Registers:</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = memory->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = memory->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = memory->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = memory->horizontalHeaderItem(3);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = memory->horizontalHeaderItem(4);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = memory->horizontalHeaderItem(5);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = memory->horizontalHeaderItem(6);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = memory->horizontalHeaderItem(7);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = memory->horizontalHeaderItem(8);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = memory->horizontalHeaderItem(9);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = memory->horizontalHeaderItem(10);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = memory->horizontalHeaderItem(11);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = memory->horizontalHeaderItem(12);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = memory->horizontalHeaderItem(13);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = memory->horizontalHeaderItem(14);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = memory->horizontalHeaderItem(15);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = memory->verticalHeaderItem(0);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = memory->verticalHeaderItem(1);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = memory->verticalHeaderItem(2);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = memory->verticalHeaderItem(3);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = memory->verticalHeaderItem(4);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = memory->verticalHeaderItem(5);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = memory->verticalHeaderItem(6);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = memory->verticalHeaderItem(7);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = memory->verticalHeaderItem(8);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = memory->verticalHeaderItem(9);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = memory->verticalHeaderItem(10);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = memory->verticalHeaderItem(11);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = memory->verticalHeaderItem(12);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = memory->verticalHeaderItem(13);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = memory->verticalHeaderItem(14);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = memory->verticalHeaderItem(15);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("MainWindow", "F", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">Memory:</span></p></body></html>", nullptr));
        screen->setText(QCoreApplication::translate("MainWindow", "Print Screen:", nullptr));
        textBrowser_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">Screen:</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">PC:</span></p></body></html>", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">x = 0<br />while x &lt; 10:<br />    print x<br />    x = x + 1</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Corresponding Vole Machine Code loaded at location A0 --------------------------------------------------------------------------</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px;\">2000</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2130</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">23C6</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2420</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3100</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3400</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5112</p>\n"
"<p style=\" margin-top:0px;"
                        " margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3101</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5113</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B124</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1101</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B014</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C000</p></body></html>", nullptr));
        program1Apply->setText(QCoreApplication::translate("MainWindow", "Load this", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(program1), QCoreApplication::translate("MainWindow", "Program 1", nullptr));
        textBrowser_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">START</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    target = 6          // Load R0 with 6 (Target)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    result = 0         // Load R1 with 0 (Result)</p>\n"
"<p style=\" margin-top:0px; mar"
                        "gin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    num1 = 1           // Load R2 with 1 (Num1)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    num2 = 0           // Load R3 with 0 (Num2)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    counter = 1        // Load R4 with 1 (Counter)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    PRINT &quot;Fibonacci Sequence: &quot;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    WHILE counter &lt;= target DO</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        PRINT num1       // Print current Fibonacci number</p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        result = num1 + num2  // Add Num1 and Num2</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        num2 = num1          // Update Num2 to Num1</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        num1 = result        // Update Num1 to the result</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">        counter = counter + 1 // Increment counter</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    END WHILE</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">END</p>\n"
"<p style=\" margin-to"
                        "p:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">--------------------------------------------------------------------------</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Corresponding Vole Machine Code loaded at location 20</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">200A</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2100</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5118</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B1"
                        "1C</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B022</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3301</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B016</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3101</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">B018</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C000</p></body></html>", nullptr));
        program2Apply->setText(QCoreApplication::translate("MainWindow", "Load this", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(program2), QCoreApplication::translate("MainWindow", "Program 2", nullptr));
        Title->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:16px; font-weight:700; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:24pt; font-style:normal;\">Under The HOOD</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
