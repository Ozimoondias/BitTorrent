//
// Created by agar on 06/08/2020.
//

#include    "../../include/command/add.hpp"

void            Add::run(const std::vector<std::string>& param2,
                         httplib::Client& client) {
    std::string body;
    std::vector<std::string> param;

    if (param2.size() > 1) {
        copy(param2.begin() + 1, param2.end(), back_inserter(param));
        if (param.size() == 1 || param.size() == 2) {
            for (const auto &it : param) {
                body.append(it);
                body.append("|");
            }
            auto res = client.Post("/add", body, "text/plain");
            print_req(res);
        } else {
            std::cout << CYAN;
            std::cout << "Usage: add [<save-location>] <torrent-file>" << std::endl;
            std::cout << "Options: [<save-location>] save path for torrent" << std::endl;
            std::cout << RESET;
        }
    }
}