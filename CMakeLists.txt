cmake_minimum_required(VERSION 3.1.0)

project(helloworld)

set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(
	helloworld
	src/simplemenu.cpp
	src/main.cpp
	)

target_link_libraries(helloworld Qt5::Widgets)
