//
// Created by agar on 25/08/2020.
//

#ifndef TO_DO_LIST_TOPWIDGET_HPP
#define TO_DO_LIST_TOPWIDGET_HPP

#include    "../../lib/httplib.h"

#include    <QToolBar>
#include    <QDebug>
#include    <QFileDialog>

class   TopWidget : public QToolBar
{
    Q_OBJECT

public:
    TopWidget(std::unique_ptr<httplib::Client>&,
            QWidget *parent = nullptr);
    virtual ~TopWidget(){}

private slots:
    void add();
    void del();
    void start();
    void pause();
    void preferences();

private:
    std::unique_ptr<httplib::Client> &client_;
};

#endif //TO_DO_LIST_TOPWIDGET_HPP
