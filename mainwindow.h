#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractButton> // QAbstractButton 헤더 파일 포함
#include <QString>
#include <QScrollArea>
#include <QTableWidgetItem>

#include "Contact.h"

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
    int rowCountDB = 0;
    int searchIndex;
    std::size_t tableWidgetCount = 0;
    QList<QTableWidgetItem *> list;


signals:
    void updateDB();

private slots:
    void on_confirmButton_released();
    void on_tableWidget_cellActivated();

    void on_checkBookmarkRadioButton_pressed();

    int on_widgetSearchComboBox_activated(int index);

    void on_widgetSearchButton_pressed();

private:
    Ui::MainWindow *ui;
    std::vector<std::unique_ptr<Contact>> db;
    Contact dummyData;
    std::vector<std::vector<QTableWidgetItem*>> tableWidgetDB;


};
#endif // MAINWINDOW_H
