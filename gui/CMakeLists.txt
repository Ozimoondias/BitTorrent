project(BT_gui)

set(CMAKE_AUTOMOC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(BT_gui
        include/MainWindow.hpp
        include/TopWidget.hpp
        include/BottomWidget.hpp
        include/StatesWidget.hpp
        include/TorrentWidget.hpp
        include/TorrentThread.hpp

        src/main.cpp
        src/MainWindow.cpp
        src/TopWidget.cpp
        src/BottomWidget.cpp
        src/StatesWidget.cpp
        src/TorrentWidget.cpp
        src/TorrentThread.cpp
        )

target_link_libraries(BT_gui Qt5::Widgets)
