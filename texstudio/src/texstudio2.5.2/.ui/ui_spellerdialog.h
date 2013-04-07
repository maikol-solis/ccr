/********************************************************************************
** Form generated from reading UI file 'spellerdialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPELLERDIALOG_H
#define UI_SPELLERDIALOG_H

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
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SpellerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditOriginal;
    QLineEdit *lineEditNew;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonReplace;
    QPushButton *pushButtonIgnore;
    QPushButton *pushButtonAlwaysIgnore;
    QListWidget *listSuggestions;
    QLabel *labelIgnoredWords;
    QListView *ignoreListView;
    QVBoxLayout *ignoreListButtonLayout;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QLabel *labelAsHideableSpacer;
    QPushButton *okButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonIgnoreList;
    QLabel *dummyStatusBar;

    void setupUi(QDialog *SpellerDialog)
    {
        if (SpellerDialog->objectName().isEmpty())
            SpellerDialog->setObjectName(QString::fromUtf8("SpellerDialog"));
        SpellerDialog->resize(402, 332);
        verticalLayout = new QVBoxLayout(SpellerDialog);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, -1);
        label = new QLabel(SpellerDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEditOriginal = new QLineEdit(SpellerDialog);
        lineEditOriginal->setObjectName(QString::fromUtf8("lineEditOriginal"));
        lineEditOriginal->setReadOnly(true);

        gridLayout->addWidget(lineEditOriginal, 2, 1, 1, 1);

        lineEditNew = new QLineEdit(SpellerDialog);
        lineEditNew->setObjectName(QString::fromUtf8("lineEditNew"));

        gridLayout->addWidget(lineEditNew, 3, 1, 1, 1);

        label_2 = new QLabel(SpellerDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        label_3 = new QLabel(SpellerDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        pushButtonReplace = new QPushButton(SpellerDialog);
        pushButtonReplace->setObjectName(QString::fromUtf8("pushButtonReplace"));
        pushButtonReplace->setDefault(true);

        gridLayout->addWidget(pushButtonReplace, 2, 2, 1, 1);

        pushButtonIgnore = new QPushButton(SpellerDialog);
        pushButtonIgnore->setObjectName(QString::fromUtf8("pushButtonIgnore"));

        gridLayout->addWidget(pushButtonIgnore, 3, 2, 1, 1);

        pushButtonAlwaysIgnore = new QPushButton(SpellerDialog);
        pushButtonAlwaysIgnore->setObjectName(QString::fromUtf8("pushButtonAlwaysIgnore"));

        gridLayout->addWidget(pushButtonAlwaysIgnore, 4, 2, 1, 1);

        listSuggestions = new QListWidget(SpellerDialog);
        listSuggestions->setObjectName(QString::fromUtf8("listSuggestions"));
        listSuggestions->setModelColumn(0);

        gridLayout->addWidget(listSuggestions, 6, 1, 1, 1);

        labelIgnoredWords = new QLabel(SpellerDialog);
        labelIgnoredWords->setObjectName(QString::fromUtf8("labelIgnoredWords"));
        labelIgnoredWords->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(labelIgnoredWords, 8, 0, 1, 1);

        ignoreListView = new QListView(SpellerDialog);
        ignoreListView->setObjectName(QString::fromUtf8("ignoreListView"));

        gridLayout->addWidget(ignoreListView, 8, 1, 1, 1);

        ignoreListButtonLayout = new QVBoxLayout();
        ignoreListButtonLayout->setObjectName(QString::fromUtf8("ignoreListButtonLayout"));
        pushButtonAdd = new QPushButton(SpellerDialog);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAdd->setIcon(icon);

        ignoreListButtonLayout->addWidget(pushButtonAdd);

        pushButtonRemove = new QPushButton(SpellerDialog);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRemove->setIcon(icon1);

        ignoreListButtonLayout->addWidget(pushButtonRemove);

        labelAsHideableSpacer = new QLabel(SpellerDialog);
        labelAsHideableSpacer->setObjectName(QString::fromUtf8("labelAsHideableSpacer"));
        labelAsHideableSpacer->setText(QString::fromUtf8(""));

        ignoreListButtonLayout->addWidget(labelAsHideableSpacer);


        gridLayout->addLayout(ignoreListButtonLayout, 8, 2, 1, 1);

        okButton = new QPushButton(SpellerDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 7, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonIgnoreList = new QPushButton(SpellerDialog);
        pushButtonIgnoreList->setObjectName(QString::fromUtf8("pushButtonIgnoreList"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/up-arrow-circle-silver.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonIgnoreList->setIcon(icon2);

        horizontalLayout_2->addWidget(pushButtonIgnoreList);


        gridLayout->addLayout(horizontalLayout_2, 7, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        dummyStatusBar = new QLabel(SpellerDialog);
        dummyStatusBar->setObjectName(QString::fromUtf8("dummyStatusBar"));

        verticalLayout->addWidget(dummyStatusBar);


        retranslateUi(SpellerDialog);
        QObject::connect(okButton, SIGNAL(clicked()), SpellerDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SpellerDialog);
    } // setupUi

    void retranslateUi(QDialog *SpellerDialog)
    {
        SpellerDialog->setWindowTitle(QApplication::translate("SpellerDialog", "Check Spelling", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SpellerDialog", "Unknown Word", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SpellerDialog", "Replace with", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SpellerDialog", "Suggested Words", 0, QApplication::UnicodeUTF8));
        pushButtonReplace->setText(QApplication::translate("SpellerDialog", "Replace", 0, QApplication::UnicodeUTF8));
        pushButtonIgnore->setText(QApplication::translate("SpellerDialog", "Ignore", 0, QApplication::UnicodeUTF8));
        pushButtonAlwaysIgnore->setText(QApplication::translate("SpellerDialog", "Always Ignore", 0, QApplication::UnicodeUTF8));
        labelIgnoredWords->setText(QApplication::translate("SpellerDialog", "Ignored Words", 0, QApplication::UnicodeUTF8));
        pushButtonAdd->setText(QApplication::translate("SpellerDialog", "Add", 0, QApplication::UnicodeUTF8));
        pushButtonRemove->setText(QApplication::translate("SpellerDialog", "Remove", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("SpellerDialog", "Close", 0, QApplication::UnicodeUTF8));
        pushButtonIgnoreList->setText(QApplication::translate("SpellerDialog", "Hide Ignore List", 0, QApplication::UnicodeUTF8));
        dummyStatusBar->setText(QApplication::translate("SpellerDialog", "dummyStatusBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SpellerDialog: public Ui_SpellerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPELLERDIALOG_H
