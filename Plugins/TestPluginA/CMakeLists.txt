
# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

include_directories(./include)

# Find the QtWidgets library
find_package(Qt5Widgets)
#find_package(Poco)

#qt5_wrap_ui(ui_testdialog.h testdialog.ui)

qt5_add_resources(RESOURCE_SORCE ./resource/HelloQT.qrc ./resource/TestLib2.qrc)



# Tell CMake to create the helloworld executable
add_library(TestPluginA SHARED ./src/TestPluginA.cpp ${RESOURCE_SORCE})



# Use the Widgets module from Qt 5.
#LINK_DIRECTORIES(~/Libs/poco-1.7.5-all/lib/Linux/x86_64)
#target_link_libraries(HelloQT Qt5::Widgets libPocoFoundationd.so)
target_link_libraries(TestPluginA Qt5::Widgets)
