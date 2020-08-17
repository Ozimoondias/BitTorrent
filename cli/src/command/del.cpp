//
// Created by agar on 07/08/2020.
//

#include    "../../include/command/del.hpp"

void        Del::run(const std::vector<std::string>& param,
                     httplib::Client& client) {
    if (param.size() == 2) {
        httplib::Params params;
        params.emplace("name", param[1]);
        auto res = client.Post("/del", params);
        print_req(res);
    } else {
        std::cout << CYAN;
        std::cout << "Usage: del <torrent-id>" << std::endl;
        std::cout << RESET;
    }
}