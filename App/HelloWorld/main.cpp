#include <iostream>

#include "TestLib1/TestLib1.h"

#include "Test1.h"

int main(int argc, char** argv) {
    std::cout<<"Hello World!.."<<std::endl;

    TestLib::TestLib_C test_lib;
    test_lib.Test();

    Test1();

    return 0;
}
