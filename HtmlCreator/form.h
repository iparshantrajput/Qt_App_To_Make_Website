#ifndef FORM_H
#define FORM_H
#include "html.h"

class form: public html
{
public:
    form();
    virtual ~form();
    void setForm(const QString formName);
    void setFirstName(const QString firstName);
    void setLastName(const QString lastName);
    void setDateOfBirth(const QString dateOfBirth);
    void setGender(const QString gender);
    void setEmail(const QString email);
    void setPhoneNumber(const QString phoneNumber);
    void setCommentBox(const QString commentBox);
private:
    QString formName;
    QString firstName;
    QString lastName;
    QString dateOfBirth;
    QString gender;
    QString email;
    QString phoneNumber;
    QString commentBox;

};

#endif // FORM_H
