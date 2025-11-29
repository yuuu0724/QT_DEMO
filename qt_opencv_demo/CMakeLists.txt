cmake_minimum_required(VERSION 3.5)
project(qt_opencv_demo)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(OpenCV  REQUIRED)

add_executable(qt_opencv_demo 
    src/main.cpp
    src/mainwindow.cpp
    include/mainwindow.h
    )

target_include_directories(qt_opencv_demo PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    )
    
target_link_libraries(qt_opencv_demo
    Qt5::Widgets
    ${OpenCV_LIBS}    
    )