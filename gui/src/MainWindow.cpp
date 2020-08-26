//
// Created by agar on 25/08/2020.
//

#include "../include/MainWindow.hpp"

MainWindow::MainWindow(QWidget *parent)
: QMainWindow(parent) {



    // The main infinite loop

    torrentThread_ = std::make_unique<TorrentThread>();



    // Add, Remove, Pause Torrent...

    addToolBar(Qt::TopToolBarArea, torrentThread_->get_topWidget().get());



    // List of Torrents

    setCentralWidget(torrentThread_->get_torrentWidget().get());



    // State to sort the Torrents

    QDockWidget *docker_right = new QDockWidget;
    docker_right->setTitleBarWidget(new QWidget);
    docker_right->titleBarWidget()->hide();

    docker_right->setWidget(torrentThread_->get_statesWidget().get());

    docker_right->setAllowedAreas(Qt::LeftDockWidgetArea);
    docker_right->setFeatures(QDockWidget::NoDockWidgetFeatures);
    addDockWidget(Qt::LeftDockWidgetArea, docker_right);



    // Torrents infos

    QDockWidget *docker_bottom = new QDockWidget;
    docker_bottom->setTitleBarWidget(new QWidget);
    docker_bottom->titleBarWidget()->hide();

    docker_bottom->setWidget(torrentThread_->get_bottomWidget().get());

    docker_bottom->setAllowedAreas(Qt::BottomDockWidgetArea);
    docker_bottom->setFeatures(QDockWidget::NoDockWidgetFeatures);
    addDockWidget(Qt::BottomDockWidgetArea, docker_bottom);



    torrentThread_->start();



    // Title and size

    setWindowTitle("BitTorrent");
    setFixedSize(1280, 720);
}

void MainWindow::closeEvent(QCloseEvent *bar)
{
    torrentThread_->requestInterruption();
    while (torrentThread_->isRunning()) ;
    bar->accept();
}