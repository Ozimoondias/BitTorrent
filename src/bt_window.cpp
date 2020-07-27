//
// Created by agar on 22/07/2020.
//

#include <iostream>

#include <QMenuBar>
#include <QToolBar>
#include <QIcon>
#include <QAction>
#include <QPixmap>
#include <QtWidgets>
#include <QHBoxLayout>

#include "../include/bt_window.hpp"
#include "../include/test.hpp"

BT_Window::BT_Window(QWidget *parent) : QMainWindow(parent)
{
    std::cout << "Constructor BT_Window" << std::endl;

   /* QToolBar *topBar = new QToolBar("Tools");
    addToolBar(Qt::TopToolBarArea, topBar);
    topBar->setMovable(false);
    topBar->setStyleSheet("QToolBar { background: white; }");

    QAction *addTorrentAction = new QAction(QIcon("../resource/add.png"), tr("Add &new torrent"), this);
    connect(addTorrentAction, &QAction::triggered, this, test);
    QAction *removeTorrentAction = new QAction(QIcon("../resource/remove.png"), tr("Add &new torrent"), this);
    connect(removeTorrentAction, &QAction::triggered, this, test);

    topBar->addAction(addTorrentAction);
    topBar->addAction(removeTorrentAction);

    topBar->addSeparator();

    QAction *startTorrentAction = new QAction(QIcon("../resource/start.png"), tr("Add &new torrent"), this);
    connect(startTorrentAction, &QAction::triggered, this, test);
    QAction *pauseTorrentAction = new QAction(QIcon("../resource/pause.png"), tr("Add &new torrent"), this);
    connect(pauseTorrentAction, &QAction::triggered, this, test);

    topBar->addAction(startTorrentAction);
    topBar->addAction(pauseTorrentAction);*/

    QTreeWidget *treeWidget = new QTreeWidget;
    treeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    treeWidget->setAlternatingRowColors(false);
    treeWidget->setRootIsDecorated(false);
    treeWidget->setHeaderLabels(QStringList()
    << "Torrent"
    << "Peers/Seeds"
    << "Progress"
    << "Down rate"
    << "Up rate"
    << "Status");

    QTreeWidgetItem *topLevelItem1 = NULL;
    topLevelItem1 = new QTreeWidgetItem;
    topLevelItem1->setText(0, "1");
    topLevelItem1->setText(1, "2");
    topLevelItem1->setText(2, "3");
    topLevelItem1->setText(3, "4");
    topLevelItem1->setText(4, "5");
    topLevelItem1->setText(5, "6");

    treeWidget->addTopLevelItem(topLevelItem1);
    setCentralWidget(treeWidget);

    MyWidget *test = new MyWidget();

    QListWidget *listWidgetsss = new QListWidget();
    listWidgetsss->addItem("item1");
    listWidgetsss->addItem("item2");
    listWidgetsss->addItem("item3");

    QDockWidget *docker_bottom = new QDockWidget("Status");
    docker_bottom->setWidget(listWidgetsss);
    docker_bottom->setAllowedAreas(Qt::BottomDockWidgetArea);
    docker_bottom->setFeatures(QDockWidget::NoDockWidgetFeatures);
    addDockWidget(Qt::BottomDockWidgetArea, docker_bottom);

    QDockWidget *docker_right = new QDockWidget("States");
    docker_right->setWidget(test->m_myListWidget);
    docker_right->setAllowedAreas(Qt::LeftDockWidgetArea);
    docker_right->setFeatures(QDockWidget::NoDockWidgetFeatures);
    addDockWidget(Qt::LeftDockWidgetArea, docker_right);

    setWindowTitle("BitTorrent");
    setFixedSize(1280, 720);
}

BT_Window::~BT_Window()
{
    std::cout << "Destructor BT_Window" << std::endl;
};