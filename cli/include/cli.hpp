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
    virtual ~Cli(){}

    void set_client(const std::string&,
                    const std::string&);
    std::vector<std::string>    get_param(const std::string&,
                                          const char&) const;
    void    parse_param(const std::vector<std::string>&) const;
    [[noreturn]] void setup_cli(int, char**) const;

private:
    httplib::Client client;
};

#endif //BITTORRENT_CLI_HPP
