//
// Created by agar on 21/08/2020.
//

#include    "../include/TopToolBar.hpp"

TopToolBar::TopToolBar(QWidget *parent) : QTreeWidget(parent) {
    client_ = httplib::Client("localhost", 8080);

    setSelectionBehavior(QAbstractItemView::SelectRows);
    setAlternatingRowColors(true);
    setRootIsDecorated(false);
    setHeaderLabels(QStringList()
                            << "Torrent"
                            << "Size"
                            << "Status"
                            << "Down Speed"
                            << "Up Speed");

    list_lvalue_.append("Down Speed = ");
    list_lvalue_.append("Up Speed = ");
    list_lvalue_.append("Downloaded =");
    list_lvalue_.append("Uploaded = ");

    list_tree_widget_.push_back(new QTreeWidgetItem);
    for (int i = 0; i < list_lvalue_.size(); ++i)
        list_tree_widget_.back()->setText(i, list_lvalue_[i]);
}