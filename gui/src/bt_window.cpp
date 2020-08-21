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

    httplib::Client client_("localhost", 8080);
    auto res1 = client_.Post("/add", "add|test2|test2|", "text/plain");

    auto req = client_.Post("/infogui");


    TorrentWidget   *torrent_widget = new TorrentWidget;
    TorrentWidget   *torrent_widget2 = new TorrentWidget;

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

    for (auto it : params) {
        torrent_widget->list_tree_widget_.push_back(new QTreeWidgetItem);
        torrent_widget2->list_tree_widget_.push_back(new QTreeWidgetItem);

        for (int i = 0; i < params2.size(); ++i) {
            torrent_widget->list_tree_widget_.back()->setText(i, params2[i].c_str());
            torrent_widget2->list_tree_widget_.back()->setText(i, params2[i].c_str());
        }

        torrent_widget->addTopLevelItem(torrent_widget->list_tree_widget_.back());
        torrent_widget2->addTopLevelItem(torrent_widget->list_tree_widget_.back());
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

    setCentralWidget(torrent_widget);

    StatesWidget *states_widget = new StatesWidget;




    /*QString str1 = QString("Down Speed = test"
                           "\nUp Speed = test"
                           "\nDownloaded = test"
                           "\nUploaded = test");
    QString str12 = QString("");
    QString str2 = QString("Seeds = test2"
                           "\nPeers = test2"
                           "\nShare Ratio = test2"
                           "\nAvailability = test2"
                           "\nSeed Rank = test2");
    QString str23 = QString("");
    QString str3 = QString("ETA Time = test3"
                           "\nActive Time = test3"
                           "\nSeeding Time = test3"
                           "\nLast Transfer = test3"
                           "\nComplete Seen = test3");

    QListWidget *listWidgetsss = new QListWidget();
    listWidgetsss->addItem(str1);
    listWidgetsss->addItem(str12);
    listWidgetsss->addItem(str2);
    listWidgetsss->addItem(str23);
    listWidgetsss->addItem(str3);

    for(int i = 0; i < listWidgetsss->count(); ++i) {
        listWidgetsss->item(i)->setFlags(Qt::NoItemFlags);
    }
    listWidgetsss->setFlow(QListView::LeftToRight);
*/

    QTableWidget* table = new QTableWidget(5, 4);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->horizontalHeader()->hide();
    table->verticalHeader()->hide();
    table->setShowGrid(false);

    table->setItem(0, 0, new QTableWidgetItem("Down Speed = "));
    table->setItem(1, 0, new QTableWidgetItem("Up Speed = "));
    table->setItem(2, 0, new QTableWidgetItem("Downloaded = "));
    table->setItem(3, 0, new QTableWidgetItem("Uploaded = "));

    table->setItem(0, 1, new QTableWidgetItem("Seeds = "));
    table->setItem(1, 1, new QTableWidgetItem("Peers = "));
    table->setItem(2, 1, new QTableWidgetItem("Share Ratio = "));
    table->setItem(3, 1, new QTableWidgetItem("Availability = "));
    table->setItem(4, 1, new QTableWidgetItem("Seed Rank = "));

    for (int r = 0; r < table->rowCount(); ++r)
        for (int c = 0; c < table->columnCount(); ++c)
            if (table->item(r, c))
                table->item(r, c)->setFlags(Qt::NoItemFlags);


    QDockWidget *docker_bottom = new QDockWidget;

    docker_bottom->setTitleBarWidget(new QWidget);
    docker_bottom->titleBarWidget()->hide();

    docker_bottom->setWidget(table);

    docker_bottom->setAllowedAreas(Qt::BottomDockWidgetArea);
    docker_bottom->setFeatures(QDockWidget::NoDockWidgetFeatures);

    addDockWidget(Qt::BottomDockWidgetArea, docker_bottom);



    QDockWidget *docker_right = new QDockWidget;

    docker_right->setTitleBarWidget(new QWidget);
    docker_right->titleBarWidget()->hide();

    docker_right->setWidget(states_widget->list_widget_);

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
