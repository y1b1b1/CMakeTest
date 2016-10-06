#include "mainwindow.h"
#include <QApplication>

#include <QPluginLoader>

//#include <Poco/File.h>
//#include <Poco/Path.h>

#include "TestLib2/TestLib2.h"

int main(int argc, char *argv[])
{
    //std::string str_cur = Poco::Path::current();


    QApplication a(argc, argv);

    DoTestLib2();

    MainWindow w;
    w.show();

    return a.exec();
}
