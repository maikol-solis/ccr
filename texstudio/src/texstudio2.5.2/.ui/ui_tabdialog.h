/********************************************************************************
** Form generated from reading UI file 'tabdialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABDIALOG_H
#define UI_TABDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
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

class Ui_TabDialog
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QLabel *label_4;
    QSpinBox *spinBoxRows;
    QLabel *label_3;
    QSpinBox *spinBoxColumns;
    QLabel *label_2;
    QComboBox *comboAlignment;
    QLabel *label;
    QComboBox *comboSeparator;
    QCheckBox *checkBox;
    QCheckBox *checkBoxMargin;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *TabDialog)
    {
        if (TabDialog->objectName().isEmpty())
            TabDialog->setObjectName(QString::fromUtf8("TabDialog"));
        TabDialog->resize(503, 384);
        gridLayout = new QGridLayout(TabDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget = new QTableWidget(TabDialog);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(0);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 2);

        label_4 = new QLabel(TabDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        spinBoxRows = new QSpinBox(TabDialog);
        spinBoxRows->setObjectName(QString::fromUtf8("spinBoxRows"));

        gridLayout->addWidget(spinBoxRows, 1, 1, 1, 1);

        label_3 = new QLabel(TabDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        spinBoxColumns = new QSpinBox(TabDialog);
        spinBoxColumns->setObjectName(QString::fromUtf8("spinBoxColumns"));
        spinBoxColumns->setMinimum(1);

        gridLayout->addWidget(spinBoxColumns, 2, 1, 1, 1);

        label_2 = new QLabel(TabDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        comboAlignment = new QComboBox(TabDialog);
        comboAlignment->setObjectName(QString::fromUtf8("comboAlignment"));
        comboAlignment->setMaxVisibleItems(11);

        gridLayout->addWidget(comboAlignment, 3, 1, 1, 1);

        label = new QLabel(TabDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        comboSeparator = new QComboBox(TabDialog);
        comboSeparator->setObjectName(QString::fromUtf8("comboSeparator"));

        gridLayout->addWidget(comboSeparator, 4, 1, 1, 1);

        checkBox = new QCheckBox(TabDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        gridLayout->addWidget(checkBox, 5, 0, 1, 1);

        checkBoxMargin = new QCheckBox(TabDialog);
        checkBoxMargin->setObjectName(QString::fromUtf8("checkBoxMargin"));

        gridLayout->addWidget(checkBoxMargin, 5, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(TabDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(TabDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 2);


        retranslateUi(TabDialog);
        QObject::connect(okButton, SIGNAL(clicked()), TabDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), TabDialog, SLOT(reject()));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), checkBoxMargin, SLOT(setEnabled(bool)));

        comboAlignment->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(TabDialog);
    } // setupUi

    void retranslateUi(QDialog *TabDialog)
    {
        label_4->setText(QApplication::translate("TabDialog", "Num of Rows", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TabDialog", "Num of Columns", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TabDialog", "Columns Alignment", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TabDialog", "Vertical Separator", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("TabDialog", "Horizontal Separator", 0, QApplication::UnicodeUTF8));
        checkBoxMargin->setText(QApplication::translate("TabDialog", "add a margin with the horizontal line", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("TabDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("TabDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TabDialog);
    } // retranslateUi

};

namespace Ui {
    class TabDialog: public Ui_TabDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABDIALOG_H
