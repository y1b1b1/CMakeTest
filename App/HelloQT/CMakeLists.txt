
# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
#set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5Widgets)
#find_package(Poco)

qt5_wrap_ui(ui_mainwindow.h mainwindow.ui)

qt5_add_resources(RESOURCE_SORCE ./resource/HelloQT.qrc)


include_directories(${CMAKE_SOURCE_DIR}/Modules)
include_directories(${CMAKE_SOURCE_DIR}/Plugins)


# Tell CMake to create the helloworld executable
add_executable(HelloQT WIN32 main.cpp mainwindow.cpp mainwindow.h ${RESOURCE_SORCE})

# Use the Widgets module from Qt 5.
#LINK_DIRECTORIES(~/Libs/poco-1.7.5-all/lib/Linux/x86_64)
#target_link_libraries(HelloQT Qt5::Widgets libPocoFoundationd.so)

target_include_directories(HelloWorld PRIVATE ${CMAKE_BINARY_DIR}/lib)
target_link_libraries(HelloQT Qt5::Widgets TestLib2)
