//
// Created by agar on 22/07/2020.
//

#include <iostream>

#include <QMenuBar>
#include <QToolBar>
#include <QIcon>
#include <QAction>
#include <QPixmap>

#include "../include/bt_window.hpp"

void test()
{

}

BT_Window::BT_Window(QWidget *parent) : QMainWindow(parent)
{
    std::cout << "Constructor BT_Window" << std::endl;

    QToolBar *topBar = new QToolBar("Tools");
    addToolBar(Qt::TopToolBarArea, topBar);
    topBar->setMovable(false);

    QAction *addTorrentAction = new QAction(QIcon("../resource/add.png"), tr("Add &new torrent"), this);
    connect(addTorrentAction, &QAction::triggered, this, test);
    QAction *removeTorrentAction = new QAction(QIcon("../resource/remove.png"), tr("Add &new torrent"), this);
    connect(removeTorrentAction, &QAction::triggered, this, test);

    topBar->addAction(addTorrentAction);
    topBar->addAction(removeTorrentAction);

    topBar->addSeparator();
    topBar->addSeparator();
    topBar->addSeparator();
    topBar->addSeparator();
    topBar->addSeparator();

    QAction *startTorrentAction = new QAction(QIcon("../resource/start.png"), tr("Add &new torrent"), this);
    connect(startTorrentAction, &QAction::triggered, this, test);
    QAction *pauseTorrentAction = new QAction(QIcon("../resource/pause.png"), tr("Add &new torrent"), this);
    connect(pauseTorrentAction, &QAction::triggered, this, test);

    topBar->addAction(startTorrentAction);
    topBar->addAction(pauseTorrentAction);

    setWindowTitle("BitTorrent");
    setFixedSize(640, 360);
}

BT_Window::~BT_Window()
{
    std::cout << "Destructor BT_Window" << std::endl;
};