//
// Created by agar on 07/08/2020.
//

#include    "../../include/command/info.hpp"

void        Info::run(const std::vector<std::string>& param,
                      httplib::Client& client)
{
    auto res = client.Get("/info");

    if (res)
        if (res->body.size() != 0)
            std::cout << YELLOW << res->body << RESET << std::endl;
}