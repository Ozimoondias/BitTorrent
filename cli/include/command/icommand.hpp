//
// Created by agar on 06/08/2020.
//

#ifndef BITTORRENT_ICOMMAND_HPP
#define BITTORRENT_ICOMMAND_HPP

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"

#include    <string>
#include    <vector>
#include    "../../../lib/httplib.h"

class       ICommand
{
public:
    virtual void run(const std::vector<std::string>&,
            httplib::Client&) = 0;
private:
};

#endif //BITTORRENT_ICOMMAND_HPP
