#include "explanation.h"
#include "welcome.h"
#include "ui_explanation.h"

explanation::explanation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::explanation)
{
    ui->setupUi(this);
    this->setWindowTitle("explanation");
}

explanation::~explanation()
{
    delete ui;
}

void explanation::on_ok_clicked()
{
    delete this;
    welcome *welc=new welcome;
    welc->show();
}
