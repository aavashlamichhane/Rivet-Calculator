#include "rivetcalculator.h"
#include "ui_rivetcalculator.h"
#include <cmath>

RivetCalculator::RivetCalculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RivetCalculator)
{
    ui->setupUi(this);
}

RivetCalculator::~RivetCalculator()
{
    delete ui;
}


void RivetCalculator::on_pushButton_clicked()
{
    float t=ui->lineEdit->text().toFloat();
    float d= 6*sqrt(t),hd=1.6*d,hh=0.7*d,cp=3*d,cbp=2*d+6,zbp=2*d,m=1.5*d,scpt=1.125*t,dcpt=0.625*t;
    float i = ui->lineEdit_2->text().toFloat();
    ui->label_d->setNum(d*i);
    ui->label_hd->setNum(hd*i);
    ui->label_hh->setNum(hh*i);
    ui->label_cp->setNum(cp*i);
    ui->label_zp->setNum(cp*i);
    ui->label_bcp->setNum(cp*i);
    ui->label_bzp->setNum(cp*i);
    ui->label_cbp->setNum(cbp*i);
    ui->label_zbp->setNum(zbp*i);
    ui->label_bcbp->setNum(cp*i);
    ui->label_bzbp->setNum(cp*i);
    ui->label_cm->setNum(m*i);
    ui->label_zm->setNum(m*i);
    ui->label_bcm->setNum(m*i);
    ui->label_bzm->setNum(m*i);
    ui->label_bcscpt->setNum(scpt*i);
    ui->label_bzscpt->setNum(scpt*i);
    ui->label_bcdcpt->setNum(dcpt*i);
    ui->label_bzdcpt->setNum(dcpt*i);
    ui->label_cca->setText("10 degree");
    ui->label_zca->setText("10 degree");
    ui->label_bcca->setText("10 degree");
    ui->label_bzca->setText("10 degree");
    //hello




}

