#include "mainwindow.h"
#include <QApplication>
#include "config.pb.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
  //  GOOGLE_PROTOBUF_VERIFY_VERSION;
  // test::Conf tmp;
    return a.exec();
}
