//
// Created by agar on 06/08/2020.
//

#ifndef BITTORRENT_ICOMMAND_HPP
#define BITTORRENT_ICOMMAND_HPP

#include    <string>
#include    <vector>
#include    "../../../lib/httplib.h"

class       ICommand
{
public:
    virtual void run(const std::vector<std::string>&,
            httplib::Client&) = 0;
private:
};

#endif //BITTORRENT_ICOMMAND_HPP
