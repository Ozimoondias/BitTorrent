//
// Created by agar on 07/08/2020.
//

#ifndef BITTORRENT_HELP_HPP
#define BITTORRENT_HELP_HPP

#include    "icommand.hpp"

class       Help : public ICommand
{
public:
    Help(){}
    virtual ~Help(){}

    void    run(const std::vector<std::string>&,
            httplib::Client&);

private:
};

#endif //BITTORRENT_HELP_HPP