//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::add()
{
    srv_.Post("/add", [&](const Request & req, Response &res)
    {
        torrent_.push_back(req.body);
    });
}