#ifndef RECEVIERMESSAGE_H
#define RECEVIERMESSAGE_H

#include <QWidget>

namespace Ui {
class recevierMessage;
}

class recevierMessage : public QWidget
{
    Q_OBJECT

public:
    explicit recevierMessage(QWidget *parent = nullptr);
    ~recevierMessage();
    void setMessage(QString msg);
    void setName(QString name);


private:
    Ui::recevierMessage *ui;
};

#endif // RECEVIERMESSAGE_H
