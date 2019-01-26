#include "opsapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    opsapp w;
    w.show();

    return a.exec();
}
