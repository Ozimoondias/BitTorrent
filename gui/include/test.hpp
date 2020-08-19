//
// Created by agar on 27/07/2020.
//

#ifndef HELLOWORLD_TEST_HPP
#define HELLOWORLD_TEST_HPP

#include <QWidget>
#include <QtWidgets/QListWidget>
#include <QDebug>

class SortTorrentWidget : public QWidget
{
    Q_OBJECT

public:
    SortTorrentWidget(QWidget *parent = 0);
    QListWidget *m_myListWidget;

private slots:
    void itemClicked(QListWidgetItem *item);
};

#endif //HELLOWORLD_TEST_HPP
