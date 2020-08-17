//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::resume() {
    srv_.Post("/resume", [&](const Request &req, Response &res) {
        if (req.params.size() == 1)
            for (const auto &it : torrent_)
                if (it->name_ == req.params.begin()->second) {
                    if (it->status_ != DOWNLOAD) {
                        it->status_ = DOWNLOAD;
                        std::string str(it->name_);
                        str.append(" status changed to ");
                        str.append(DOWNLOAD);
                        res.set_content(str, "text/plain");
                    }
                }
    });
}