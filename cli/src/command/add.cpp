//
// Created by agar on 06/08/2020.
//

#include    "../../include/command/add.hpp"

void        Add::run(const std::vector<std::string>& param,
                     httplib::Client& client)
{
    auto res = client.Get("/torrent");

    if (res)
        std::cout << "response: " << res->body << std::endl;
}