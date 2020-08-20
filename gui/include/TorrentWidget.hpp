//
// Created by agar on 19/08/2020.
//

#ifndef TO_DO_LIST_TORRENTWIDGET_HPP
#define TO_DO_LIST_TORRENTWIDGET_HPP

#include    <QTreeWidget>
#include    <QWidget>
#include    <QtWidgets/QListWidget>
#include    <QDebug>

#include    "../../lib/httplib.h"

class       TorrentWidget : public QTreeWidget
{
Q_OBJECT

public:
    TorrentWidget(QWidget *parent = 0);
    QList<QTreeWidgetItem*> list_tree_widget_;

private:
    httplib::Client client_;

private slots:
    void onItemClicked(QTreeWidgetItem *item, int);
};

#endif //TO_DO_LIST_TORRENTWIDGET_HPP
