#include <QtGui/QApplication>
#include "mainwindow.h"
#include <iostream> //for debug

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
