#include "mainwindow.h"

#include <iostream>

#include <QApplication>
#include <QPluginLoader>

//#include <Poco/File.h>
//#include <Poco/Path.h>

#include "TestLib2/TestLib2.h"
#include "TestPluginA/include/TestInterface.h"

int main(int argc, char *argv[])
{
    //std::string str_cur = Poco::Path::current();


    QApplication a(argc, argv);

    DoTestLib2();

    // Load Plugin
    QPluginLoader loader("../lib/libTestPluginA.so");
    bool b_re = loader.load();
    if (!b_re) {
        std::cout<<"Load fail!"<<std::endl;
        std::cout<< loader.errorString().toStdString()<<std::endl;
    } else {
        QObject* plugin = loader.instance();
        if (plugin) {
            TestPluginA_Interface* p_interface = qobject_cast<TestPluginA_Interface *>(plugin);
            if (p_interface) {
                p_interface->InterfaceTest();
            }
        }
    }


    MainWindow w;
    w.show();

    return a.exec();
}
