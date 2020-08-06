//
// Created by agar on 07/08/2020.
//

#ifndef BITTORRENT_PAUSE_HPP
#define BITTORRENT_PAUSE_HPP

#include    "icommand.hpp"

class       Pause : public ICommand
{
public:
    Pause(){}
    virtual ~Pause(){}

    void    run(const std::vector<std::string>&,
                const httplib::Client&);

private:
};

#endif //BITTORRENT_PAUSE_HPP
