#include "opsnewfiledialog.h"
#include "ui_opsnewfiledialog.h"

opsnewfiledialog::opsnewfiledialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::opsnewfiledialog)
{
    ui->setupUi(this);
}

opsnewfiledialog::~opsnewfiledialog()
{
    delete ui;
}
