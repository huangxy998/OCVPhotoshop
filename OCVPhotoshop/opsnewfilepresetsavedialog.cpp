#include "opsnewfilepresetsavedialog.h"
#include "ui_opsnewfilepresetsavedialog.h"

opsnewfilepresetsavedialog::opsnewfilepresetsavedialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::opsnewfilepresetsavedialog)
{
    ui->setupUi(this);
}

opsnewfilepresetsavedialog::~opsnewfilepresetsavedialog()
{
    delete ui;
}
