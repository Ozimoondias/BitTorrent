//
// Created by agar on 01/08/2020.
//

#include    <iostream>

#include    "../include/cli.hpp"

int         main(int ac, char**av)
{
/*
    size_t pos = 0;
    std::string token;

    Cli     cli;

    cli.client = httplib::Client("localhost", 8080);

    auto post = cli.client.Post("/add", "test1", "sds");

    auto res = cli.client.Get("/torrent");
    if (res)
        std::cout << res->body << std::endl;*/

    Cli cli;

    cli.client = httplib::Client("localhost", 8080);

    auto res = cli.client.Get("/torrent");
    if (res)
        std::cout << res->body << std::endl;

    auto post = cli.client.Post("/add", "test1", "sds");

    return 0;
}
