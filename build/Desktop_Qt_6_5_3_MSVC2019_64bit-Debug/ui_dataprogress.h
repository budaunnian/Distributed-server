/********************************************************************************
** Form generated from reading UI file 'dataprogress.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAPROGRESS_H
#define UI_DATAPROGRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataProgress
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QProgressBar *progressBar;

    void setupUi(QWidget *DataProgress)
    {
        if (DataProgress->objectName().isEmpty())
            DataProgress->setObjectName("DataProgress");
        DataProgress->resize(767, 30);
        horizontalLayout = new QHBoxLayout(DataProgress);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(DataProgress);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(label);

        progressBar = new QProgressBar(DataProgress);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);


        retranslateUi(DataProgress);

        QMetaObject::connectSlotsByName(DataProgress);
    } // setupUi

    void retranslateUi(QWidget *DataProgress)
    {
        DataProgress->setWindowTitle(QCoreApplication::translate("DataProgress", "Form", nullptr));
        label->setText(QCoreApplication::translate("DataProgress", "\346\226\207\344\273\2661\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataProgress: public Ui_DataProgress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAPROGRESS_H
