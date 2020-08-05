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

#include    "../include/dserver.hpp"

class       Daemon
{
public:
    Daemon(){}
    virtual ~Daemon(){}

    void                    run_daemon();
    [[noreturn]]    void    setup_daemon();
    [[noreturn]]    void    test();

private:

    std::thread v_thread;
    DServer     server;
};

#endif //BITTORRENT_DAEMON_HPP
