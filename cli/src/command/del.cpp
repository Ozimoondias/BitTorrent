//
// Created by agar on 07/08/2020.
//

#include    "../../include/command/del.hpp"

void        Del::run(const std::vector<std::string>& param,
                     httplib::Client& client)
{
    auto res = client.Post("/del", "test", "text/plain");
}