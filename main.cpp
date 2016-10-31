#include <QApplication>
#include "Server.h"

int main(int argc, char* argv[]){

  QApplication app(argc, argv);

  Server serv;
  serv.show();

  return app.exec();
}
