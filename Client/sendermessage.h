#ifndef SENDERMESSAGE_H
#define SENDERMESSAGE_H

#include <QWidget>

namespace Ui {
class senderMessage;
}

class senderMessage : public QWidget
{
    Q_OBJECT

public:
    explicit senderMessage(QWidget *parent = nullptr);
    ~senderMessage();
    void setMessage(QString msg);
    void setName(QString name);

private:
    Ui::senderMessage *ui;
};

#endif // SENDERMESSAGE_H
