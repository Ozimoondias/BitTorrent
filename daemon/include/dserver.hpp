//
// Created by agar on 02/08/2020.
//

#ifndef BITTORRENT_DSERVER_HPP
#define BITTORRENT_DSERVER_HPP

#include        "../../lib/httplib.h"
using namespace httplib;

#include        <memory>

class           DServer
{
public:
    DServer();
    virtual ~DServer();

    void        setup_server();

    std::list<std::string>  torrent;

private:
};

#endif //BITTORRENT_DSERVER_HPP
