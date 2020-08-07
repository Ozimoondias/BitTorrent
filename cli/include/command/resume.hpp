//
// Created by agar on 07/08/2020.
//

#ifndef BITTORRENT_RESUME_HPP
#define BITTORRENT_RESUME_HPP

#include    "icommand.hpp"

class       Resume : public ICommand
{
public:
    Resume(){}
    virtual ~Resume(){}

    void    run(const std::vector<std::string>&,
            httplib::Client&);

private:
};

#endif //BITTORRENT_RESUME_HPP
