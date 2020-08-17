//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::info() {
    srv_.Post("/info", [&](const Request &req, Response &res) {
        if (req.params.size() <= 1) {
            std::ostringstream stream;

            for (auto const &i : torrent_) {
                if (req.params.size() >= 1) {
                    if (i->name_ == req.params.begin()->second) {
                        stream << *i;
                        stream.put('\n');
                    }
                } else {
                    stream << *i;
                    stream.put('\n');
                }
            }
            res.set_content(stream.str(), "text/plain");
        }
    });
}