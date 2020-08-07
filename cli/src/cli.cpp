//
// Created by agar on 03/08/2020.
//

#include        "../include/cli.hpp"

Cli::Cli()
{
    client_ = httplib::Client("localhost", 8080);
    client_.Get("/hi");

    httplib::Client client_test("localhost", 8080);
    client_test.Get("/hi");

    command_.emplace("add", std::make_unique<Add>());
    command_.emplace("rm", std::make_unique<Del>());
    command_.emplace("help", std::make_unique<Help>());
    command_.emplace("info", std::make_unique<Info>());
    command_.emplace("pause", std::make_unique<Pause>());
    command_.emplace("resume", std::make_unique<Resume>());
}

void            Cli::set_client(const std::string &host,
                                const std::string &port)
{
    try
    {
        client_ = httplib::Client(host, std::stoi(port));
    }
    catch (...)
    {
        std::cout << "Catch: host or port" << std::endl;
        throw;
    }
}

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

void    Cli::parse_param(const std::vector<std::string> &param)
{
    std::cout << std::endl;

    const auto &it = command_.find(param[0]);
    if (it != command_.end())
        it->second->run(param, client_);
}

[[noreturn]] void   Cli::setup_cli(int ac,
                                   char **av)
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