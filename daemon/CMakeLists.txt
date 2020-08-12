project(BT_daemon)

find_package(Threads REQUIRED)

add_executable(BT_daemon
        src/daemon.cpp
        src/command/add.cpp
        src/command/del.cpp
        src/command/info.cpp
        src/command/pause.cpp
        src/command/resume.cpp
        src/daemonserver.cpp
        src/main.cpp)

target_link_libraries(BT_daemon Threads::Threads)