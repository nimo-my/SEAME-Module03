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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *title;
    QHBoxLayout *saveAndLoadBox;
    QTabWidget *tabWidgetBox;
    QWidget *tabWidgetAdd;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *addContactMain;
    QVBoxLayout *addContactWelcomeLayoutOuter;
    QLabel *welcome1;
    QVBoxLayout *welcomeLayoutInner;
    QLabel *welcome2;
    QLabel *welcome3;
    QFrame *line;
    QVBoxLayout *addContactContents;
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
    QRadioButton *checkBookmarkRadioButton;
    QPushButton *confirmButton;
    QWidget *tabWidgetSearch;
    QLabel *widgetSearchLabel;
    QLineEdit *widgetSearchTextEditBar;
    QComboBox *widgetSearchComboBox;
    QPushButton *widgetSearchButton;
    QLabel *widgetSearchTODO;
    QTableWidget *tableWidgetSearch;
    QPushButton *pushButtonReset;
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
        layoutWidget->setGeometry(QRect(90, 60, 621, 461));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        title = new QLabel(layoutWidget);
        title->setObjectName("title");
        QFont font;
        font.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font.setPointSize(64);
        title->setFont(font);

        gridLayout->addWidget(title, 1, 0, 1, 2);

        saveAndLoadBox = new QHBoxLayout();
        saveAndLoadBox->setObjectName("saveAndLoadBox");
        tabWidgetBox = new QTabWidget(layoutWidget);
        tabWidgetBox->setObjectName("tabWidgetBox");
        tabWidgetAdd = new QWidget();
        tabWidgetAdd->setObjectName("tabWidgetAdd");
        layoutWidget1 = new QWidget(tabWidgetAdd);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(160, 30, 286, 269));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        addContactMain = new QVBoxLayout();
        addContactMain->setObjectName("addContactMain");
        addContactWelcomeLayoutOuter = new QVBoxLayout();
        addContactWelcomeLayoutOuter->setObjectName("addContactWelcomeLayoutOuter");
        welcome1 = new QLabel(layoutWidget1);
        welcome1->setObjectName("welcome1");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font1.setPointSize(24);
        welcome1->setFont(font1);

        addContactWelcomeLayoutOuter->addWidget(welcome1);

        welcomeLayoutInner = new QVBoxLayout();
        welcomeLayoutInner->setObjectName("welcomeLayoutInner");
        welcome2 = new QLabel(layoutWidget1);
        welcome2->setObjectName("welcome2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Nanum Myeongjo")});
        welcome2->setFont(font2);

        welcomeLayoutInner->addWidget(welcome2);

        welcome3 = new QLabel(layoutWidget1);
        welcome3->setObjectName("welcome3");
        welcome3->setFont(font2);

        welcomeLayoutInner->addWidget(welcome3);


        addContactWelcomeLayoutOuter->addLayout(welcomeLayoutInner);


        addContactMain->addLayout(addContactWelcomeLayoutOuter);

        line = new QFrame(layoutWidget1);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        addContactMain->addWidget(line);

        addContactContents = new QVBoxLayout();
        addContactContents->setObjectName("addContactContents");
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


        addContactContents->addLayout(verticalLayout);


        addContactMain->addLayout(addContactContents);


        verticalLayout_6->addLayout(addContactMain);

        checkBookmarkRadioButton = new QRadioButton(layoutWidget1);
        checkBookmarkRadioButton->setObjectName("checkBookmarkRadioButton");

        verticalLayout_6->addWidget(checkBookmarkRadioButton);

        confirmButton = new QPushButton(layoutWidget1);
        confirmButton->setObjectName("confirmButton");

        verticalLayout_6->addWidget(confirmButton);

        tabWidgetBox->addTab(tabWidgetAdd, QString());
        tabWidgetSearch = new QWidget();
        tabWidgetSearch->setObjectName("tabWidgetSearch");
        widgetSearchLabel = new QLabel(tabWidgetSearch);
        widgetSearchLabel->setObjectName("widgetSearchLabel");
        widgetSearchLabel->setGeometry(QRect(210, 30, 181, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("AppleMyungjo")});
        font3.setPointSize(24);
        widgetSearchLabel->setFont(font3);
        widgetSearchTextEditBar = new QLineEdit(tabWidgetSearch);
        widgetSearchTextEditBar->setObjectName("widgetSearchTextEditBar");
        widgetSearchTextEditBar->setGeometry(QRect(150, 70, 311, 31));
        widgetSearchComboBox = new QComboBox(tabWidgetSearch);
        widgetSearchComboBox->addItem(QString());
        widgetSearchComboBox->addItem(QString());
        widgetSearchComboBox->addItem(QString());
        widgetSearchComboBox->addItem(QString());
        widgetSearchComboBox->setObjectName("widgetSearchComboBox");
        widgetSearchComboBox->setGeometry(QRect(470, 10, 103, 32));
        widgetSearchButton = new QPushButton(tabWidgetSearch);
        widgetSearchButton->setObjectName("widgetSearchButton");
        widgetSearchButton->setGeometry(QRect(480, 40, 61, 32));
        widgetSearchTODO = new QLabel(tabWidgetSearch);
        widgetSearchTODO->setObjectName("widgetSearchTODO");
        widgetSearchTODO->setGeometry(QRect(400, 310, 201, 20));
        tableWidgetSearch = new QTableWidget(tabWidgetSearch);
        if (tableWidgetSearch->columnCount() < 4)
            tableWidgetSearch->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetSearch->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetSearch->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetSearch->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetSearch->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetSearch->setObjectName("tableWidgetSearch");
        tableWidgetSearch->setGeometry(QRect(80, 130, 461, 171));
        pushButtonReset = new QPushButton(tabWidgetSearch);
        pushButtonReset->setObjectName("pushButtonReset");
        pushButtonReset->setGeometry(QRect(480, 70, 100, 32));
        tabWidgetBox->addTab(tabWidgetSearch, QString());
        tabWidgetShow = new QWidget();
        tabWidgetShow->setObjectName("tabWidgetShow");
        showContactTable = new QTableView(tabWidgetShow);
        showContactTable->setObjectName("showContactTable");
        showContactTable->setGeometry(QRect(50, 90, 481, 201));
        showLabel = new QLabel(tabWidgetShow);
        showLabel->setObjectName("showLabel");
        showLabel->setGeometry(QRect(90, 30, 181, 31));
        showLabel->setFont(font3);
        tabWidgetBox->addTab(tabWidgetShow, QString());

        saveAndLoadBox->addWidget(tabWidgetBox);


        gridLayout->addLayout(saveAndLoadBox, 2, 1, 1, 1);

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

        tabWidgetBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Graphical Phonebook", nullptr));
        welcome1->setText(QCoreApplication::translate("MainWindow", "Welcome!", nullptr));
        welcome2->setText(QCoreApplication::translate("MainWindow", "If you want to add information to Contact, ", nullptr));
        welcome3->setText(QCoreApplication::translate("MainWindow", "please fill the blanks below:", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        phoneNumberLabel->setText(QCoreApplication::translate("MainWindow", "PhoneNumber", nullptr));
        nicknameLabel->setText(QCoreApplication::translate("MainWindow", "Nickname", nullptr));
        checkBookmarkRadioButton->setText(QCoreApplication::translate("MainWindow", "Check Bookmark", nullptr));
        confirmButton->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        tabWidgetBox->setTabText(tabWidgetBox->indexOf(tabWidgetAdd), QCoreApplication::translate("MainWindow", "ADD CONTACT", nullptr));
        widgetSearchLabel->setText(QCoreApplication::translate("MainWindow", "Search Contacts", nullptr));
        widgetSearchComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "name", nullptr));
        widgetSearchComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "phoneNumber", nullptr));
        widgetSearchComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "nickName", nullptr));
        widgetSearchComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "bookMark", nullptr));

        widgetSearchButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        widgetSearchTODO->setText(QCoreApplication::translate("MainWindow", "need to make delete button here", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetSearch->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Bookmark", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetSearch->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetSearch->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Tel.", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetSearch->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Nickname", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        tabWidgetBox->setTabText(tabWidgetBox->indexOf(tabWidgetSearch), QCoreApplication::translate("MainWindow", "SEARCH", nullptr));
        showLabel->setText(QCoreApplication::translate("MainWindow", "Show Contacts", nullptr));
        tabWidgetBox->setTabText(tabWidgetBox->indexOf(tabWidgetShow), QCoreApplication::translate("MainWindow", "SHOW", nullptr));
        menuGraphical_Phonebook->setTitle(QCoreApplication::translate("MainWindow", "GraphicalPhonebook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
