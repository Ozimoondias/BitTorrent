project(BT_gui)

set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(BT_gui include/test.hpp include/bt_window.hpp src/main.cpp src/bt_window.cpp src/test.cpp)

target_link_libraries(BT_gui Qt5::Widgets)
