#include <QApplication>
#include <QFont>
#include <QPushButton>
#include <QObject>
#include <iostream>

class Counter : public QObject
{
       Q_OBJECT

public:
  Counter() { m_value = 0; }

  int value() const { return m_value; }

public slots:
  void test1();
  void test2();
signals:
  void valueChanged();

private:
  int m_value;
};

void Counter::test1()
{
  std::cout << "test 1" << std::endl;
  emit valueChanged();
}

void Counter::test2()
{
  std::cout << "test 2" << std::endl;
  emit valueChanged();
}

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QPushButton quittt("Quit");
  quittt.resize(750, 30);
  quittt.setFont(QFont("Times", 18, QFont::Bold));

  Counter a, b;
  QObject::connect(&quittt, SIGNAL(pressed()), &b, SLOT(test1()));
  QObject::connect(&quittt, SIGNAL(released()), &b, SLOT(test2()));

  quittt.show();
  return app.exec();
}

#include "main.moc"
