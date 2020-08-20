#include "../include/bt_window.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    BT_Window   bt_window;
    bt_window.show();

    return app.exec();
}