project(BT_daemon)

find_package(Threads REQUIRED)

add_executable(BT_daemon
        src/daemon.cpp
        src/dserver.cpp
        src/main.cpp)

target_link_libraries(BT_daemon Threads::Threads)