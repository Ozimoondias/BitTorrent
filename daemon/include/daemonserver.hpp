//
// Created by agar on 02/08/2020.
//

#ifndef BITTORRENT_DSERVER_HPP
#define BITTORRENT_DSERVER_HPP

#include        "../../lib/torrent.hpp"
#include        "../../lib/httplib.h"
using namespace httplib;

#include        <memory>

class           DaemonServer
{
public:
    DaemonServer();
    virtual ~DaemonServer(){}

    void        add();
    void        del();
    void        info_cli();
    void        info_gui();
    void        pause();
    void        resume();

    std::vector<std::string>    get_param(const std::string&,
                                          const char&) const;
    void        setup_server();
    void        save();

private:
    Server                              srv_;
    std::list<std::unique_ptr<Torrent>> torrent_;
};

#endif //BITTORRENT_DSERVER_HPP
