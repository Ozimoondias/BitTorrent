cmake_minimum_required(VERSION 3.1.0)

project(helloworld)

set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(
	helloworld
        src/main.cpp
		include/bt_window.hpp
		src/bt_window.cpp include/test.hpp src/test.cpp)

target_link_libraries(helloworld Qt5::Widgets)
