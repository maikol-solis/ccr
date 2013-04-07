/********************************************************************************
** Form generated from reading UI file 'findGlobalDialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDGLOBALDIALOG_H
#define UI_FINDGLOBALDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_findGlobalDialog
{
public:
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *comboBoxScope;
    QLabel *label;
    QLineEdit *lineEditSearchWord;
    QCheckBox *cbCase;
    QCheckBox *cbRegExp;
    QSpacerItem *spacerItem;
    QCheckBox *cbWords;
    QVBoxLayout *vboxLayout;
    QDialogButtonBox *buttonBox;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *findGlobalDialog)
    {
        if (findGlobalDialog->objectName().isEmpty())
            findGlobalDialog->setObjectName(QString::fromUtf8("findGlobalDialog"));
        findGlobalDialog->resize(303, 172);
        hboxLayout = new QHBoxLayout(findGlobalDialog);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(findGlobalDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboBoxScope = new QComboBox(findGlobalDialog);
        comboBoxScope->setObjectName(QString::fromUtf8("comboBoxScope"));

        gridLayout->addWidget(comboBoxScope, 0, 1, 1, 1);

        label = new QLabel(findGlobalDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEditSearchWord = new QLineEdit(findGlobalDialog);
        lineEditSearchWord->setObjectName(QString::fromUtf8("lineEditSearchWord"));

        gridLayout->addWidget(lineEditSearchWord, 1, 1, 1, 1);

        cbCase = new QCheckBox(findGlobalDialog);
        cbCase->setObjectName(QString::fromUtf8("cbCase"));

        gridLayout->addWidget(cbCase, 2, 1, 1, 1);

        cbRegExp = new QCheckBox(findGlobalDialog);
        cbRegExp->setObjectName(QString::fromUtf8("cbRegExp"));

        gridLayout->addWidget(cbRegExp, 4, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 1, 1, 1);

        cbWords = new QCheckBox(findGlobalDialog);
        cbWords->setObjectName(QString::fromUtf8("cbWords"));

        gridLayout->addWidget(cbWords, 3, 1, 1, 1);


        hboxLayout1->addLayout(gridLayout);


        hboxLayout->addLayout(hboxLayout1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        buttonBox = new QDialogButtonBox(findGlobalDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem1);


        hboxLayout->addLayout(vboxLayout);

        QWidget::setTabOrder(lineEditSearchWord, comboBoxScope);
        QWidget::setTabOrder(comboBoxScope, cbCase);
        QWidget::setTabOrder(cbCase, cbWords);
        QWidget::setTabOrder(cbWords, cbRegExp);
        QWidget::setTabOrder(cbRegExp, buttonBox);

        retranslateUi(findGlobalDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), findGlobalDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), findGlobalDialog, SLOT(reject()));

        comboBoxScope->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(findGlobalDialog);
    } // setupUi

    void retranslateUi(QDialog *findGlobalDialog)
    {
        findGlobalDialog->setWindowTitle(QApplication::translate("findGlobalDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("findGlobalDialog", "Scope:", 0, QApplication::UnicodeUTF8));
        comboBoxScope->clear();
        comboBoxScope->insertItems(0, QStringList()
         << QApplication::translate("findGlobalDialog", "Current Document", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("findGlobalDialog", "Open Documents", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("findGlobalDialog", "Find:", 0, QApplication::UnicodeUTF8));
        cbCase->setText(QApplication::translate("findGlobalDialog", "Case Sensitive", 0, QApplication::UnicodeUTF8));
        cbRegExp->setText(QApplication::translate("findGlobalDialog", "Regular Expression", 0, QApplication::UnicodeUTF8));
        cbWords->setText(QApplication::translate("findGlobalDialog", "Complete Words Only", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class findGlobalDialog: public Ui_findGlobalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDGLOBALDIALOG_H
