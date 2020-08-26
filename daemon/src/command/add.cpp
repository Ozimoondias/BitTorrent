//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::add() {
    srv_.Post("/add", [&](const Request &req, Response &res) {
        const auto &param = get_param(req.body, '|');

        if (param.size() == 1)
            torrent_.push_back(std::make_unique<Torrent>(param[0]));
        if (param.size() == 2)
            torrent_.push_back(std::make_unique<Torrent>(param[0], param[1]));
    });
}