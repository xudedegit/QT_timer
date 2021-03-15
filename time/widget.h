#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTime>
#include <QTimer>
#include <QDebug>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QTime time;
    QTime time1;
    QTimer timer;
    QTimer timer1;
    static int i;

private slots:
    void on_startbt_clicked();
    void timeout_slot();
    void timeout1_slot();
    void on_stopbt_clicked();

    void on_resetbt_clicked();

    void on_bitbt_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
