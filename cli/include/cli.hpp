//
// Created by agar on 03/08/2020.
//

#ifndef BITTORRENT_CLI_HPP
#define BITTORRENT_CLI_HPP

#include    "../../lib/httplib.h"
#include    "../include/command.hpp"

class   Cli
{
public:
    Cli();
    virtual ~Cli(){}

    void set_client(const std::string&,
                    const std::string&);
    std::vector<std::string>    get_param(const std::string&,
                                          const char&) const;
    void    parse_param(std::vector<std::string>&) const;
    [[noreturn]] void setup_cli(int, char**) const;

private:
    httplib::Client client_;
    std::map<std::string, std::function<void(
            std::vector<std::string>&)>> command_;
};

#endif //BITTORRENT_CLI_HPP
