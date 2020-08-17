//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::del() {
    srv_.Post("/del", [&](const Request &req, Response &res) {
        if (req.params.size() == 1) {
            std::list<std::unique_ptr<Torrent>>::const_iterator it = torrent_.cbegin();

            while (it != torrent_.cend()) {
                if (it->get()->name_ == req.params.begin()->second) {
                    std::string str(it->get()->name_);
                    str.append(" has been deleted.");
                    res.set_content(str, "text/plain");
                    it = torrent_.erase(it);
                } else {
                    ++it;
                }
            }
        }
    });
}