//
// Created by agar on 02/08/2020.
//

#ifndef BITTORRENT_DSERVER_HPP
#define BITTORRENT_DSERVER_HPP

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
    void        info();
    void        pause();
    void        resume();

    void        setup_server();

    Server                  srv_;
    std::list<std::string>  torrent_;

private:
};

#endif //BITTORRENT_DSERVER_HPP
