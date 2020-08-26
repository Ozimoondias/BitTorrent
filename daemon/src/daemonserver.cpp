//
// Created by agar on 02/08/2020.
//

#include "../include/daemonserver.hpp"

DaemonServer::DaemonServer()
{
    std::ifstream   file("save.txt");  //Ouverture d'un fichier en lecture

    if(file) {
        std::string ligne;

        while (getline(file, ligne)) {
            std::string token;
            std::vector<std::string> param;
            std::istringstream stream(ligne);

            while (std::getline(stream, token, '|'))
                param.push_back(token);

            if (!param.empty()) {
                if (param.size() == 1)
                    torrent_.push_back(std::make_unique<Torrent>(param[0]));
                if (param.size() == 2)
                    torrent_.push_back(std::make_unique<Torrent>(param[0], param[1]));
            }
        }
    }
    else
        throw ("error file");
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

void        DaemonServer::save()
{
    std::ofstream file("save.txt");

    if(file) {
        for (const auto& it : torrent_) {
            std::string test;
            it.get()->infos_save(test);
            file << test << std::endl;
        }
    }
    else
        throw ("error file");
}