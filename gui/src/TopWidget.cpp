//
// Created by agar on 25/08/2020.
//

#include    "../include/TopWidget.hpp"
#include "../include/TorrentWidget.hpp"
#include "../../lib/torrent.hpp"

TopWidget::TopWidget(std::unique_ptr<httplib::Client> &c,
                     std::unique_ptr<TorrentWidget> &tw,
                     QWidget *parent)
                     : client_(c),
                     torrent_widget_(tw),
                     QToolBar(parent) {

    setMovable(false);
    setStyleSheet("QToolBar { background: white; }");

    addAction(QIcon("../../gui/resource/add.png"),
              "Add", this, SLOT(add()));
    addAction(QIcon("../../gui/resource/remove.png"),
              "Del", this, SLOT(del()));
    addAction(QIcon("../../gui/resource/start.png"),
              "Start", this, SLOT(start()));
    addAction(QIcon("../../gui/resource/pause.png"),
              "Pause", this, SLOT(pause()));
    addAction(QIcon("../../gui/resource/preferences.png"),
              "Pause", this, SLOT(preferences()));
}

void TopWidget::add() {
    QString torrent_name =
            QFileDialog::getOpenFileName(
                    this, "Add Torrent", "/home",
                    tr("*.torrent"));
    if (torrent_name.size() > 8) {
        QString torrent_folder =
                QFileDialog::getExistingDirectory(
                        this, "Torrent folder", "/home",
                        QFileDialog::ShowDirsOnly |
                        QFileDialog::DontResolveSymlinks);
        std::string body(
                torrent_name.toStdString() +
                '|' + torrent_folder.toStdString());
        auto res = client_->Post("/add", body, "text/plain");
    }
}

void TopWidget::del() {
    if (torrent_widget_->get_current()) {
        httplib::Params params;
        params.emplace("name",
                       torrent_widget_->get_current()->text(0).toStdString());
        auto res = client_->Post("/del", params);
    }
}

void TopWidget::start() {
    if (torrent_widget_->get_current()) {
        httplib::Params params;
        params.emplace("name",
                       torrent_widget_->get_current()->text(0).toStdString());
        auto res = client_->Post("/resume", params);
        torrent_widget_->set_status(DOWNLOAD);
    }
}

void TopWidget::pause() {
    if (torrent_widget_->get_current()) {
        httplib::Params params;
        params.emplace("name",
                       torrent_widget_->get_current()->text(0).toStdString());
        auto res = client_->Post("/pause", params);
        torrent_widget_->set_status(PAUSED);
    }
}

void TopWidget::preferences() {
}