//
// Created by agar on 19/08/2020.
//

#ifndef TO_DO_LIST_STATESWIDGET_HPP
#define TO_DO_LIST_STATESWIDGET_HPP

#include    <QListWidget>
#include    <QDebug>

class       StatesWidget : public QListWidget
{
    Q_OBJECT

public:
    StatesWidget(std::string&, QWidget *parent = nullptr);
    virtual ~StatesWidget(){}

private:
    std::string &current_state_;

private slots:
    void onItemClicked(QListWidgetItem *item);
};

#endif //TO_DO_LIST_STATESWIDGET_HPP
