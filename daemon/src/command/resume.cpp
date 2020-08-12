//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::resume()
{
    srv_.Post("/resume", [&](const Request & req, Response &res)
    {
        std::cout << "Resume" << std::endl;
    });
}