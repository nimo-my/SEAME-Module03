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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *saveAndLoadBox;
    QPushButton *saveButton;
    QPushButton *LoadButton;
    QLabel *title;
    QTabWidget *tabWidget_2;
    QWidget *tabWidget;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *addContactMain;
    QVBoxLayout *welcomeLayoutOuter;
    QLabel *welcome1;
    QVBoxLayout *welcomeLayoutInner;
    QLabel *welcome2;
    QLabel *welcome3;
    QVBoxLayout *contents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *name;
    QLabel *nameLabel;
    QLineEdit *nameInput;
    QHBoxLayout *phoneNumber;
    QLabel *phoneNumberLabel;
    QLineEdit *phoneNumberInput;
    QHBoxLayout *nickname;
    QLabel *nicknameLabel;
    QLineEdit *nickNameInput;
    QPushButton *confirmButton;
    QWidget *tabWidgetSearch;
    QLabel *widgetSearchLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLineEdit *widgetSearchTextEditBar;
    QComboBox *widgetSearchComboBox;
    QPushButton *widgetSearchButton;
    QLabel *widgetSearchTODO;
    QWidget *tabWidgetShow;
    QTableView *showContactTable;
    QLabel *showLabel;
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
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 20, 590, 491));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        saveAndLoadBox = new QHBoxLayout();
        saveAndLoadBox->setObjectName("saveAndLoadBox");
        saveButton = new QPushButton(layoutWidget);
        saveButton->setObjectName("saveButton");

        saveAndLoadBox->addWidget(saveButton);

        LoadButton = new QPushButton(layoutWidget);
        LoadButton->setObjectName("LoadButton");

        saveAndLoadBox->addWidget(LoadButton);


        gridLayout->addLayout(saveAndLoadBox, 2, 1, 1, 1);

        title = new QLabel(layoutWidget);
        title->setObjectName("title");
        QFont font;
        font.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font.setPointSize(64);
        title->setFont(font);

        gridLayout->addWidget(title, 0, 0, 2, 2);

        tabWidget_2 = new QTabWidget(layoutWidget);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget = new QWidget();
        tabWidget->setObjectName("tabWidget");
        layoutWidget1 = new QWidget(tabWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(160, 50, 259, 229));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        addContactMain = new QVBoxLayout();
        addContactMain->setObjectName("addContactMain");
        welcomeLayoutOuter = new QVBoxLayout();
        welcomeLayoutOuter->setObjectName("welcomeLayoutOuter");
        welcome1 = new QLabel(layoutWidget1);
        welcome1->setObjectName("welcome1");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font1.setPointSize(24);
        welcome1->setFont(font1);

        welcomeLayoutOuter->addWidget(welcome1);

        welcomeLayoutInner = new QVBoxLayout();
        welcomeLayoutInner->setObjectName("welcomeLayoutInner");
        welcome2 = new QLabel(layoutWidget1);
        welcome2->setObjectName("welcome2");

        welcomeLayoutInner->addWidget(welcome2);

        welcome3 = new QLabel(layoutWidget1);
        welcome3->setObjectName("welcome3");

        welcomeLayoutInner->addWidget(welcome3);


        welcomeLayoutOuter->addLayout(welcomeLayoutInner);


        addContactMain->addLayout(welcomeLayoutOuter);

        contents = new QVBoxLayout();
        contents->setObjectName("contents");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        name = new QHBoxLayout();
        name->setObjectName("name");
        nameLabel = new QLabel(layoutWidget1);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setLayoutDirection(Qt::RightToLeft);

        name->addWidget(nameLabel);

        nameInput = new QLineEdit(layoutWidget1);
        nameInput->setObjectName("nameInput");
        nameInput->setDragEnabled(true);
        nameInput->setClearButtonEnabled(false);

        name->addWidget(nameInput);


        verticalLayout->addLayout(name);

        phoneNumber = new QHBoxLayout();
        phoneNumber->setObjectName("phoneNumber");
        phoneNumberLabel = new QLabel(layoutWidget1);
        phoneNumberLabel->setObjectName("phoneNumberLabel");
        phoneNumberLabel->setLayoutDirection(Qt::RightToLeft);

        phoneNumber->addWidget(phoneNumberLabel);

        phoneNumberInput = new QLineEdit(layoutWidget1);
        phoneNumberInput->setObjectName("phoneNumberInput");
        phoneNumberInput->setDragEnabled(true);

        phoneNumber->addWidget(phoneNumberInput);


        verticalLayout->addLayout(phoneNumber);

        nickname = new QHBoxLayout();
        nickname->setObjectName("nickname");
        nicknameLabel = new QLabel(layoutWidget1);
        nicknameLabel->setObjectName("nicknameLabel");
        nicknameLabel->setLayoutDirection(Qt::RightToLeft);

        nickname->addWidget(nicknameLabel);

        nickNameInput = new QLineEdit(layoutWidget1);
        nickNameInput->setObjectName("nickNameInput");
        nickNameInput->setDragEnabled(true);

        nickname->addWidget(nickNameInput);


        verticalLayout->addLayout(nickname);


        contents->addLayout(verticalLayout);


        addContactMain->addLayout(contents);


        verticalLayout_6->addLayout(addContactMain);

        confirmButton = new QPushButton(layoutWidget1);
        confirmButton->setObjectName("confirmButton");

        verticalLayout_6->addWidget(confirmButton);

        tabWidget_2->addTab(tabWidget, QString());
        tabWidgetSearch = new QWidget();
        tabWidgetSearch->setObjectName("tabWidgetSearch");
        widgetSearchLabel = new QLabel(tabWidgetSearch);
        widgetSearchLabel->setObjectName("widgetSearchLabel");
        widgetSearchLabel->setGeometry(QRect(210, 30, 181, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("AppleMyungjo")});
        font2.setPointSize(24);
        widgetSearchLabel->setFont(font2);
        scrollArea = new QScrollArea(tabWidgetSearch);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(70, 160, 451, 121));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 449, 119));
        scrollArea->setWidget(scrollAreaWidgetContents);
        widgetSearchTextEditBar = new QLineEdit(tabWidgetSearch);
        widgetSearchTextEditBar->setObjectName("widgetSearchTextEditBar");
        widgetSearchTextEditBar->setGeometry(QRect(150, 70, 311, 31));
        widgetSearchComboBox = new QComboBox(tabWidgetSearch);
        widgetSearchComboBox->setObjectName("widgetSearchComboBox");
        widgetSearchComboBox->setGeometry(QRect(290, 110, 103, 32));
        widgetSearchButton = new QPushButton(tabWidgetSearch);
        widgetSearchButton->setObjectName("widgetSearchButton");
        widgetSearchButton->setGeometry(QRect(399, 110, 61, 32));
        widgetSearchTODO = new QLabel(tabWidgetSearch);
        widgetSearchTODO->setObjectName("widgetSearchTODO");
        widgetSearchTODO->setGeometry(QRect(307, 290, 201, 20));
        tabWidget_2->addTab(tabWidgetSearch, QString());
        tabWidgetShow = new QWidget();
        tabWidgetShow->setObjectName("tabWidgetShow");
        showContactTable = new QTableView(tabWidgetShow);
        showContactTable->setObjectName("showContactTable");
        showContactTable->setGeometry(QRect(50, 90, 481, 201));
        showLabel = new QLabel(tabWidgetShow);
        showLabel->setObjectName("showLabel");
        showLabel->setGeometry(QRect(90, 30, 181, 31));
        showLabel->setFont(font2);
        tabWidget_2->addTab(tabWidgetShow, QString());

        gridLayout->addWidget(tabWidget_2, 3, 0, 1, 2);

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

        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        LoadButton->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Graphical Phonebook", nullptr));
        welcome1->setText(QCoreApplication::translate("MainWindow", "Welcome!", nullptr));
        welcome2->setText(QCoreApplication::translate("MainWindow", "If you want to add information to Contact, ", nullptr));
        welcome3->setText(QCoreApplication::translate("MainWindow", "please fill the blanks below:", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        phoneNumberLabel->setText(QCoreApplication::translate("MainWindow", "PhoneNumber", nullptr));
        nicknameLabel->setText(QCoreApplication::translate("MainWindow", "Nickname", nullptr));
        confirmButton->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tabWidget), QCoreApplication::translate("MainWindow", "ADD CONTACT", nullptr));
        widgetSearchLabel->setText(QCoreApplication::translate("MainWindow", "Search Contacts", nullptr));
        widgetSearchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        widgetSearchTODO->setText(QCoreApplication::translate("MainWindow", "need to make delete button here", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tabWidgetSearch), QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        showLabel->setText(QCoreApplication::translate("MainWindow", "Show Contacts", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tabWidgetShow), QCoreApplication::translate("MainWindow", "SHOW", nullptr));
        menuGraphical_Phonebook->setTitle(QCoreApplication::translate("MainWindow", "GraphicalPhonebook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
