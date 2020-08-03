//
// Created by agar on 01/08/2020.
//

#include    "../include/daemon.hpp"

#include    <thread>

int         main()
{
    Daemon  daemon;

    daemon.setup_daemon();

    return 0;
}