#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_FindInputFile_clicked() //Находим исходный файл в проводнике
{
    filePath = QFileDialog::getOpenFileName(this, "Open File", "","Files(*.txt *.bin)");
    QFileInfo info(filePath);
    ui->InputPath->setText(info.filePath());
}


void MainWindow::on_FindOutputFile_clicked() //Выбираем папку в которой будет выходной файл в проводнике
{
    filePath = QFileDialog::getExistingDirectory(this, "Open Directory", "", QFileDialog::ShowDirsOnly);
    QFileInfo info(filePath);
    ui->OutputPath->setText(info.filePath());
}



void MainWindow::on_Start_clicked() // Старт программы
{
    key = QByteArray::fromHex(ui->ByteInput->text().toUtf8());

    QFile file(ui->InputPath->text());
    QFileInfo info(file);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text | QIODevice::ExistingOnly)) // Открываем исходный файл если возможно
    {
        ui->label->setText("Исходный файл не найден");
        return;
    }
    ui->label->setText("");

    QTextStream in(&file);

    QString copy = "";
    if (ui->comboBox->currentText() == "Модификация")
    {
        copy = "(" + QString::number(count) + ")";// Если выбрана опция Модификация то создаём новые файлы по счётчику
        count++;
    }
    else
        copy = ""; // Если выбрана опция перезапись то переписываем в один файл

    QFile newFile(ui->OutputPath->text()+ "/" + info.baseName() + "_output" + copy + "." + info.suffix()); // Создаём выходной файл
    if (!newFile.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&newFile);
    int i = 0;

    while (!in.atEnd()) // Записываем в выходной файл изменённые данные
    {
        QChar ch;
        in >> ch;
        int hex = ch.unicode() ^ uchar(key[i % key.length()]);
        ch = (QChar)hex;
        out << ch;
        i == 8 ? i = 0 : i++;
    }
    newFile.close();

    if (ui->DeleteInput->isChecked()) //Исходник закрываем или удаляем в зависимости от настройки
    {
        file.remove();
    }
    else
    {
         file.close();
    }

    if(ui->CloseAfter->isChecked()) //Авто-выход по настройке
    {
        QApplication::quit();
    }
    ui->comboBox->setEnabled(true);

}


void MainWindow::on_InputPath_textChanged(const QString &arg1)
{
    count = 1;
    ui->comboBox->setCurrentIndex(0);
    ui->comboBox->setEnabled(false); //нельзя делать копии если мы ещё не создали файл
}


