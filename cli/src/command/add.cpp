//
// Created by agar on 06/08/2020.
//

#include    "../../include/command/add.hpp"

void        Add::run(const std::vector<std::string>& param,
                     httplib::Client& client)
{
    std::string     body;

    for (const auto& it : param)
    {
        body.append(it);
        body.append(" ");
    }

    auto res = client.Post("/add", body, "text/plain");
}