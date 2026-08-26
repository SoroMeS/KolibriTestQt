#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QApplication>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QRadioButton>
#include <QComboBox>
#include <QLabel>

#include <QFileDialog>
#include <QFile>

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

    void on_FindInputFile_clicked();

    void on_FindOutputFile_clicked();

    void on_Start_clicked();

    void on_InputPath_textChanged(const QString &arg1);

    void on_ByteInput_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;

    QString filePath;
    QByteArray key;
    int count = 1;
};
#endif // MAINWINDOW_H
