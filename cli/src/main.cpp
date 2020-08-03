//
// Created by agar on 01/08/2020.
//

#include    <iostream>

#include    "../../lib/httplib.h"

int         main()
{
    size_t pos = 0;
    std::string token;

    httplib::Client cli("localhost", 8080);

    auto res = cli.Get("/torrent");
    if (res)
    {
        std::string test(res->body);

        while ((pos = test.find('\t')) != std::string::npos)
        {
            token = test.substr(0, pos);
            std::cout << token << std::endl;
            test.erase(0, pos + 1);
        }
    }

    return 0;
}
