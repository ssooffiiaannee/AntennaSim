#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QMenuBar>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w; //
    w.menuBar()->addMenu("test");
    w.show();
    return a.exec();
}
