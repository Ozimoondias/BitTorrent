//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::add()
{
    srv_.Post("/add", [&](const Request & req, Response &res)
    {
        const auto& param = get_param(req.body, '|');

        if (param.size() == 2)
            torrent_.push_back(std::make_unique<Torrent>(param[1]));
        if (param.size() == 3)
            torrent_.push_back(std::make_unique<Torrent>(param[1], param[2]));
    });
}