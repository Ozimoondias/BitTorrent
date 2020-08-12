//
// Created by agar on 01/08/2020.
//

#include    <iostream>

#include    "../include/cli.hpp"

int         main(int ac, char **av)
{
    Cli     cli;

    try
    {
        if (ac == 3)
            cli.set_client(av[1], av[2]);
        else
            cli.set_client("localhost", "8080");
        cli.setup_cli(ac, av);
    }
    catch (...)
    {
        std::cout << "Aie Aie Aie" << std::endl;
    }
    return 0;
}