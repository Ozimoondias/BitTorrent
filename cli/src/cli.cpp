//
// Created by agar on 03/08/2020.
//

#include        "../include/cli.hpp"

Cli::Cli()
{
    client = httplib::Client("localhost", 8080);
}

void            Cli::set_client(const std::string &host,
                                const std::string &port)
{
    try
    {
        client = httplib::Client(host, std::stoi(port));
    }
    catch (...)
    {
        std::cout << "Catch: host or port" << std::endl;
        throw;
    }
}
/*
auto res = client.Get("/torrent");

if (res)
std::cout << res->body << std::endl;

auto post = client.Post("/add", "test1", "sds");
*/

std::vector<std::string>    Cli::get_param(const std::string &str,
                                           const char &delimiter)
                                           const
{
    std::string                 token;
    std::vector<std::string>    params;
    std::istringstream          tokenStream(str);

    while (std::getline(tokenStream, token, delimiter))
        params.push_back(token);

    return params;
}

void    Cli::parse_param(const std::vector<std::string> &param) const
{
    
}

[[noreturn]] void   Cli::setup_cli(int ac,
                                   char **av)
                                   const
{
    std::string                 command;
    std::vector<std::string>    param;

    while (1)
    {
        std::cout << "BitTorrent>>> ";
        std::getline(std::cin, command);

        param = get_param(command, ' ');

        for (auto it : param)
            std::cout << "param: " << it << std::endl;

        if (param.size() > 0)
            parse_param(param);
    }
}