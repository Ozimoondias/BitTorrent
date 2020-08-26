//
// Created by agar on 19/08/2020.
//

#include    "../include/StatesWidget.hpp"

StatesWidget::StatesWidget(std::string &cs,QWidget *parent) :
current_state_(cs), QListWidget(parent) {

    addItem(new QListWidgetItem(
            QIcon("../../gui/resource/all.png"), "All"));
    addItem(new QListWidgetItem(
            QIcon("../../gui/resource/downloading.png"), "Downloading"));
    addItem(new QListWidgetItem(
            QIcon("../../gui/resource/inactive.png"), "Pause"));
    addItem(new QListWidgetItem(
            QIcon("../../gui/resource/seeding.png"), "Seeding"));
    addItem(new QListWidgetItem(
            QIcon("../../gui/resource/queued.png"), "Queued"));

    connect(this,
            SIGNAL(itemClicked(QListWidgetItem * )),
            SLOT(onItemClicked(QListWidgetItem * )));
}

void    StatesWidget::onItemClicked(QListWidgetItem *item)
{
    if (!item)
        return;

    auto it = item->text().toStdString();

    if (current_state_ != it)
        current_state_ = it;
}