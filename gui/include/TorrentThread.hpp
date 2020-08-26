//
// Created by agar on 25/08/2020.
//

#ifndef TO_DO_LIST_TORRENTTHREAD_HPP
#define TO_DO_LIST_TORRENTTHREAD_HPP

#include    <QThread>

#include    "../../lib/httplib.h"

#include    "TopWidget.hpp"
#include    "BottomWidget.hpp"
#include    "StatesWidget.hpp"
#include    "TorrentWidget.hpp"

class TorrentThread : public QThread
{
    Q_OBJECT

public:
    TorrentThread(QWidget *parent = nullptr);
    virtual ~TorrentThread(){}

    void run();

    std::unique_ptr<TopWidget>      &get_topWidget(){
        return topWidget_;}
    std::unique_ptr<BottomWidget>   &get_bottomWidget(){
        return bottomWidget_;}
    std::unique_ptr<StatesWidget>   &get_statesWidget(){
        return statesWidget_;}
    std::unique_ptr<TorrentWidget>  &get_torrentWidget(){
        return torrentWidget_;}

private:
    std::string                         current_state_;
    std::string                         current_torrent_;

    std::unique_ptr<httplib::Client>    client_;

    std::unique_ptr<TopWidget>          topWidget_;
    std::unique_ptr<BottomWidget>       bottomWidget_;
    std::unique_ptr<StatesWidget>       statesWidget_;
    std::unique_ptr<TorrentWidget>      torrentWidget_;
};

#endif //TO_DO_LIST_TORRENTTHREAD_HPP
