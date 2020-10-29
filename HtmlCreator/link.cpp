#include "link.h"

link::link()
{

}
link::~link(){}
void link::setLink(const QString linkAddress,const QString linkName)
{
    QFile html("D:/BSCS/DSU/2nd SEMESTER/OOP Lab/Project/Project/htmlFiles/home.html");

    if(html.open(QFile::Append)){
        QTextStream out(&html);
        out << "<b><a href=\"  " << linkAddress << "\">" << linkName << "</a>" << endl;
        html.flush();
        html.close();
    }
}

