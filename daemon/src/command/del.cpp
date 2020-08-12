//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::del()
{
    srv_.Post("/del", [&](const Request & req, Response &res)
    {
        std::cout << "Del" << std::endl;
    });
}