#include "list.h"

list::list()
{}
list::~list()
{}
void list::setList(const QString item1,const QString item2,const QString item3,const QString item4,const QString item5)
{
    QFile html("D:/BSCS/DSU/2nd SEMESTER/OOP Lab/Project/Project/htmlFiles/home.html");

    if(html.open(QFile::Append)){
        QTextStream out(&html);
        out << "<" << listStyle << " " << listProperty << "> <li>" << item1 << "</li> <li>" << item2 << "</li> <li>" << item3 << "</li> <li>" << item4 << "</li> <li>" << item5 << "</li> </" << listStyle << ">" << endl;
        html.flush();
        html.close();
    }
}
void list::setListStyle(const QString listStyle)
{
    this->listStyle = listStyle;
}
void list::setListProperty(const QString listProperty)
{
    this->listProperty = listProperty;
}
