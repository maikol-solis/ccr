/********************************************************************************
** Form generated from reading UI file 'usermenudialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMENUDIALOG_H
#define UI_USERMENUDIALOG_H

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
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMenuDialog
{
public:
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonUp;
    QPushButton *pushButtonDown;
    QWidget *verticalLayoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *itemEdit;
    QLabel *label_3;
    QLineEdit *abbrevEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *triggerHelp;
    QLineEdit *triggerEdit;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonNormal;
    QRadioButton *radioButtonEnvironment;
    QRadioButton *radioButtonScript;
    QLabel *label_2;
    QWidget *tagEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *runScriptButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *UserMenuDialog)
    {
        if (UserMenuDialog->objectName().isEmpty())
            UserMenuDialog->setObjectName(QString::fromUtf8("UserMenuDialog"));
        UserMenuDialog->resize(942, 456);
        QFont font;
        font.setUnderline(false);
        UserMenuDialog->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(UserMenuDialog);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        splitter = new QSplitter(UserMenuDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        tableView->setWordWrap(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonAdd = new QPushButton(verticalLayoutWidget);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonAdd->sizePolicy().hasHeightForWidth());
        pushButtonAdd->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAdd->setIcon(icon);

        horizontalLayout->addWidget(pushButtonAdd);

        pushButtonRemove = new QPushButton(verticalLayoutWidget);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        sizePolicy1.setHeightForWidth(pushButtonRemove->sizePolicy().hasHeightForWidth());
        pushButtonRemove->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRemove->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonRemove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonUp = new QPushButton(verticalLayoutWidget);
        pushButtonUp->setObjectName(QString::fromUtf8("pushButtonUp"));
        sizePolicy1.setHeightForWidth(pushButtonUp->sizePolicy().hasHeightForWidth());
        pushButtonUp->setSizePolicy(sizePolicy1);
        pushButtonUp->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonUp->setIcon(icon2);

        horizontalLayout->addWidget(pushButtonUp);

        pushButtonDown = new QPushButton(verticalLayoutWidget);
        pushButtonDown->setObjectName(QString::fromUtf8("pushButtonDown"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonDown->sizePolicy().hasHeightForWidth());
        pushButtonDown->setSizePolicy(sizePolicy2);
        pushButtonDown->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDown->setIcon(icon3);

        horizontalLayout->addWidget(pushButtonDown);


        verticalLayout->addLayout(horizontalLayout);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        gridLayout = new QGridLayout(verticalLayoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        itemEdit = new QLineEdit(verticalLayoutWidget_2);
        itemEdit->setObjectName(QString::fromUtf8("itemEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(itemEdit->sizePolicy().hasHeightForWidth());
        itemEdit->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(itemEdit, 0, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        abbrevEdit = new QLineEdit(verticalLayoutWidget_2);
        abbrevEdit->setObjectName(QString::fromUtf8("abbrevEdit"));

        gridLayout->addWidget(abbrevEdit, 1, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        triggerHelp = new QLabel(verticalLayoutWidget_2);
        triggerHelp->setObjectName(QString::fromUtf8("triggerHelp"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(triggerHelp->sizePolicy().hasHeightForWidth());
        triggerHelp->setSizePolicy(sizePolicy4);
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(118, 118, 117, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        triggerHelp->setPalette(palette);
        triggerHelp->setFrameShape(QFrame::Box);
        triggerHelp->setText(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Bright'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"#\"><span style=\" text-decoration: underline; color:#0000ff;\">?</span></a></p></body></html>"));

        horizontalLayout_5->addWidget(triggerHelp);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        triggerEdit = new QLineEdit(verticalLayoutWidget_2);
        triggerEdit->setObjectName(QString::fromUtf8("triggerEdit"));

        gridLayout->addWidget(triggerEdit, 2, 1, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonNormal = new QRadioButton(verticalLayoutWidget_2);
        radioButtonNormal->setObjectName(QString::fromUtf8("radioButtonNormal"));

        horizontalLayout_4->addWidget(radioButtonNormal);

        radioButtonEnvironment = new QRadioButton(verticalLayoutWidget_2);
        radioButtonEnvironment->setObjectName(QString::fromUtf8("radioButtonEnvironment"));

        horizontalLayout_4->addWidget(radioButtonEnvironment);

        radioButtonScript = new QRadioButton(verticalLayoutWidget_2);
        radioButtonScript->setObjectName(QString::fromUtf8("radioButtonScript"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(radioButtonScript->sizePolicy().hasHeightForWidth());
        radioButtonScript->setSizePolicy(sizePolicy5);

        horizontalLayout_4->addWidget(radioButtonScript);


        gridLayout->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        tagEdit = new QWidget(verticalLayoutWidget_2);
        tagEdit->setObjectName(QString::fromUtf8("tagEdit"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(1);
        sizePolicy6.setHeightForWidth(tagEdit->sizePolicy().hasHeightForWidth());
        tagEdit->setSizePolicy(sizePolicy6);

        gridLayout->addWidget(tagEdit, 4, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        runScriptButton = new QPushButton(verticalLayoutWidget_2);
        runScriptButton->setObjectName(QString::fromUtf8("runScriptButton"));
        runScriptButton->setEnabled(false);

        horizontalLayout_2->addWidget(runScriptButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        okButton = new QPushButton(verticalLayoutWidget_2);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(verticalLayoutWidget_2);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 2);

        splitter->addWidget(verticalLayoutWidget_2);

        horizontalLayout_3->addWidget(splitter);


        retranslateUi(UserMenuDialog);
        QObject::connect(radioButtonScript, SIGNAL(toggled(bool)), runScriptButton, SLOT(setEnabled(bool)));
        QObject::connect(cancelButton, SIGNAL(clicked()), UserMenuDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserMenuDialog);
    } // setupUi

    void retranslateUi(QDialog *UserMenuDialog)
    {
        UserMenuDialog->setWindowTitle(QApplication::translate("UserMenuDialog", "Edit Macros", 0, QApplication::UnicodeUTF8));
        pushButtonAdd->setText(QApplication::translate("UserMenuDialog", "Add", 0, QApplication::UnicodeUTF8));
        pushButtonRemove->setText(QApplication::translate("UserMenuDialog", "Remove", 0, QApplication::UnicodeUTF8));
        pushButtonUp->setText(QApplication::translate("UserMenuDialog", "Up", 0, QApplication::UnicodeUTF8));
        pushButtonDown->setText(QApplication::translate("UserMenuDialog", "Down", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UserMenuDialog", "Name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UserMenuDialog", "Abbreviation", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("UserMenuDialog", "Trigger", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        triggerHelp->setToolTip(QApplication::translate("UserMenuDialog", "If this trigger string is written in any tex document, \n"
"it is replaced by the current tag.\n"
"\n"
"If the trigger starts with (?<=something), this only happens \n"
"if something is written before the remaining part of the trigger.\n"
"\n"
"Since this trigger is not a plain string, but a regular expression, \n"
"(?<=\\S) can be used to mark replacements which should only occur after a word, \n"
"and (?<=\\s|^) to mark replacements which should only occur before a word.\n"
"\n"
"\n"
"You can use the special value ?txs-start to start the script at txs start.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("UserMenuDialog", "Type", 0, QApplication::UnicodeUTF8));
        radioButtonNormal->setText(QApplication::translate("UserMenuDialog", "Normal", 0, QApplication::UnicodeUTF8));
        radioButtonEnvironment->setText(QApplication::translate("UserMenuDialog", "Environment", 0, QApplication::UnicodeUTF8));
        radioButtonScript->setText(QApplication::translate("UserMenuDialog", "Script", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UserMenuDialog", "LaTeX Content", 0, QApplication::UnicodeUTF8));
        runScriptButton->setText(QApplication::translate("UserMenuDialog", "Run Script", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("UserMenuDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("UserMenuDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserMenuDialog: public Ui_UserMenuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENUDIALOG_H
