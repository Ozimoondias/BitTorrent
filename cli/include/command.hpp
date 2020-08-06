//
// Created by agar on 06/08/2020.
//

#ifndef BITTORRENT_COMMAND_HPP
#define BITTORRENT_COMMAND_HPP

#include    <iostream>
#include    <vector>

class       Command
{
public:
    Command(){}
    virtual ~Command(){}

    static void    Add(const std::vector<std::string>&);
    static void    Del(const std::vector<std::string>&);
    static void    Help(const std::vector<std::string>&);

private:
};

#endif //BITTORRENT_COMMAND_HPP