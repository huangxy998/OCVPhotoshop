#ifndef OPSNEWFILEDIALOG_H
#define OPSNEWFILEDIALOG_H

#include <QDialog>

namespace Ui {
class opsnewfiledialog;
}

class opsnewfiledialog : public QDialog
{
    Q_OBJECT

public:
    explicit opsnewfiledialog(QWidget *parent = 0);
    ~opsnewfiledialog();

private:
    Ui::opsnewfiledialog *ui;
};

#endif // OPSNEWFILEDIALOG_H
