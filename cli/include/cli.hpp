//
// Created by agar on 03/08/2020.
//

#ifndef BITTORRENT_CLI_HPP
#define BITTORRENT_CLI_HPP

#include    "../../lib/httplib.h"
#include    "../include/command/icommand.hpp"

#include    "command/add.hpp"
#include    "command/del.hpp"
#include    "command/help.hpp"
#include    "command/info.hpp"
#include    "command/pause.hpp"
#include    "command/resume.hpp"

class   Cli
{
public:
    Cli();
    virtual ~Cli(){}

    void set_client(const std::string&,
                    const std::string&);
    std::vector<std::string>    get_param(const std::string&,
                                          const char&) const;
    void    parse_param(const std::vector<std::string>&);
    [[noreturn]] void setup_cli(int, char**);

private:
    httplib::Client client_;
    std::map<std::string, std::unique_ptr<ICommand>> command_;
};

#endif //BITTORRENT_CLI_HPP
