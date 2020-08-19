//
// Created by agar on 02/08/2020.
//

#include "../include/daemonserver.hpp"

DaemonServer::DaemonServer()
{
    /*
    torrent.push_back("All Screwed Up | Dirty Deeds Done Dirt Cheap | 1976");
    torrent.push_back("Anything Goes | Anything Goes | 2008");
    torrent.push_back("Back in Black | Back in Black | 1980");
    torrent.push_back("Badlands | Flick of the Switch | 1995");
    torrent.push_back("C.O.D. | For Those About to Rock We Salute You | 1981");
     */
}

std::vector<std::string>
        DaemonServer::get_param(const std::string &str,
                                const char &delimiter)
                                const
{
    std::string                 token;
    std::vector<std::string>    params;
    std::istringstream          tokenStream(str);

    while (std::getline(tokenStream, token, delimiter))
        params.push_back(token);

    return params;
}

void        DaemonServer::setup_server()
{
    add();
    del();
    info_cli();
    info_gui();
    pause();
    resume();

    srv_.listen("localhost", 8080);
}