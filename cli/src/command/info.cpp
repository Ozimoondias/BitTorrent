//
// Created by agar on 07/08/2020.
//

#include    "../../include/command/info.hpp"

void        Info::run(const std::vector<std::string>& param,
                      httplib::Client& client)
{
    auto res = client.Get("/torrent");

    if (res)
        std::cout << "response: " << res->body << std::endl;
}