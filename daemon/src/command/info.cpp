//
// Created by agar on 12/08/2020.
//

#include        "../../include/daemonserver.hpp"

void            DaemonServer::info_cli() {
    srv_.Post("/infocli", [&](const Request &req, Response &res) {
        if (req.params.size() <= 1) {
            std::string str;

            for (auto const &i : torrent_) {
                if (req.params.size() >= 1) {
                    if (i->name_ == req.params.begin()->second)
                        i->infos_cli(str);
                } else
                    i->info_cli(str);
            }
            if (str.size () > 0)
                str.resize (str.size () - 2);
            res.set_content(str, "text/plain");
        }
    });
}

void            DaemonServer::info_gui() {
    srv_.Post("/infogui", [&](const Request &req, Response &res) {
        if (req.params.size() <= 1) {
            std::string str;

            for (auto const &i : torrent_) {
                if (req.params.size() >= 1) {
                    if (i->name_ == req.params.begin()->second)
                        i->infos_gui(str);
                } else {
                    i->info_gui(str);
                    str.append("|");
                }
            }
            res.set_content(str, "text/plain");
        }
    });
}