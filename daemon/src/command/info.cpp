//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::info()
{
    srv_.Get("/info", [&](const Request & req, Response &res)
    {
        std::ostringstream stream;
        std::string str;

        for (auto const& i : torrent_)
        {
            stream << *i;
            stream.put('\n');
        }

        res.set_content(stream.str(), "text/plain");
    });
}