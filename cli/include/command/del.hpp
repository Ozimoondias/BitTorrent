//
// Created by agar on 07/08/2020.
//

#ifndef BITTORRENT_DEL_HPP
#define BITTORRENT_DEL_HPP

#include    "icommand.hpp"

class       Del : public ICommand
{
public:
    Del(){}
    virtual ~Del(){}

    void    run(const std::vector<std::string>&,
            httplib::Client&);

private:
};

#endif //BITTORRENT_DEL_HPP
