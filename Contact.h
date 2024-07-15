#ifndef CONTACT_H
#define CONTACT_H

#include <QString>
#include <QVector>

class Contact {
private:
    QString bookMark;
    QString name;
    QString phoneNumber;
    QString nickName;

public:
    Contact(/* args */);
    Contact(QString bookMark, QString name, QString phoneNumber, QString nickName);
    Contact(const Contact &obj);
    ~Contact();

    Contact &operator=(const Contact &obj);

    // setter
    void setContactBookMark(QString updateVal);
    void setContactName(QString updateVal);
    void setContactPhoneNumber(QString updateVal);
    void setContactNickName(QString updateVal);
    void setInfo(QString bookMark, QString name, QString phoneNumber, QString nickName);

    // getter
    QString getContactBookMark();
    QString getContactName();
    QString getContactPhoneNumber();
    QString getContactNickName();
};

#endif // CONTACT_H

