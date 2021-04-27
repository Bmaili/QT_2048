#include "welcome.h"
#include "gamewidget.h"
#include "explanation.h"
#include "ui_welcome.h"

welcome::welcome(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::welcome)
{
    ui->setupUi(this);
    this->setWindowTitle("welcome");
}

welcome::~welcome()
{
    delete ui;
}


void welcome::on_start_clicked(){
    delete this;
    GameWidget *w=new GameWidget;
    w->show();
}

void welcome::on_explanation_clicked(){
    delete this;
    explanation *ex=new explanation;
    ex->show();
}

void welcome::on_end_clicked(){
    delete this;
}
