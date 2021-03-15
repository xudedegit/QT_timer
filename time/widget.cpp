#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    time.setHMS(0,0,0,0);
    ui->showtime->setText("00:00:00:000");

    timer1.start(1000);
    connect(&timer1,SIGNAL(timeout()),this,SLOT(timeout1_slot()));

}
void Widget::timeout1_slot()
{
    time1=time1.currentTime();
    ui->currenttime->setText(time1.toString("hh:mm:ss"));
}
void Widget::timeout_slot()
{
    //qDebug("meter is starting");
    time = time.addMSecs(1);
    ui->showtime->setText(time.toString("hh:mm:ss:zzz"));

}
Widget::~Widget()
{
    delete ui;
}

void Widget::on_startbt_clicked()
{
    timer.start(1);
    connect(&timer,SIGNAL(timeout()),this,SLOT(timeout_slot()));
}


void Widget::on_stopbt_clicked()
{
    timer.stop();
}

void Widget::on_resetbt_clicked()
{
    timer.stop();
    time.setHMS(0,0,0,0);
    ui->showtime->setText("00:00:00:000");
    ui->bittimeEdit->clear();
    i=0;
}
 int Widget::i=0;
void Widget::on_bitbt_clicked()
{
    QString temp;

    i=i+1;
    temp.sprintf("%d:",i);
    ui->bittimeEdit->append(temp);
    ui->bittimeEdit->append(time.toString("hh:mm:ss:zzz"));
}
