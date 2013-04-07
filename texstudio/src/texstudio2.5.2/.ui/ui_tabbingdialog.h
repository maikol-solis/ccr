/********************************************************************************
** Form generated from reading UI file 'tabbingdialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABBINGDIALOG_H
#define UI_TABBINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TabbingDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QSpinBox *spinBoxColumns;
    QLineEdit *lineEdit;
    QSpinBox *spinBoxRows;

    void setupUi(QDialog *TabbingDialog)
    {
        if (TabbingDialog->objectName().isEmpty())
            TabbingDialog->setObjectName(QString::fromUtf8("TabbingDialog"));
        TabbingDialog->resize(298, 159);
        gridLayout = new QGridLayout(TabbingDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(TabbingDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(TabbingDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_3 = new QLabel(TabbingDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(TabbingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(TabbingDialog);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        spinBoxColumns = new QSpinBox(TabbingDialog);
        spinBoxColumns->setObjectName(QString::fromUtf8("spinBoxColumns"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBoxColumns->sizePolicy().hasHeightForWidth());
        spinBoxColumns->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(spinBoxColumns, 0, 1, 1, 1);

        lineEdit = new QLineEdit(TabbingDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout1->addWidget(lineEdit, 2, 1, 1, 1);

        spinBoxRows = new QSpinBox(TabbingDialog);
        spinBoxRows->setObjectName(QString::fromUtf8("spinBoxRows"));
        sizePolicy1.setHeightForWidth(spinBoxRows->sizePolicy().hasHeightForWidth());
        spinBoxRows->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(spinBoxRows, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        QWidget::setTabOrder(spinBoxColumns, spinBoxRows);
        QWidget::setTabOrder(spinBoxRows, lineEdit);
        QWidget::setTabOrder(lineEdit, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(TabbingDialog);
        QObject::connect(okButton, SIGNAL(clicked()), TabbingDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), TabbingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TabbingDialog);
    } // setupUi

    void retranslateUi(QDialog *TabbingDialog)
    {
        okButton->setText(QApplication::translate("TabbingDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("TabbingDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TabbingDialog", "Spacing", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TabbingDialog", "Num of Rows", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TabbingDialog", "Num of Columns", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TabbingDialog);
    } // retranslateUi

};

namespace Ui {
    class TabbingDialog: public Ui_TabbingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABBINGDIALOG_H
