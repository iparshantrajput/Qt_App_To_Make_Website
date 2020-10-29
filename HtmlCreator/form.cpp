#include "form.h"
#include <QFile>
#include <QTextStream>

form::form()
{}
form::~form()
{}
void form::setForm(const QString formName)
{
    QFile html("D:/BSCS/DSU/2nd SEMESTER/OOP Lab/Project/Project/htmlFiles/home.html");

    if(html.open(QFile::Append)){
        QTextStream out(&html);
        out << "<form>" << "<fieldset>" << "<legend>" << formName << "</legend>" << firstName << lastName << dateOfBirth << email << gender << phoneNumber << commentBox << "</fieldset>" << "</form>" << endl;
        html.flush();
        html.close();
    }
}
void form::setFirstName(const QString firstName)
{
    this->firstName = firstName;
}
void form::setLastName(const QString lastName)
{
    this->lastName = lastName;
}
void form::setDateOfBirth(const QString dateOfBirth)
{
    this->dateOfBirth = dateOfBirth;
}
void form::setGender(const QString gender)
{
    this->gender = gender;
}
void form::setEmail(const QString email)
{
    this->email = email;
}
void form::setPhoneNumber(const QString phoneNumber)
{
    this->phoneNumber = phoneNumber;
}
void form::setCommentBox(const QString commentBox)
{
    this->commentBox = commentBox;
}
