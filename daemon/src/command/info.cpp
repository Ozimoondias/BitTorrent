//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::info()
{
    srv_.Get("/info", [&](const Request & req, Response &res)
    {
        std::string str;

        for (auto const& i : torrent_)
        {
            str += i;
            str += '\n';
        }

        res.set_content(str, "text/plain");
    });
}