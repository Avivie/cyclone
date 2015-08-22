cmake_minimum_required(VERSION 3.2)

project(cyclone)

# Find includes in corresponding build directories.
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
# Instruct CMake to run uic automatically when needed.
set(CMAKE_AUTOUIC ON)

# Find Qt libraries.
find_package(Qt5Core)
find_package(Qt5Gui)
find_package(Qt5Widgets)

# Tell CMake to create the cyclone executable.
add_executable(cyclone main.cpp
                       mainwindow.cpp
                       mainwindow.h
                       mainwindow.ui)

# Link against Qt libraries.
target_link_libraries(cyclone Qt5::Core
                              Qt5::Gui
                              Qt5::Widgets)
