/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QLabel *InputLabel;
    QGroupBox *Options;
    QCheckBox *CloseAfter;
    QCheckBox *DeleteInput;
    QComboBox *comboBox;
    QLineEdit *InputPath;
    QLabel *label;
    QToolButton *FindInputFile;
    QLabel *InputLabel_2;
    QLineEdit *ByteInput;
    QLabel *OutputLabel;
    QLineEdit *OutputPath;
    QToolButton *FindOutputFile;
    QPushButton *Start;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(583, 315);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        InputLabel = new QLabel(centralwidget);
        InputLabel->setObjectName("InputLabel");

        gridLayout_2->addWidget(InputLabel, 0, 0, 1, 1);

        Options = new QGroupBox(centralwidget);
        Options->setObjectName("Options");
        CloseAfter = new QCheckBox(Options);
        CloseAfter->setObjectName("CloseAfter");
        CloseAfter->setGeometry(QRect(10, 50, 111, 21));
        DeleteInput = new QCheckBox(Options);
        DeleteInput->setObjectName("DeleteInput");
        DeleteInput->setGeometry(QRect(10, 20, 161, 21));
        DeleteInput->setTristate(false);
        comboBox = new QComboBox(Options);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setEnabled(false);
        comboBox->setGeometry(QRect(10, 80, 101, 22));
        comboBox->setEditable(false);

        gridLayout_2->addWidget(Options, 0, 2, 5, 2);

        InputPath = new QLineEdit(centralwidget);
        InputPath->setObjectName("InputPath");

        gridLayout_2->addWidget(InputPath, 1, 0, 1, 2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        FindInputFile = new QToolButton(centralwidget);
        FindInputFile->setObjectName("FindInputFile");

        gridLayout_2->addWidget(FindInputFile, 2, 1, 1, 1);

        InputLabel_2 = new QLabel(centralwidget);
        InputLabel_2->setObjectName("InputLabel_2");

        gridLayout_2->addWidget(InputLabel_2, 3, 0, 1, 1);

        ByteInput = new QLineEdit(centralwidget);
        ByteInput->setObjectName("ByteInput");

        gridLayout_2->addWidget(ByteInput, 4, 0, 1, 1);

        OutputLabel = new QLabel(centralwidget);
        OutputLabel->setObjectName("OutputLabel");

        gridLayout_2->addWidget(OutputLabel, 5, 0, 1, 1);

        OutputPath = new QLineEdit(centralwidget);
        OutputPath->setObjectName("OutputPath");

        gridLayout_2->addWidget(OutputPath, 6, 0, 1, 2);

        FindOutputFile = new QToolButton(centralwidget);
        FindOutputFile->setObjectName("FindOutputFile");

        gridLayout_2->addWidget(FindOutputFile, 6, 2, 1, 1);

        Start = new QPushButton(centralwidget);
        Start->setObjectName("Start");

        gridLayout_2->addWidget(Start, 6, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 583, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        InputLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\272 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\274\321\203 \321\204\320\260\320\271\320\273\321\203", nullptr));
        Options->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        CloseAfter->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\276\320\262\321\213\320\271 \320\267\320\260\320\277\321\203\321\201\320\272", nullptr));
        DeleteInput->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\205\320\276\320\264\320\275\321\213\320\265 \321\204\320\260\320\271\320\273\321\213", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217", nullptr));

        label->setText(QString());
        FindInputFile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214...", nullptr));
        InputLabel_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 8 \320\261\320\260\320\271\321\202 ", nullptr));
        OutputLabel->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\272 \320\262\321\213\321\205\320\276\320\264\320\275\320\276\320\274\321\203 \321\204\320\260\320\271\320\273\321\203", nullptr));
        FindOutputFile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214...", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
