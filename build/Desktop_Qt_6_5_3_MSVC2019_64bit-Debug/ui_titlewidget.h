/********************************************************************************
** Form generated from reading UI file 'titlewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLEWIDGET_H
#define UI_TITLEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TitleWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *xxxxxxxx;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *logo;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QToolButton *set_btn;
    QToolButton *min_btn;
    QToolButton *close_btn;

    void setupUi(QWidget *TitleWidget)
    {
        if (TitleWidget->objectName().isEmpty())
            TitleWidget->setObjectName("TitleWidget");
        TitleWidget->resize(797, 56);
        horizontalLayout_2 = new QHBoxLayout(TitleWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        xxxxxxxx = new QWidget(TitleWidget);
        xxxxxxxx->setObjectName("xxxxxxxx");
        horizontalLayout = new QHBoxLayout(xxxxxxxx);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        logo = new QLabel(xxxxxxxx);
        logo->setObjectName("logo");

        horizontalLayout->addWidget(logo);

        label = new QLabel(xxxxxxxx);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\226\260\345\256\213\344\275\223")});
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        set_btn = new QToolButton(xxxxxxxx);
        set_btn->setObjectName("set_btn");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/login_setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        set_btn->setIcon(icon);
        set_btn->setIconSize(QSize(32, 32));
        set_btn->setAutoRaise(true);

        horizontalLayout->addWidget(set_btn);

        min_btn = new QToolButton(xxxxxxxx);
        min_btn->setObjectName("min_btn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/login_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        min_btn->setIcon(icon1);
        min_btn->setIconSize(QSize(32, 32));
        min_btn->setAutoRaise(true);

        horizontalLayout->addWidget(min_btn);

        close_btn = new QToolButton(xxxxxxxx);
        close_btn->setObjectName("close_btn");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/login_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close_btn->setIcon(icon2);
        close_btn->setIconSize(QSize(32, 32));
        close_btn->setAutoRaise(true);

        horizontalLayout->addWidget(close_btn);


        horizontalLayout_2->addWidget(xxxxxxxx);


        retranslateUi(TitleWidget);

        QMetaObject::connectSlotsByName(TitleWidget);
    } // setupUi

    void retranslateUi(QWidget *TitleWidget)
    {
        TitleWidget->setWindowTitle(QCoreApplication::translate("TitleWidget", "Form", nullptr));
        logo->setText(QCoreApplication::translate("TitleWidget", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("TitleWidget", "\344\274\240\346\231\272\344\272\221\347\233\230", nullptr));
        set_btn->setText(QCoreApplication::translate("TitleWidget", "...", nullptr));
        min_btn->setText(QCoreApplication::translate("TitleWidget", "...", nullptr));
        close_btn->setText(QCoreApplication::translate("TitleWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TitleWidget: public Ui_TitleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLEWIDGET_H
