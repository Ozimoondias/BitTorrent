//
// Created by agar on 22/07/2020.
//

#ifndef HELLOWORLD_BT_WINDOW_HPP
#define HELLOWORLD_BT_WINDOW_HPP

#include <QMainWindow>
#include <QApplication>
#include <QPushButton>
#include <QtCore>

class   BT_Window : public QMainWindow
{
    Q_OBJECT

public:
    BT_Window(QWidget *parent = nullptr);
    virtual ~BT_Window();
private:

};

#endif //HELLOWORLD_BT_WINDOW_HPP
