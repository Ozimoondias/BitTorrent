//
// Created by agar on 25/08/2020.
//

#ifndef TO_DO_LIST_MAINWINDOW_HPP
#define TO_DO_LIST_MAINWINDOW_HPP

#include    <QtCore>
#include    <QMainWindow>
#include    <QApplication>
#include    <QDockWidget>
#include    <QCloseEvent>

#include    "TorrentThread.hpp"

#include    "TopWidget.hpp"
#include    "BottomWidget.hpp"
#include    "StatesWidget.hpp"
#include    "TorrentWidget.hpp"

class       MainWindow : public QMainWindow
{
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow(){};

private:
    void closeEvent(QCloseEvent*);
    std::unique_ptr<TorrentThread>  torrentThread_;

};

#endif //TO_DO_LIST_MAINWINDOW_HPP
