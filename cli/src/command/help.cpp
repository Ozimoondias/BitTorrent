//
// Created by agar on 07/08/2020.
//

#include    "../../include/command/help.hpp"

void        Help::add()
{
}

void        Help::del()
{
    std::cout << CYAN;
    std::cout << "Usage: del <torrent-id>" << std::endl;
    std::cout << RESET;
}

void        Help::info()
{
    std::cout << CYAN;
    std::cout << "Usage: info [<torrent-id>]" << std::endl;
    std::cout << "Options: [<torrent-id>] to identify specific torrent." << std::endl;
    std::cout << RESET;
}

void        Help::pause()
{
    std::cout << CYAN;
    std::cout << "Usage: pause <torrent-id>" << std::endl;
    std::cout << RESET;
}

void        Help::resume()
{
    std::cout << CYAN;
    std::cout << "Usage: resume <torrent-id>" << std::endl;
    std::cout << RESET;
}

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