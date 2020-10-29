#ifndef HTML_H
#define HTML_H
#include <iostream>
#include <string>
#include <QDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

class html
{
public:
    html();
    virtual ~html();
    virtual void setTitle(const QString title);
    virtual void setHeading(const QString heading);
    virtual void setHeadingSize(const QString headingSize);
    virtual void setHeadingColor(const QString headingColor);
    virtual void setParagraph(const QString paragraph);
    virtual void setParagraphBold(const QString paragraphBold);
    virtual void setParagraphItalic(const QString paragraphItalic);
    virtual void setParagraphColor(const QString paragraphColor);
    virtual void setImage(const QString imageAddress,const int imageWidth,const int imageHeight);
    virtual void setBackgroundImage(const QString backgroundImage);
    virtual void setForm(const QString formName);
    virtual void setFirstName(const QString firstName);
    virtual void setLastName(const QString lastName);
    virtual void setDateOfBirth(const QString dateOfBirth);
    virtual void setGender(const QString gender);
    virtual void setEmail(const QString email);
    virtual void setPhoneNumber(const QString phoneNumber);
    virtual void setCommentBox(const QString commentBox);
    virtual void setLink(const QString linkAddress,const QString linkName);
    virtual void setList(const QString item1,const QString item2,const QString item3,const QString item4,const QString item5);
    virtual void setListStyle(const QString listStyle);
    virtual void setListProperty(const QString listProperty);
};

#endif // HTML_H
