//
// Created by agar on 02/08/2020.
//

#include "../include/dserver.hpp"

DServer::DServer()
{
    torrent.push_back("All Screwed Up | Dirty Deeds Done Dirt Cheap | 1976");
    torrent.push_back("Anything Goes | Anything Goes | 2008");
    torrent.push_back("Back in Black | Back in Black | 1980");
    torrent.push_back("Badlands | Flick of the Switch | 1995");
    torrent.push_back("C.O.D. | For Those About to Rock We Salute You | 1981");
}

DServer::~DServer()
{
}

void        DServer::setup_server()
{
    Server  svr;

    svr.Post("/add", [&](const Request & req, Response &res)
    {
        torrent.push_back(req.body);
    });

    svr.Get("/torrent", [&](const Request & req, Response &res)
    {
        std::string str;

        /*for (auto const& i : req.params)
        {
            std::cout << i.first << std::endl;
            std::cout << i.second << std::endl;
        }*/

        for (auto const& i : torrent)
        {
            str += i;
            str += '\n';
        }

        std::cout << str << std::endl;

        res.set_content(str, "text/plain");
    });

    svr.listen("localhost", 8080);
}