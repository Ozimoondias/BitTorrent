//
// Created by agar on 21/08/2020.
//

#ifndef TO_DO_LIST_TOPTOOLBAR_HPP
#define TO_DO_LIST_TOPTOOLBAR_HPP

#include    <QTreeWidget>
#include    <QWidget>
#include    <QHeaderView>
#include    <QtWidgets/QListWidget>
#include    <QDebug>

#include    "../../lib/httplib.h"

class       TopToolBar : public QTreeWidget {
Q_OBJECT

public:
    TopToolBar(QWidget *parent = 0);

    QList<QString>              list_lvalue_;
    QList<QString>              list_rvalue_;

    QList<QTreeWidgetItem*>     list_tree_widget_;

private:
    httplib::Client client_;
};

#endif //TO_DO_LIST_TOPTOOLBAR_HPP
