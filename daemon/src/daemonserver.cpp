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

void        DaemonServer::setup_server()
{
    add();
    del();
    info();
    pause();
    resume();

    srv_.listen("localhost", 8080);
}