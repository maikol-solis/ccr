/********************************************************************************
** Form generated from reading UI file 'filechooser.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECHOOSER_H
#define UI_FILECHOOSER_H

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

QT_BEGIN_NAMESPACE

class Ui_FileChooser
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *FileChooser)
    {
        if (FileChooser->objectName().isEmpty())
            FileChooser->setObjectName(QString::fromUtf8("FileChooser"));
        FileChooser->resize(402, 94);
        gridLayout = new QGridLayout(FileChooser);
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
        label = new QLabel(FileChooser);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(3));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(label);

        lineEdit = new QLineEdit(FileChooser);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(lineEdit);

        pushButton = new QPushButton(FileChooser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/fileopen.png"));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(22, 22));

        hboxLayout->addWidget(pushButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        okButton = new QPushButton(FileChooser);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout1->addWidget(okButton);

        cancelButton = new QPushButton(FileChooser);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout1, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, pushButton);
        QWidget::setTabOrder(pushButton, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(FileChooser);
        QObject::connect(okButton, SIGNAL(clicked()), FileChooser, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), FileChooser, SLOT(reject()));

        QMetaObject::connectSlotsByName(FileChooser);
    } // setupUi

    void retranslateUi(QDialog *FileChooser)
    {
        label->setText(QApplication::translate("FileChooser", "File", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QString());
        okButton->setText(QApplication::translate("FileChooser", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("FileChooser", "Cancel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(FileChooser);
    } // retranslateUi

};

namespace Ui {
    class FileChooser: public Ui_FileChooser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECHOOSER_H
