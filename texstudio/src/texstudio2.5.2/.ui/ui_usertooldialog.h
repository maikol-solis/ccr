/********************************************************************************
** Form generated from reading UI file 'usertooldialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERTOOLDIALOG_H
#define UI_USERTOOLDIALOG_H

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
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_UserToolDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonRemove;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonUp;
    QPushButton *pushButtonDown;
    QHBoxLayout *_3;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QListWidget *commandList;
    QGridLayout *_2;
    QLabel *label_3;
    QLineEdit *toolEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *itemEdit;
    QPushButton *pushButtonWizard;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *UserToolDialog)
    {
        if (UserToolDialog->objectName().isEmpty())
            UserToolDialog->setObjectName(QString::fromUtf8("UserToolDialog"));
        UserToolDialog->resize(604, 269);
        gridLayout = new QGridLayout(UserToolDialog);
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonAdd = new QPushButton(UserToolDialog);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonAdd->sizePolicy().hasHeightForWidth());
        pushButtonAdd->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAdd->setIcon(icon);

        horizontalLayout_2->addWidget(pushButtonAdd);

        pushButtonRemove = new QPushButton(UserToolDialog);
        pushButtonRemove->setObjectName(QString::fromUtf8("pushButtonRemove"));
        sizePolicy.setHeightForWidth(pushButtonRemove->sizePolicy().hasHeightForWidth());
        pushButtonRemove->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRemove->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButtonRemove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonUp = new QPushButton(UserToolDialog);
        pushButtonUp->setObjectName(QString::fromUtf8("pushButtonUp"));
        sizePolicy.setHeightForWidth(pushButtonUp->sizePolicy().hasHeightForWidth());
        pushButtonUp->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonUp->setIcon(icon2);

        horizontalLayout_2->addWidget(pushButtonUp);

        pushButtonDown = new QPushButton(UserToolDialog);
        pushButtonDown->setObjectName(QString::fromUtf8("pushButtonDown"));
        sizePolicy.setHeightForWidth(pushButtonDown->sizePolicy().hasHeightForWidth());
        pushButtonDown->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDown->setIcon(icon3);

        horizontalLayout_2->addWidget(pushButtonDown);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        _3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        _3->setSpacing(6);
#endif
        _3->setContentsMargins(0, 0, 0, 0);
        _3->setObjectName(QString::fromUtf8("_3"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem);

        okButton = new QPushButton(UserToolDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        _3->addWidget(okButton);

        cancelButton = new QPushButton(UserToolDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        _3->addWidget(cancelButton);


        gridLayout->addLayout(_3, 1, 1, 1, 1);

        commandList = new QListWidget(UserToolDialog);
        commandList->setObjectName(QString::fromUtf8("commandList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(commandList->sizePolicy().hasHeightForWidth());
        commandList->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(commandList, 0, 0, 1, 1);

        _2 = new QGridLayout();
#ifndef Q_OS_MAC
        _2->setSpacing(6);
#endif
        _2->setContentsMargins(0, 0, 0, 0);
        _2->setObjectName(QString::fromUtf8("_2"));
        label_3 = new QLabel(UserToolDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        _2->addWidget(label_3, 4, 0, 1, 2);

        toolEdit = new QLineEdit(UserToolDialog);
        toolEdit->setObjectName(QString::fromUtf8("toolEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolEdit->sizePolicy().hasHeightForWidth());
        toolEdit->setSizePolicy(sizePolicy2);

        _2->addWidget(toolEdit, 3, 0, 1, 1);

        label = new QLabel(UserToolDialog);
        label->setObjectName(QString::fromUtf8("label"));

        _2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(UserToolDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        _2->addWidget(label_2, 2, 0, 1, 2);

        itemEdit = new QLineEdit(UserToolDialog);
        itemEdit->setObjectName(QString::fromUtf8("itemEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(itemEdit->sizePolicy().hasHeightForWidth());
        itemEdit->setSizePolicy(sizePolicy3);

        _2->addWidget(itemEdit, 1, 0, 1, 1);

        pushButtonWizard = new QPushButton(UserToolDialog);
        pushButtonWizard->setObjectName(QString::fromUtf8("pushButtonWizard"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButtonWizard->sizePolicy().hasHeightForWidth());
        pushButtonWizard->setSizePolicy(sizePolicy4);
        pushButtonWizard->setMaximumSize(QSize(30, 16777215));
        pushButtonWizard->setText(QString::fromUtf8("..."));

        _2->addWidget(pushButtonWizard, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _2->addItem(verticalSpacer, 5, 0, 1, 1);


        gridLayout->addLayout(_2, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        QWidget::setTabOrder(toolEdit, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(UserToolDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), UserToolDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserToolDialog);
    } // setupUi

    void retranslateUi(QDialog *UserToolDialog)
    {
        UserToolDialog->setWindowTitle(QApplication::translate("UserToolDialog", "Edit User Commands", 0, QApplication::UnicodeUTF8));
        pushButtonAdd->setText(QApplication::translate("UserToolDialog", "Add", 0, QApplication::UnicodeUTF8));
        pushButtonRemove->setText(QApplication::translate("UserToolDialog", "Remove", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButtonUp->setToolTip(QApplication::translate("UserToolDialog", "Up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButtonUp->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonDown->setToolTip(QApplication::translate("UserToolDialog", "Down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButtonDown->setText(QString());
        okButton->setText(QApplication::translate("UserToolDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("UserToolDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UserToolDialog", "(the commands must be separated by '|')", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UserToolDialog", "Menu Item", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UserToolDialog", "Command (% : filename without extension)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserToolDialog: public Ui_UserToolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERTOOLDIALOG_H
