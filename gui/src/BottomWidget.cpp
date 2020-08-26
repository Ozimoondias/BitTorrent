//
// Created by agar on 25/08/2020.
//

#include    "../include/BottomWidget.hpp"

BottomWidget::BottomWidget(std::unique_ptr<httplib::Client> &c,
                           QWidget *parent)
                           : client_(c), QTableWidget(5, 4, parent) {

    horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    horizontalHeader()->hide();
    verticalHeader()->hide();
    setShowGrid(false);

    rc_name[0] = "Name = ";
    rc_name[1] = "Folder = ";
    rc_name[2] = "Added = ";
    rc_name[3] = "Total Size = ";
    rc_name[4] = "Total Files = ";

    rc_name[5] = "Down Speed = ";
    rc_name[6] = "Up Speed = ";
    rc_name[7] = "Downloaded = ";
    rc_name[8] = "Uploaded = ";
    rc_name[9] = "Progress = ";

    rc_name[10] = "Seeds = ";
    rc_name[11] = "Peers = ";
    rc_name[12] = "Share Ratio = ";
    rc_name[13] = "Availability = ";
    rc_name[14] = "Seed Rank = ";

    rc_name[15] = "Total Tracker = ";
    rc_name[16] = "Current Tracker = ";
    rc_name[17] = "Tracker Status = ";
    rc_name[18] = "Next Announce = ";
    rc_name[19] = "Private Torrent = ";

    for (int r = 0; r < rowCount(); ++r)
        for (int c = 0; c < columnCount(); ++c)
        {
            setItem(r, c, new QTableWidgetItem);
            item(r, c)->setFlags(Qt::NoItemFlags);
        }
}

std::vector<std::string>    BottomWidget::str_to_wordtab(
        const std::string &str,
        const char &deli) {
    std::string                 token;
    std::istringstream          stream(str);
    std::vector<std::string>    param;

    while (std::getline(stream, token, deli))
        param.push_back(token);

    return param;
}

void    BottomWidget::print() {
    int i = 0;

    for (int r = 0; r < columnCount(); ++r)
        for (int c = 0; c < rowCount(); ++c) {
            item(c, r)->setText(QString::fromStdString(rc_name[i]));
            item(c, r)->setForeground(Qt::lightGray);
            i += 1;
        }
}

void    BottomWidget::print(QTreeWidgetItem *wi) {
    if (wi) {
        httplib::Params params;
        params.emplace("param", wi->text(0).toStdString());
        auto req = client_->Post("/infogui", params);

        if (req) {
            int i = 0;
            auto vec = str_to_wordtab(req->body, '|');

            for (int r = 0; r < columnCount(); ++r)
                for (int c = 0; c < rowCount(); ++c) {
                    if (vec.size() > i) {
                        item(c, r)->setText(QString::fromStdString(rc_name[i] + vec[i]));
                        item(c, r)->setForeground(Qt::black);
                    } else
                        item(c, r)->setText(QString::fromStdString(rc_name[i]));
                    i += 1;
                }
        }
    } else
        print();
}