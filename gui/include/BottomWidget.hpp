//
// Created by agar on 25/08/2020.
//

#ifndef TO_DO_LIST_BOTTOMWIDGET_HPP
#define TO_DO_LIST_BOTTOMWIDGET_HPP

#include    "../../lib/httplib.h"

#include    <QTableWidget>
#include    <QTableView>
#include    <QHeaderView>
#include    <QDebug>
#include    <QTreeWidgetItem>

class       BottomWidget : public QTableWidget
{
    Q_OBJECT

public:
    BottomWidget(std::unique_ptr<httplib::Client>&,
            QWidget *parent = nullptr);
    virtual ~BottomWidget(){}

    static std::vector<std::string> str_to_wordtab(const std::string&,
                                                   const char&);

    void    print();
    void    print(QTreeWidgetItem*);

private:
    std::string                         rc_name[20];
    std::unique_ptr<httplib::Client>    &client_;
};

#endif //TO_DO_LIST_BOTTOMWIDGET_HPP
