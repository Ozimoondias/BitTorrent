//
// Created by agar on 01/08/2020.
//

#ifndef BITTORRENT_DAEMON_HPP
#define BITTORRENT_DAEMON_HPP

#include    <iostream>
#include    <thread>
#include    <chrono>
#include    <csignal>

#include    <iterator>
#include    <cstdlib>
#include    <cstring>
#include    <sstream>

#include    <dirent.h>
#include    <stdlib.h>
#include    <sys/stat.h>
#include    <syslog.h>
#include    <unistd.h>

#include    "../include/daemonserver.hpp"

class       Daemon
{
public:
    Daemon(){}
    virtual ~Daemon(){}

    void                    run_daemon();
    [[noreturn]]    void    setup_daemon();
    [[noreturn]]    void    test();

private:

    std::thread     thread_;
    DaemonServer    server_;
};

#endif //BITTORRENT_DAEMON_HPP
