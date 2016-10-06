#ifndef TESTPLUGINA_TESTPLUGINA_H
#define TESTPLUGINA_TESTPLUGINA_H

#include <QObject>
#include <QtPlugin>
#include "TestInterface.h"

class TestPluginA : public QObject, TestPluginA_Interface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "TestPluginA")
    //Q_PLUGIN_METADATA(IID "org.qt-project.Qt.Examples.EchoInterface" FILE "echoplugin.json")
    Q_INTERFACES(TestPluginA_Interface)

public:
    virtual void InterfaceTest();
};

#endif
