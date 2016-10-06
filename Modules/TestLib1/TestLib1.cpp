#include "TestLib1.h"

#include <iostream>

using namespace TestLib;



TestLib_C::TestLib_C() {
    std::cout<<"TestLib_C::TestLib_C()"<<std::endl;
}
TestLib_C::~TestLib_C() {
    std::cout<<"TestLib_C::~TestLib_C()"<<std::endl;
}

void TestLib_C::Test() {
    std::cout<<"TestLib_C::Test()"<<std::endl;
}
