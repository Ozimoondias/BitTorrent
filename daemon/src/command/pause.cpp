//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::pause() {
    srv_.Post("/pause", [&](const Request &req, Response &res) {
        if (req.params.size() == 1)
            for (const auto &it : torrent_)
                if (it->name_ == req.params.begin()->second) {
                    if (it->status_ != PAUSED) {
                        it->status_ = PAUSED;
                        std::string str(it->name_);
                        str.append(" status changed to ");
                        str.append(PAUSED);
                        res.set_content(str, "text/plain");
                    }
                }
    });
}