/********************************************************************************
** Form generated from reading UI file 'structdialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRUCTDIALOG_H
#define UI_STRUCTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_StructDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLineEdit *TitlelineEdit;
    QCheckBox *checkBox;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *StructDialog)
    {
        if (StructDialog->objectName().isEmpty())
            StructDialog->setObjectName(QString::fromUtf8("StructDialog"));
        StructDialog->resize(361, 114);
        gridLayout = new QGridLayout(StructDialog);
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
        TitlelineEdit = new QLineEdit(StructDialog);
        TitlelineEdit->setObjectName(QString::fromUtf8("TitlelineEdit"));

        gridLayout1->addWidget(TitlelineEdit, 0, 1, 1, 1);

        checkBox = new QCheckBox(StructDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setChecked(true);

        gridLayout1->addWidget(checkBox, 1, 1, 1, 1);

        label = new QLabel(StructDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(StructDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(StructDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(TitlelineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(TitlelineEdit, checkBox);
        QWidget::setTabOrder(checkBox, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(StructDialog);
        QObject::connect(okButton, SIGNAL(clicked()), StructDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), StructDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StructDialog);
    } // setupUi

    void retranslateUi(QDialog *StructDialog)
    {
        StructDialog->setWindowTitle(QApplication::translate("StructDialog", "Structure", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("StructDialog", "Numeration", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("StructDialog", "Title", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("StructDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("StructDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StructDialog: public Ui_StructDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRUCTDIALOG_H
