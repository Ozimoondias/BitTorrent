//
// Created by agar on 23/07/2020.
//

QPushButton *quit = new QPushButton(tr("Quit"), this);
 connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));


QMenu *foo_menu = menuBar()->addMenu("&Foo Menu");
for(const QString & name: {"&action1", "action2", "action3"}){
foo_menu->addAction(name);
}
QObject::connect(foo_menu, &QMenu::aboutToShow, [](){
qDebug()<<"aboutToShow";
});
QObject::connect(foo_menu, &QMenu::aboutToHide, [](){
qDebug()<<"aboutToHide";
});
QObject::connect(foo_menu, &QMenu::triggered, [](QAction *action){
qDebug()<< "triggered: " <<action->text();
});
QObject::connect(foo_menu, &QMenu::hovered, [](QAction *action){
qDebug()<< "hovered: " <<action->text();
});