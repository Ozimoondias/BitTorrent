project(BT_cli)

add_executable(BT_cli
        src/cli.cpp
        src/command/add.cpp
        src/command/del.cpp
        src/command/help.cpp
        src/command/info.cpp
        src/command/pause.cpp
        src/command/resume.cpp
        src/main.cpp)