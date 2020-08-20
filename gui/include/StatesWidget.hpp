//
// Created by agar on 19/08/2020.
//

#ifndef TO_DO_LIST_STATESWIDGET_HPP
#define TO_DO_LIST_STATESWIDGET_HPP

#include    <QWidget>
#include    <QtWidgets/QListWidget>
#include    <QDebug>

class       StatesWidget : public QWidget
{
    Q_OBJECT

public:
    StatesWidget(QWidget *parent = 0);
    QListWidget *list_widget_;

private slots:
    void onItemClicked(QListWidgetItem *item);
};

#endif //TO_DO_LIST_STATESWIDGET_HPP
