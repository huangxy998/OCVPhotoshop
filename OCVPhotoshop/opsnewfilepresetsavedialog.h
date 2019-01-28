#ifndef OPSNEWFILEPRESETSAVEDIALOG_H
#define OPSNEWFILEPRESETSAVEDIALOG_H

#include <QDialog>

namespace Ui {
class opsnewfilepresetsavedialog;
}

class opsnewfilepresetsavedialog : public QDialog
{
    Q_OBJECT

public:
    explicit opsnewfilepresetsavedialog(QWidget *parent = 0);
    ~opsnewfilepresetsavedialog();

private:
    Ui::opsnewfilepresetsavedialog *ui;
};

#endif // OPSNEWFILEPRESETSAVEDIALOG_H
