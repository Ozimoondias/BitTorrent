//
// Created by agar on 07/08/2020.
//

#ifndef BITTORRENT_INFO_HPP
#define BITTORRENT_INFO_HPP

#include    "icommand.hpp"

class       Info : public ICommand
{
public:
    Info(){}
    virtual ~Info(){}

    void    run(const std::vector<std::string>&,
            httplib::Client&);

private:
};

#endif //BITTORRENT_INFO_HPP
