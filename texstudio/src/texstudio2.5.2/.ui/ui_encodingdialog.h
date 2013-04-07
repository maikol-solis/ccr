/********************************************************************************
** Form generated from reading UI file 'encodingdialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCODINGDIALOG_H
#define UI_ENCODINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_EncodingDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QListWidget *encodings;
    QSpacerItem *horizontalSpacer;
    QPushButton *change;
    QPushButton *view;
    QPushButton *reload;
    QPushButton *cancel;

    void setupUi(QDialog *EncodingDialog)
    {
        if (EncodingDialog->objectName().isEmpty())
            EncodingDialog->setObjectName(QString::fromUtf8("EncodingDialog"));
        EncodingDialog->resize(400, 301);
        gridLayout = new QGridLayout(EncodingDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(EncodingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        encodings = new QListWidget(EncodingDialog);
        encodings->setObjectName(QString::fromUtf8("encodings"));

        gridLayout->addWidget(encodings, 1, 0, 1, 5);

        horizontalSpacer = new QSpacerItem(47, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        change = new QPushButton(EncodingDialog);
        change->setObjectName(QString::fromUtf8("change"));

        gridLayout->addWidget(change, 2, 1, 1, 1);

        view = new QPushButton(EncodingDialog);
        view->setObjectName(QString::fromUtf8("view"));

        gridLayout->addWidget(view, 2, 2, 1, 1);

        reload = new QPushButton(EncodingDialog);
        reload->setObjectName(QString::fromUtf8("reload"));

        gridLayout->addWidget(reload, 2, 3, 1, 1);

        cancel = new QPushButton(EncodingDialog);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        gridLayout->addWidget(cancel, 2, 4, 1, 1);


        retranslateUi(EncodingDialog);

        QMetaObject::connectSlotsByName(EncodingDialog);
    } // setupUi

    void retranslateUi(QDialog *EncodingDialog)
    {
        EncodingDialog->setWindowTitle(QApplication::translate("EncodingDialog", "Setup Encoding", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EncodingDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        change->setText(QApplication::translate("EncodingDialog", "Change To", 0, QApplication::UnicodeUTF8));
        view->setText(QApplication::translate("EncodingDialog", "View With", 0, QApplication::UnicodeUTF8));
        reload->setText(QApplication::translate("EncodingDialog", "Reload With", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("EncodingDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EncodingDialog: public Ui_EncodingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCODINGDIALOG_H
