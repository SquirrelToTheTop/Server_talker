#ifndef DEF_SERVER
#define DEF_SERVER

#include <QWidget>
#include <QtNetwork>
#include <QTextEdit>
#include <QString>
#include <QPushButton>
#include <QHostInfo>

class Server : public QWidget{

  Q_OBJECT

 public:
  Server();

  private slots:
    void newPplConnected();
    void pplDisconnected();

 private:
    void updateServerInfo();

    const int port = 24513;

    int serv_height, serv_width;
    int off_border_x, off_border_y;
    int inter_textEdit;
    int nclient;
    
    QTextEdit *server_logs, *server_info;
    
    QPushButton *btn_exit;
    
    QTcpServer *server_tcp;
    QList<QTcpSocket *> connected_ppl;
    
    qint16 msg_length;
    
};

#endif
