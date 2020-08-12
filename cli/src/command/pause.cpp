//
// Created by agar on 07/08/2020.
//

#include    "../../include/command/pause.hpp"

void        Pause::run(const std::vector<std::string>& param,
                       httplib::Client& client)
{
    auto res = client.Post("/pause", "test", "text/plain");
}
