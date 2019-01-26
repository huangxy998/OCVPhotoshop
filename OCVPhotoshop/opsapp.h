#ifndef OPSAPP_H
#define OPSAPP_H

#include <QMainWindow>

namespace Ui {
class opsapp;
}

class opsapp : public QMainWindow
{
    Q_OBJECT

public:
    explicit opsapp(QWidget *parent = 0);
    ~opsapp();

private:
    Ui::opsapp *ui;
};

#endif // OPSAPP_H
