//
// Created by agar on 19/08/2020.
//

#include    "../include/TorrentWidget.hpp"

TorrentWidget::TorrentWidget(QWidget *parent) : QTreeWidget(parent) {
    client_ = httplib::Client("localhost", 8080);

    setSelectionBehavior(QAbstractItemView::SelectRows);
    setAlternatingRowColors(false);
    setRootIsDecorated(false);
    setHeaderLabels(QStringList()
                            << "Torrent"
                            << "Size"
                            << "Status"
                            << "Down Speed"
                            << "Up Speed");
    connect(this,
            SIGNAL(itemClicked(QTreeWidgetItem* , int)),
            SLOT(onItemClicked(QTreeWidgetItem*, int)));
}

void    TorrentWidget::onItemClicked(QTreeWidgetItem *item, int col)
{
    if (!item)
        return;

    httplib::Params params;
    params.emplace("param",
                   item->text(0).toLocal8Bit().constData());
    const auto& req = client_.Post("/infogui", params);

    qDebug() << req->body.c_str();
}