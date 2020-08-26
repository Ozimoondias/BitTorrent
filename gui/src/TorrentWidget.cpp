//
// Created by agar on 19/08/2020.
//

// https://github.com/vgc/vgc/issues/6

#include    "../include/TorrentWidget.hpp"

TorrentWidget::TorrentWidget(std::unique_ptr<httplib::Client> &c,
                             std::string &ct,
                             std::string &cs,
                             QWidget *parent)
                             : client_(c),
                             current_torrent_(ct),
                             current_state_(cs),
                             QTreeWidget(parent) {

    setCurrentItem(nullptr);
    setSelectionBehavior(QAbstractItemView::SelectRows);
    setAlternatingRowColors(true);
    setRootIsDecorated(false);
    setHeaderLabels(QStringList()
                            << "Torrent"
                            << "Size"
                            << "Status"
                            << "Added");
    setColumnWidth(0, 500);
    //header()->setSectionResizeMode(QHeaderView::Stretch);

    connect(this,
            SIGNAL(itemClicked(QTreeWidgetItem * , int)),
            SLOT(onItemClicked(QTreeWidgetItem * , int)));
}

void    TorrentWidget::onItemClicked(QTreeWidgetItem *item, int col) {
    if (!item)
        return ;
}

std::vector<std::string>
        TorrentWidget::str_to_wordtab(const std::string &str,
                                      const char &deli) {
    std::string                 token;
    std::istringstream          stream(str);
    std::vector<std::string>    param;

    while (std::getline(stream, token, deli))
        param.push_back(token);

    return param;
}

std::vector<std::string>
        TorrentWidget::get_state(const std::vector<std::string> &vec) {
    std::vector<std::string> n_vec;

    for (auto const &it : vec) {
        std::size_t found = it.find(current_state_);
        if (found != std::string::npos)
            n_vec.push_back(it);
    }
    return n_vec;
}

bool    TorrentWidget::is_in_req(const std::string &str,
                                 const std::vector<std::string> &vec) {
    for (const auto &it2 : vec) {
        std::string tlt = it2.substr(0, it2.find_first_of('|'));

        if (str == tlt)
            return true;
    }
    return false;
}

bool    TorrentWidget::is_in_list(const std::string &str) {
    for (const auto &it : list_tree_widget_) {
        if (it->text(0).toStdString() == str)
            return true;
    }
    return false;
}

void    TorrentWidget::set_status(const std::string &status) {
    if (currentItem())
        currentItem()->setText(2, status.c_str());
}

void    TorrentWidget::add_torrent(const std::string &str) {
    auto vec = str_to_wordtab(str, '|');

    list_tree_widget_.push_back(std::make_unique<QTreeWidgetItem>());
    for (int i = 0; i < vec.size(); ++i)
        list_tree_widget_.back()->setText(i, vec[i].c_str());
    addTopLevelItem(list_tree_widget_.back().get());
}

void    TorrentWidget::test_torrent_name(
        const std::vector<std::string> &vec) {
    for (const auto &it : vec) {
        std::string test = it.substr(0, it.find_first_of('|'));

        if (!is_in_list(test))
            add_torrent(it);
    }

    for (int i = 0; i < list_tree_widget_.size(); ++i) {
        std::string tt = list_tree_widget_[i]->text(0).toStdString();

        if (!is_in_req(tt, vec))
            list_tree_widget_.erase(list_tree_widget_.begin() + i);
    }
}

void    TorrentWidget::print() {
    auto req = client_->Post("/infogui");
    std::vector<std::string> vec;

    if (req) {
        vec = str_to_wordtab(req->body, '\n');

        if (current_state_ != "All")
            test_torrent_name(get_state(vec));
        else
            test_torrent_name(vec);
    }
}

QTreeWidgetItem *TorrentWidget::get_current()
{
    return currentItem();
}