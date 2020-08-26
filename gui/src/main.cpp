//
// Created by agar on 25/08/2020.
//

#include "../include/MainWindow.hpp"

int main(int argc, char *argv[])
{
    srand((unsigned)time(0));

    QApplication app(argc, argv);

    MainWindow  mainWindow;
    mainWindow.show();

    return app.exec();
}