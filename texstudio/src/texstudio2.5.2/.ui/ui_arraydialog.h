/********************************************************************************
** Form generated from reading UI file 'arraydialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARRAYDIALOG_H
#define UI_ARRAYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ArrayDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QSpinBox *spinBoxColumns;
    QLabel *label;
    QComboBox *comboAlignment;
    QSpinBox *spinBoxRows;
    QLabel *label_4;
    QComboBox *comboEnvironment;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ArrayDialog)
    {
        if (ArrayDialog->objectName().isEmpty())
            ArrayDialog->setObjectName(QString::fromUtf8("ArrayDialog"));
        ArrayDialog->resize(472, 393);
        gridLayout = new QGridLayout(ArrayDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_3 = new QLabel(ArrayDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        tableWidget = new QTableWidget(ArrayDialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(0);

        gridLayout1->addWidget(tableWidget, 0, 0, 1, 2);

        label_2 = new QLabel(ArrayDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 3, 0, 1, 1);

        spinBoxColumns = new QSpinBox(ArrayDialog);
        spinBoxColumns->setObjectName(QString::fromUtf8("spinBoxColumns"));
        spinBoxColumns->setMinimum(1);

        gridLayout1->addWidget(spinBoxColumns, 2, 1, 1, 1);

        label = new QLabel(ArrayDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 4, 0, 1, 1);

        comboAlignment = new QComboBox(ArrayDialog);
        comboAlignment->setObjectName(QString::fromUtf8("comboAlignment"));
        comboAlignment->setMaxVisibleItems(11);

        gridLayout1->addWidget(comboAlignment, 3, 1, 1, 1);

        spinBoxRows = new QSpinBox(ArrayDialog);
        spinBoxRows->setObjectName(QString::fromUtf8("spinBoxRows"));

        gridLayout1->addWidget(spinBoxRows, 1, 1, 1, 1);

        label_4 = new QLabel(ArrayDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 1, 0, 1, 1);

        comboEnvironment = new QComboBox(ArrayDialog);
        comboEnvironment->setObjectName(QString::fromUtf8("comboEnvironment"));

        gridLayout1->addWidget(comboEnvironment, 4, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(ArrayDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(ArrayDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(ArrayDialog);
        QObject::connect(okButton, SIGNAL(clicked()), ArrayDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), ArrayDialog, SLOT(reject()));

        comboAlignment->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ArrayDialog);
    } // setupUi

    void retranslateUi(QDialog *ArrayDialog)
    {
        label_3->setText(QApplication::translate("ArrayDialog", "Num of Columns", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ArrayDialog", "Columns Alignment", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ArrayDialog", "Environment", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ArrayDialog", "Num of Rows", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ArrayDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ArrayDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ArrayDialog);
    } // retranslateUi

};

namespace Ui {
    class ArrayDialog: public Ui_ArrayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARRAYDIALOG_H
