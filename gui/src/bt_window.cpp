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

#include    "../../lib/httplib.h"

BT_Window::BT_Window(QWidget *parent) : QMainWindow(parent) {
    std::cout << "Constructor BT_Window" << std::endl;

    /*QToolBar *topBar = new QToolBar("Tools");
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

    httplib::Client client_("localhost", 8080);
    auto res1 = client_.Post("/add", "add|test2|test2|", "text/plain");

    auto req = client_.Post("/infogui");


    std::string token;
    std::vector<std::string> params;
    std::istringstream tokenStream(req->body);

    while (std::getline(tokenStream, token, '|'))
        params.push_back(token);

    std::string token2;
    std::vector<std::string> params2;
    std::istringstream tokenStream2(req->body);

    while (std::getline(tokenStream2, token2, '\n'))
        params2.push_back(token2);

    std::list<QTreeWidgetItem *> testtt;

    for (auto it : params) {
        testtt.push_back(new QTreeWidgetItem);

        for (int i = 0; i < params2.size(); ++i) {
            testtt.back()->setText(i, params2[i].c_str());
        }

        treeWidget->addTopLevelItem(testtt.back());
    }

    /*for (auto it2 : params2)
        std::cout << it2 << std::endl;

std::list<QTreeWidgetItem*> testtt;

for (int i = 0; i < params.size(); ++i)
    testtt.push_back(new QTreeWidgetItem);

for (auto it : testtt) {
    it->setText(0, "1");
    treeWidget->addTopLevelItem(it);
}

/*topLevelItem1->setText(0, "1");
topLevelItem1->setText(1, "2");
topLevelItem1->setText(2, "3");
topLevelItem1->setText(3, "4");
topLevelItem1->setText(4, "5");
topLevelItem1->setText(5, "6");*/

    setCentralWidget(treeWidget);

    SortTorrentWidget *test = new SortTorrentWidget();

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
