/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *showtime;
    QLabel *currenttime;
    QHBoxLayout *horizontalLayout;
    QPushButton *startbt;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopbt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetbt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bitbt;
    QTextEdit *bittimeEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(360, 287);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        showtime = new QLabel(Widget);
        showtime->setObjectName(QStringLiteral("showtime"));
        QFont font;
        font.setPointSize(21);
        showtime->setFont(font);
        showtime->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(showtime);

        currenttime = new QLabel(Widget);
        currenttime->setObjectName(QStringLiteral("currenttime"));
        currenttime->setFont(font);
        currenttime->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(currenttime);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startbt = new QPushButton(Widget);
        startbt->setObjectName(QStringLiteral("startbt"));

        horizontalLayout->addWidget(startbt);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stopbt = new QPushButton(Widget);
        stopbt->setObjectName(QStringLiteral("stopbt"));

        horizontalLayout->addWidget(stopbt);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        resetbt = new QPushButton(Widget);
        resetbt->setObjectName(QStringLiteral("resetbt"));

        horizontalLayout->addWidget(resetbt);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        bitbt = new QPushButton(Widget);
        bitbt->setObjectName(QStringLiteral("bitbt"));

        horizontalLayout->addWidget(bitbt);


        verticalLayout->addLayout(horizontalLayout);

        bittimeEdit = new QTextEdit(Widget);
        bittimeEdit->setObjectName(QStringLiteral("bittimeEdit"));

        verticalLayout->addWidget(bittimeEdit);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        showtime->setText(QString());
        currenttime->setText(QString());
        startbt->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", Q_NULLPTR));
        stopbt->setText(QApplication::translate("Widget", "\345\201\234\346\255\242", Q_NULLPTR));
        resetbt->setText(QApplication::translate("Widget", "\351\207\215\347\275\256", Q_NULLPTR));
        bitbt->setText(QApplication::translate("Widget", "\346\211\223\347\202\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
