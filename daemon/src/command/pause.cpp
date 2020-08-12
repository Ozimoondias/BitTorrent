//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::pause()
{
    srv_.Post("/pause", [&](const Request & req, Response &res)
    {
        std::cout << "Pause" << std::endl;
    });
}