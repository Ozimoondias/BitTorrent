//
// Created by agar on 19/08/2020.
//

#include    "../include/StatesWidget.hpp"

StatesWidget::StatesWidget(QWidget *parent) : QWidget(parent) {
    list_widget_ = new QListWidget;

    QListWidgetItem *b_all = new QListWidgetItem("All");
    b_all->setIcon(QIcon("../../gui/resource/all.png"));

    QListWidgetItem *b_downloading = new QListWidgetItem("Downloading");
    b_downloading->setIcon(QIcon("../../gui/resource/downloading.png"));

    QListWidgetItem *b_inactive = new QListWidgetItem("Pause");
    b_inactive->setIcon(QIcon("../../gui/resource/inactive.png"));

    QListWidgetItem *b_seeding = new QListWidgetItem("Seeding");
    b_seeding->setIcon(QIcon("../../gui/resource/seeding.png"));

    QListWidgetItem *b_queued = new QListWidgetItem("Queued");
    b_queued->setIcon(QIcon("../../gui/resource/queued.png"));

    list_widget_->addItem(b_all);
    list_widget_->addItem(b_downloading);
    list_widget_->addItem(b_inactive);
    list_widget_->addItem(b_seeding);
    list_widget_->addItem(b_queued);

    connect(list_widget_,
            SIGNAL(itemClicked(QListWidgetItem*)),
            SLOT(onItemClicked(QListWidgetItem*)));
}

void    StatesWidget::onItemClicked(QListWidgetItem *item)
{
    if (!item)
        return;
    qDebug() << "row [" << list_widget_->row(item) << "] == " << item->text();
}