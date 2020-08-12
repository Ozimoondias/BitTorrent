//
// Created by agar on 07/08/2020.
//

#include    "../../include/command/resume.hpp"

void        Resume::run(const std::vector<std::string>& param,
                        httplib::Client& client)
{
    auto res = client.Post("/resume", "test", "text/plain");
}