//
// Created by agar on 03/08/2020.
//

#ifndef BITTORRENT_CLI_HPP
#define BITTORRENT_CLI_HPP

#include    "../../lib/httplib.h"

class   Cli
{
public:
    Cli();
    virtual ~Cli();

    httplib::Client client;

private:
};

#endif //BITTORRENT_CLI_HPP
