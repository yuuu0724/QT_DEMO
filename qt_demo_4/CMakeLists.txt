cmake_minimum_required(VERSION 3.5)
project(qt_demo_4)

set(CMAKE_CXX_STANDARD 11)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(qt_demo_4 
    src/main.cpp
    src/secondwindow.cpp
    )

include_directories(qt_demo_4 PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    )
    
target_link_libraries(qt_demo_4 Qt5::Widgets)