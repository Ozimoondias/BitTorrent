//
// Created by agar on 06/08/2020.
//

#ifndef BITTORRENT_ADD_HPP
#define BITTORRENT_ADD_HPP

#include    "icommand.hpp"

class       Add : public ICommand
{
public:
    Add(){}
    virtual ~Add(){}

    void    run(const std::vector<std::string>&,
            httplib::Client&);

private:
};

#endif //BITTORRENT_ADD_HPP
