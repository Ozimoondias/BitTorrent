//
// Created by agar on 07/08/2020.
//

#include    "../../include/command/help.hpp"

void        Help::run(const std::vector<std::string>& param,
                      httplib::Client& client)
{
    std::cout << CYAN;
    std::cout << "Usage: add [<save-location>] <torrent-file>" << std::endl;
    std::cout << "Usage: del <torrent-id>" << std::endl;
    std::cout << "Usage: info [<torrent-id>]" << std::endl;
    std::cout << "Usage: pause <torrent-id>" << std::endl;
    std::cout << "Usage: resume <torrent-id>" << std::endl;
    std::cout << RESET;
}