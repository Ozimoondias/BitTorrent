//
// Created by agar on 06/08/2020.
//

#include    "../../include/command/add.hpp"

void            Add::run(const std::vector<std::string>& param,
                         httplib::Client& client) {
    std::string body;

    if (param.size() == 2 || param.size() == 3) {
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