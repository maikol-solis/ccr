/********************************************************************************
** Form generated from reading UI file 'bibtexdialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIBTEXDIALOG_H
#define UI_BIBTEXDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_BibTeXDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QListWidget *fileList;
    QListWidget *typeList;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QTableWidget *fieldTable;
    QCheckBox *optFieldCheckBox;

    void setupUi(QDialog *BibTeXDialog)
    {
        if (BibTeXDialog->objectName().isEmpty())
            BibTeXDialog->setObjectName(QString::fromUtf8("BibTeXDialog"));
        BibTeXDialog->resize(767, 469);
        BibTeXDialog->setWindowTitle(QString::fromUtf8("<generated in source>"));
        gridLayout = new QGridLayout(BibTeXDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(BibTeXDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(BibTeXDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        fileList = new QListWidget(BibTeXDialog);
        fileList->setObjectName(QString::fromUtf8("fileList"));

        gridLayout->addWidget(fileList, 3, 0, 2, 1);

        typeList = new QListWidget(BibTeXDialog);
        typeList->setObjectName(QString::fromUtf8("typeList"));

        gridLayout->addWidget(typeList, 3, 1, 2, 1);

        buttonBox = new QDialogButtonBox(BibTeXDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 3);

        label_3 = new QLabel(BibTeXDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        fieldTable = new QTableWidget(BibTeXDialog);
        if (fieldTable->columnCount() < 2)
            fieldTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        fieldTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        fieldTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        fieldTable->setObjectName(QString::fromUtf8("fieldTable"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fieldTable->sizePolicy().hasHeightForWidth());
        fieldTable->setSizePolicy(sizePolicy);
        fieldTable->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(fieldTable, 3, 2, 1, 1);

        optFieldCheckBox = new QCheckBox(BibTeXDialog);
        optFieldCheckBox->setObjectName(QString::fromUtf8("optFieldCheckBox"));

        gridLayout->addWidget(optFieldCheckBox, 4, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 2);

        retranslateUi(BibTeXDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BibTeXDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BibTeXDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BibTeXDialog);
    } // setupUi

    void retranslateUi(QDialog *BibTeXDialog)
    {
        label->setText(QApplication::translate("BibTeXDialog", "Insert in File:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BibTeXDialog", "Entry Type:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BibTeXDialog", "Fields:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = fieldTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BibTeXDialog", "Field", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = fieldTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BibTeXDialog", "Value", 0, QApplication::UnicodeUTF8));
        optFieldCheckBox->setText(QApplication::translate("BibTeXDialog", "Insert Empty, Optional Fields", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(BibTeXDialog);
    } // retranslateUi

};

namespace Ui {
    class BibTeXDialog: public Ui_BibTeXDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIBTEXDIALOG_H
