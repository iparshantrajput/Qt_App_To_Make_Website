#include "heading.h"
#include <QFile>
#include <QTextStream>
heading::heading()
{
}
heading::~heading()
{
}
void heading::setHeading(const QString heading)
{
    QFile html("D:/BSCS/DSU/2nd SEMESTER/OOP Lab/Project/Project/htmlFiles/home.html");
    if(html.open(QFile::Append)){
        QTextStream out(&html);
        if(headingSize == "")
            out << "<h1" << " " << headingColor  << ">" << heading << "</h1>" << endl;
        else if(headingColor == "")
            out << "<" << headingSize << ">" << heading << "</" << headingSize << ">" << endl;
        else if(headingColor == "" && headingSize == "")
            out << "<h1>" << heading <<"</h1>" << endl;
        else{
        out << "<" << headingSize << " " << headingColor  << ">" << heading << "</" << headingSize << ">" << endl;
        html.flush();
        html.close();
        }
    }
}
void heading::setHeadingSize(const QString headingSize){
    this->headingSize = headingSize;
}

void heading::setHeadingColor(const QString headingColor){
    this->headingColor = headingColor;
}
