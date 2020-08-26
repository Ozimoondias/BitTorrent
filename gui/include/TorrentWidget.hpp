//
// Created by agar on 19/08/2020.
//

#ifndef TO_DO_LIST_TORRENTWIDGET_HPP
#define TO_DO_LIST_TORRENTWIDGET_HPP

#include    <QTreeWidget>
#include    <QWidget>
#include    <QHeaderView>
#include    <QtWidgets/QListWidget>
#include    <QDebug>

#include    "../../lib/httplib.h"

class       TorrentWidget : public QTreeWidget
{
Q_OBJECT

public:
    TorrentWidget(std::unique_ptr<httplib::Client>&,
            std::string&, std::string&,
            QWidget *parent = nullptr);
    virtual ~TorrentWidget(){}

    static std::vector<std::string>    str_to_wordtab(const std::string&,
                                               const char&);
    std::vector<std::string>    get_state(
            const std::vector<std::string>&);
    void    add_torrent(const std::string&);
    void    set_status(const std::string&);
    QTreeWidgetItem *get_current();

    bool    is_in_req(const std::string&,
                      const std::vector<std::string>&);
    bool    is_in_list(const std::string&);

    void    test_torrent_name(const std::vector<std::string>&);
    void    print();

private:
    std::string                                     &current_torrent_;
    std::string                                     &current_state_;
    std::vector<std::unique_ptr<QTreeWidgetItem>>   list_tree_widget_;
    std::unique_ptr<httplib::Client>                &client_;


private slots:
    void onItemClicked(QTreeWidgetItem *item, int);
};

#endif //TO_DO_LIST_TORRENTWIDGET_HPP
