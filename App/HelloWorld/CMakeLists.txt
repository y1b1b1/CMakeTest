#project(HelloWorld)

# 设置头文件路径
include_directories(${CMAKE_SOURCE_DIR}/Modules)

# 构建App
aux_source_directory(. SRC_FILES)
add_executable(HelloWorld ${SRC_FILES})

# 链接库
target_include_directories(HelloWorld PRIVATE ${CMAKE_BINARY_DIR}/lib)
target_link_libraries(HelloWorld TestLib1)
