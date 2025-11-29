cmake_minimum_required(VERSION 3.5)
project(qt_demo_3)

set(CMAKE_CXX_STANDARD 11)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(qt_demo_3 main.cpp)

target_link_libraries(qt_demo_3 Qt5::Widgets)