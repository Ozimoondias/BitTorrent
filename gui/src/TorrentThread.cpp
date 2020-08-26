//
// Created by agar on 25/08/2020.
//

#include    "../include/TorrentThread.hpp"

TorrentThread::TorrentThread(QWidget *parent) :
QThread(parent), current_state_("All") {
    client_ = std::make_unique<httplib::Client>("localhost", 8080);
    topWidget_ = std::make_unique<TopWidget>(client_);
    bottomWidget_ = std::make_unique<BottomWidget>(client_);
    statesWidget_ = std::make_unique<StatesWidget>(current_state_);
    torrentWidget_ = std::make_unique<TorrentWidget>(client_, current_state_);
}

void    TorrentThread::run() {
    while (!isInterruptionRequested())
    {
        torrentWidget_->print();
        bottomWidget_->print(torrentWidget_->get_current());
        sleep(1);
    }
}