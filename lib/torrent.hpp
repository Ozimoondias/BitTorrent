//
// Created by agar on 12/08/2020.
//

#ifndef TO_DO_LIST_TORRENT_HPP
#define TO_DO_LIST_TORRENT_HPP

#include                        <vector>
#include                        <iostream>

#define ERROR                   "Error"
#define PAUSED                  "Paused"
#define SEEDING                 "Seeding"
#define DOWNLOAD                "Downloading"

struct                          Torrent
{
    Torrent(std::string name)
    : status_(DOWNLOAD), name_(name){}
    Torrent(std::string name, std::string folder)
    : status_(DOWNLOAD), name_(name), folder_(folder){}

    void                        info_cli(std::string& str) {
        str.append("Name: " + name_ + '\n');
        str.append("Size: " + std::to_string(size_) + '\n');
        str.append("Status: " + status_ + '\n');
        str.append("Up Speed: " + std::to_string(down_) + '\n');
        str.append("Down Speed " + std::to_string(up_) + '\n');
        str.append("\n");
    }
    void                        infos_cli(std::string& str) {
        str.append("Name: " + name_ + '\n');
        str.append("Size: " + std::to_string(size_) + '\n');
        str.append(status_ + '\n');
        str.append("Status: " + std::to_string(down_) + '\n');
        str.append("Up Speed: " + std::to_string(up_) + '\n');
        str.append("Seeds: " + std::to_string(seed_.size()) + '\n');
        str.append("Peers: " + std::to_string(peer_.size()) + '\n');
        str.append("\n");
    }
    void                        info_gui(std::string& str) {
        str.append(name_ + '\n');
        str.append(std::to_string(size_) + '\n');
        str.append(status_ + '\n');
        str.append(std::to_string(down_) + '\n');
        str.append(std::to_string(up_) + '\n');
    }
    void                        infos_gui(std::string& str) {
        str.append(name_ + '\n');
        str.append(std::to_string(size_) + '\n');
        str.append(status_ + '\n');
        str.append(std::to_string(down_) + '\n');
        str.append(std::to_string(up_) + '\n');
        str.append(std::to_string(seed_.size()) + '\n');
        str.append(std::to_string(peer_.size()) + '\n');
    }

    std::string                 status_;

    std::string                 name_;
    std::string                 folder_;

    int                         size_;
    int                         up_;
    int                         down_;

    std::vector<std::string>    seed_;
    std::vector<std::string>    peer_;
};

inline std::ostream& operator<<(std::ostream &os,
        const Torrent &t)
{
    os <<
    "status = " << t.status_ << '\n' <<
    "name = " << t.name_ << '\n' <<
    "folder = " << t.folder_ << '\n' <<
    "size = " << t.size_ << '\n' <<
    "up = " << t.up_ << '\n' <<
    "down = " << t.down_ << '\n';

    return os;
}

#endif //TO_DO_LIST_TORRENT_HPP
