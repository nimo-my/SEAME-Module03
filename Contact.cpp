#include "Contact.h"

Contact::Contact(/* args */){
}

Contact::Contact(QString bookMark, QString name, QString phoneNumber, QString nickName)
{
    this->bookMark = bookMark;
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->nickName = nickName;
}

Contact::Contact(const Contact &obj){
    *this = obj;
}


Contact::~Contact(){

}


Contact &Contact::operator=(const Contact &obj){
    this->bookMark = obj.bookMark;
    this->name = obj.name;
    this->phoneNumber = obj.phoneNumber;
    this->nickName = obj.nickName;
    return (*this);
}

void Contact::setInfo(QString bookMark, QString name, QString phoneNumber, QString nickName)
{
    this->bookMark = bookMark;
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->nickName = nickName;
}

void Contact::setContactName(QString updateVal){
    this->name = updateVal;
}


void Contact::setContactPhoneNumber(QString updateVal){
    this->phoneNumber = updateVal;
}


void Contact::setContactNickName(QString updateVal){
    this->nickName = updateVal;
}

void Contact::setContactBookMark(QString updateVal){
    this->bookMark = updateVal;
}

QString Contact::getContactBookMark(){
    return (this->bookMark);
}

QString Contact::getContactName(){
    return (this->name);
}


QString Contact::getContactPhoneNumber(){
    return (this->phoneNumber);
}


QString Contact::getContactNickName(){
    return (this->nickName);
}
