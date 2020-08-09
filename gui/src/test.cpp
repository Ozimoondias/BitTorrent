//
// Created by agar on 27/07/2020.
//

#include "../include/test.hpp"

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    QListWidgetItem *b_all = new QListWidgetItem("All");
    b_all->setIcon(QIcon("../resource/all.png"));

    QListWidgetItem *b_downloading = new QListWidgetItem("Downloading");
    b_downloading->setIcon(QIcon("../resource/downloading.png"));

    QListWidgetItem *b_inactive = new QListWidgetItem("Pause");
    b_inactive->setIcon(QIcon("../resource/inactive.png"));

    QListWidgetItem *b_seeding = new QListWidgetItem("Seeding");
    b_seeding->setIcon(QIcon("../resource/seeding.png"));

    QListWidgetItem *b_queued = new QListWidgetItem("Queued");
    b_queued->setIcon(QIcon("../resource/queued.png"));

    m_myListWidget = new QListWidget;

    m_myListWidget->addItem(b_all);
    m_myListWidget->addItem(b_downloading);
    m_myListWidget->addItem(b_inactive);
    m_myListWidget->addItem(b_seeding);
    m_myListWidget->addItem(b_queued);

    connect(m_myListWidget, SIGNAL(itemClicked(QListWidgetItem *)), SLOT(itemClicked(QListWidgetItem *)));
}

void MyWidget::itemClicked(QListWidgetItem *item)
{
    if (!item)
        return;
    qDebug() << "row [" << m_myListWidget->row(item) << "] == " << item->text();
}
