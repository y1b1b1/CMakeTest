#ifndef TESTPLUGINA_TESTINTERFACE_H
#define TESTPLUGINA_TESTINTERFACE_H


class TestPluginA_Interface {
public:
    TestPluginA_Interface() {}
    virtual ~TestPluginA_Interface() {}

public:
    virtual void InterfaceTest() = 0;
};


#define TestPluginA_Interface_iid "org.test.testplugina"

Q_DECLARE_INTERFACE(TestPluginA_Interface, TestPluginA_Interface_iid)

#endif // TESTPLUGINA_TESTINTERFACE_H
