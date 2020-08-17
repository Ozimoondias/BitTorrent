//
// Created by agar on 07/08/2020.
//

#include    "../../include/command/info.hpp"

void        Info::run(const std::vector<std::string>& param,
                      httplib::Client& client) {
    if (param.size() > 2) {
        std::cout << CYAN;
        std::cout << "Usage: info [<torrent-id>]" << std::endl;
        std::cout << "Options: [<torrent-id>] to identify specific torrent." << std::endl;
        std::cout << RESET;
    } else {
        std::shared_ptr<httplib::Response> req;

        if (param.size() == 1) {
            req = client.Post("/info");
        }
        if (param.size() == 2) {
            httplib::Params params;
            params.emplace("param", param[1]);
            req = client.Post("/info", params);
        }
        print_req(YELLOW, req);
    }
}