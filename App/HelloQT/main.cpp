#include "mainwindow.h"
#include <QApplication>

//#include <Poco/File.h>
//#include <Poco/Path.h>

int main(int argc, char *argv[])
{
    //std::string str_cur = Poco::Path::current();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
