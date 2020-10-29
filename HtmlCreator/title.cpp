#include "title.h"

title::title(){}
title::~title(){}
void title::setTitle(const QString title){
    QFile html("D:/BSCS/DSU/2nd SEMESTER/OOP Lab/Project/Project/htmlFiles/home.html");
    if(html.open(QFile::WriteOnly)){
        QTextStream out(&html);
        out << "<title>" << title << "</title>" << endl;
        html.flush();
        html.close();
    }
}

