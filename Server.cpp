#include "Server.h"

Server::Server() : QWidget(){

  int logs_height, logs_width;
  int info_height, info_width;

  nclient = 0;

  serv_height = 200;
  serv_width = 300;

  off_border_x = 10;
  off_border_y = 10;

  inter_textEdit = 10;

  setFixedSize(serv_width, serv_height);
  
  server_logs = new QTextEdit("", this);
  server_info = new QTextEdit("", this);

  logs_height = (serv_height-2*off_border_y-inter_textEdit)/2;
  logs_width = serv_width-2*off_border_x;
  info_height = logs_height;
  info_width = logs_width;

  server_logs->setReadOnly(true);
  server_info->setReadOnly(true);

  server_logs->setFixedWidth(serv_width-2*off_border_x);
  server_logs->setFixedHeight((serv_height-2*off_border_y-inter_textEdit)/2);

  server_info->setFixedWidth(serv_width-2*off_border_x);
  server_info->setFixedHeight((serv_height-2*off_border_y-inter_textEdit)/2);

  server_logs->move(off_border_x, off_border_y);
  server_info->move(off_border_x, off_border_y+logs_height+inter_textEdit);  

  QString tmp = QString("Open on port : %1").arg(port);
  QString tmphost = QHostInfo::localHostName();
  tmp = "Server on : " + tmphost + "\n" + tmp;
  QString tmp2 = QString("Connected client : %1").arg(nclient);
  tmp = tmp + "\n" + tmp2;
  server_info->setText(tmp);

}
