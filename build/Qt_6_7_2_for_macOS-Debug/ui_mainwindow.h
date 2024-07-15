/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTabWidget *Add;
    QWidget *add;
    QLabel *welcome1;
    QLabel *welcome2;
    QLabel *welcome3;
    QGroupBox *groupBox;
    QPushButton *pushButton_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *nameInput;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *phoneNumberInput;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *nickNameInput;
    QWidget *remove;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QWidget *tab_3;
    QTableView *tableView_2;
    QLabel *label_6;
    QListView *listView_2;
    QDialogButtonBox *buttonBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuGraphical_Phonebook;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 40, 601, 111));
        QFont font;
        font.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font.setPointSize(64);
        label->setFont(font);
        Add = new QTabWidget(centralwidget);
        Add->setObjectName("Add");
        Add->setGeometry(QRect(110, 180, 581, 341));
        add = new QWidget();
        add->setObjectName("add");
        welcome1 = new QLabel(add);
        welcome1->setObjectName("welcome1");
        welcome1->setGeometry(QRect(150, 30, 311, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font1.setPointSize(24);
        welcome1->setFont(font1);
        welcome2 = new QLabel(add);
        welcome2->setObjectName("welcome2");
        welcome2->setGeometry(QRect(150, 60, 311, 41));
        welcome3 = new QLabel(add);
        welcome3->setObjectName("welcome3");
        welcome3->setGeometry(QRect(150, 90, 351, 16));
        groupBox = new QGroupBox(add);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 110, 431, 181));
        pushButton_4 = new QPushButton(add);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(440, 250, 100, 32));
        widget = new QWidget(add);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 140, 281, 141));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(label_3);

        nameInput = new QLineEdit(widget);
        nameInput->setObjectName("nameInput");
        nameInput->setDragEnabled(true);
        nameInput->setClearButtonEnabled(false);

        horizontalLayout->addWidget(nameInput);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(label_4);

        phoneNumberInput = new QLineEdit(widget);
        phoneNumberInput->setObjectName("phoneNumberInput");
        phoneNumberInput->setDragEnabled(true);

        horizontalLayout_2->addWidget(phoneNumberInput);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_3->addWidget(label_5);

        nickNameInput = new QLineEdit(widget);
        nickNameInput->setObjectName("nickNameInput");
        nickNameInput->setDragEnabled(true);

        horizontalLayout_3->addWidget(nickNameInput);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        Add->addTab(add, QString());
        groupBox->raise();
        phoneNumberInput->raise();
        label_3->raise();
        nickNameInput->raise();
        label_4->raise();
        label_5->raise();
        nameInput->raise();
        welcome1->raise();
        welcome2->raise();
        welcome3->raise();
        pushButton_4->raise();
        remove = new QWidget();
        remove->setObjectName("remove");
        label_2 = new QLabel(remove);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 30, 181, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("AppleMyungjo")});
        font2.setPointSize(24);
        label_2->setFont(font2);
        scrollArea = new QScrollArea(remove);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(70, 160, 451, 121));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 449, 119));
        scrollArea->setWidget(scrollAreaWidgetContents);
        lineEdit_4 = new QLineEdit(remove);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(150, 70, 311, 31));
        comboBox = new QComboBox(remove);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(290, 110, 103, 32));
        pushButton_3 = new QPushButton(remove);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(399, 110, 61, 32));
        Add->addTab(remove, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tableView_2 = new QTableView(tab_3);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(50, 90, 256, 201));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 30, 181, 31));
        label_6->setFont(font2);
        listView_2 = new QListView(tab_3);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(340, 90, 191, 91));
        buttonBox_2 = new QDialogButtonBox(tab_3);
        buttonBox_2->setObjectName("buttonBox_2");
        buttonBox_2->setGeometry(QRect(360, 220, 152, 32));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Add->addTab(tab_3, QString());
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(590, 130, 61, 32));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(660, 130, 61, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 36));
        menuGraphical_Phonebook = new QMenu(menubar);
        menuGraphical_Phonebook->setObjectName("menuGraphical_Phonebook");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGraphical_Phonebook->menuAction());

        retranslateUi(MainWindow);

        Add->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Graphical Phonebook", nullptr));
        welcome1->setText(QCoreApplication::translate("MainWindow", "Welcome!", nullptr));
        welcome2->setText(QCoreApplication::translate("MainWindow", "If you want to add information to Contact, ", nullptr));
        welcome3->setText(QCoreApplication::translate("MainWindow", "please fill the blanks below:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "addBox", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "PhoneNumber", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Nickname", nullptr));
        Add->setTabText(Add->indexOf(add), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Search Contacts", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        Add->setTabText(Add->indexOf(remove), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Delete Contacts", nullptr));
        Add->setTabText(Add->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Page", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        menuGraphical_Phonebook->setTitle(QCoreApplication::translate("MainWindow", "GraphicalPhonebook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
