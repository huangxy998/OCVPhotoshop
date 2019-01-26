#include "opsapp.h"
#include "ui_opsapp.h"
#include <opencv/cv.h>
#include "opencv2/core/core.hpp"

opsapp::opsapp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::opsapp)
{
    ui->setupUi(this);
}

opsapp::~opsapp()
{
    delete ui;
}
