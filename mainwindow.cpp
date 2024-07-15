#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Contact.h"
#include <QMessageBox>
#include <QDebug>
#include <QTableWidget>
#include <QTimer>
#include <QPushButton>
#include <QListWidgetItem>

#include <iostream> // for DEBUG

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // push dummy data
    std::unique_ptr<Contact> dummyData(new Contact);
    dummyData->setInfo("n", "jisoo", "01088908684", "nimo");
    this->db.push_back(std::move(dummyData));

    std::unique_ptr<Contact> dummyData2(new Contact);
    dummyData2->setInfo("y", "jack", "01234567", "JJ");
    this->db.push_back(std::move(dummyData2));

    std::unique_ptr<Contact> dummyData3(new Contact);
    dummyData3->setInfo("n", "min", "01077108894", "mini");
    this->db.push_back(std::move(dummyData3));

    std::unique_ptr<Contact> dummyData4(new Contact);
    dummyData4->setInfo("n", "thomas", "01011304952", "tom");
    this->db.push_back(std::move(dummyData4));

    // make to function with mouse only.
    // ui->nameInput->setFocusPolicy(Qt::ClickFocus);
    // ui->phoneNumberInput->setFocusPolicy(Qt::ClickFocus);
    // ui->nickNameInput->setFocusPolicy(Qt::ClickFocus);

    // connect (sender, signal, reciever, slots)
    QObject::connect(ui->confirmButton, &QPushButton::released, this, &MainWindow::on_confirmButton_released);
    QObject::connect(ui->confirmButton, &QPushButton::released, this, &MainWindow::on_tableWidget_cellActivated);
    QObject::connect(ui->pushButtonReset, &QPushButton::released, this, &MainWindow::on_tableWidget_cellActivated);

    QObject::connect(ui->checkBookmarkRadioButton, &QPushButton::released, this, &MainWindow::on_checkBookmarkRadioButton_pressed);
    QObject::connect(ui->widgetSearchButton, &QPushButton::toggled, this, &MainWindow::on_tableWidget_cellActivated);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// TODO : pressed / released / clicked
void MainWindow::on_confirmButton_released()
{
    QString userName = ui->nameInput->text();
    QString userPhoneNumber = ui->phoneNumberInput->text();
    QString userNickName = ui->nickNameInput->text();
    if (userName == "")
    {
        // QMessageBox::warning(this, "Invalid input", "Please put userName.");
        ;
    }
    else
    {
        QMessageBox::information(this, "Adding Contact", "Added Contact! ;)");

        // input data to db
        std::unique_ptr<Contact> data(new Contact);

        data->setContactBookMark("default"); // default
        data->setContactName(userName);
        data->setContactPhoneNumber(userPhoneNumber);
        data->setContactNickName(userNickName);

        this->db.push_back(std::move(data));

        // clear buffer
        ui->nameInput->clear();
        ui->phoneNumberInput->clear();
        ui->nickNameInput->clear();
    }

}

void updateDB(){
    std::cout << "\nupdating db...\n";
}


void MainWindow::on_tableWidget_cellActivated()
{
    // for ( QTableWidgetItem *item : this->list )
    // {
    //     item->setBackground(Qt::white);
    // }
    // this->list.clear(); // 하이라이트 reset

    //Copy data form one table to another.
    for(size_t row = 0; row < this->db.size(); row++){

        // // 모든 내용 지우기
        // for (size_t i = 0; i < this->db.size(); i++)
        // {
        //      ui->tableWidgetSearch->removeRow(0);
        // }

    // get some data from .csv

        QTableWidgetItem *bookmarkItem = new QTableWidgetItem(this->db.at(row)->getContactBookMark());
        QTableWidgetItem *nameItem = new QTableWidgetItem(this->db.at(row)->getContactName());
        QTableWidgetItem *phoneNumberItem = new QTableWidgetItem(this->db.at(row)->getContactPhoneNumber());
        QTableWidgetItem *nickNameItem = new QTableWidgetItem(this->db.at(row)->getContactNickName());

        // qDebug() << "DEBUG HERE :: \n";
        // qDebug() << this->db.at(row)->getContactBookMark();
        // qDebug() << this->db.at(row)->getContactName();
        // qDebug() << this->db.at(row)->getContactPhoneNumber();
        // qDebug() << this->db.at(row)->getContactNickName();

        if (this->db.at(row)->getContactBookMark() == "default"){
            if (ui->checkBookmarkRadioButton->isChecked()){
                this->db.at(row)->setContactBookMark("y");
            }
            else{
                this->db.at(row)->setContactBookMark("n");
            }
        }

        bookmarkItem->setText(this->db.at(row)->getContactBookMark());
        nameItem->setText(this->db.at(row)->getContactName());
        phoneNumberItem->setText(this->db.at(row)->getContactPhoneNumber());
        nickNameItem->setText(this->db.at(row)->getContactNickName());

        //qDebug() << "row :: " << row << "\n";

        // std::vector<QTableWidgetItem*> a;
        // a.push_back(bookmarkItem);
        // a.push_back(nameItem);
        // a.push_back(phoneNumberItem);
        // a.push_back(nickNameItem);

        // this->tableWidgetDB.push_back(a);

        // qDebug() << "ROW :: " << row << "\n";
        // qDebug() << "row count :: " << this->rowCountDB;
        // qDebug() << "db size count :: " << this->db.size();

            // for ( QTableWidgetItem *item : this->list ){
            //     item->setBackground(Qt::yellow);
            // }

        if (row != db.size()){

            qDebug() << "DEBUGGING...\n";
            if (this->rowCountDB != (int)db.size())
            {
                ui->tableWidgetSearch->insertRow(this->rowCountDB);
                this->rowCountDB++;
            }

            ui->tableWidgetSearch->setItem(row, 0, bookmarkItem); // FIX
            ui->tableWidgetSearch->setItem(row, 1, nameItem);
            ui->tableWidgetSearch->setItem(row, 2, phoneNumberItem);
            ui->tableWidgetSearch->setItem(row, 3, nickNameItem);
        }
    }

}

void MainWindow::on_checkBookmarkRadioButton_pressed()
{
    qDebug() << ":::::::"<< this->rowCountDB ;
    ui->checkBookmarkRadioButton->setCheckable(true);
        qDebug() << "bookmark clicked 해제\n";


}


int MainWindow::on_widgetSearchComboBox_activated(int index)
{
    this->searchIndex = index;
    return (this->searchIndex);
}


void MainWindow::on_widgetSearchButton_pressed()
{
    QString input = ui->widgetSearchTextEditBar->text();
    ui->widgetSearchTextEditBar->clear();

    for ( QTableWidgetItem *item : this->list )
    {
        item->setBackground(Qt::white);
    }

    if (input == "")
        return ; // do nothing

    this->list = ui->tableWidgetSearch->findItems(input, Qt::MatchContains);
    for ( QTableWidgetItem *item : this->list )
    {
        item->setBackground(Qt::yellow);
    }



}

