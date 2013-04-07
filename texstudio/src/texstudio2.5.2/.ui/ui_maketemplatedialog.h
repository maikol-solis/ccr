/********************************************************************************
** Form generated from reading UI file 'maketemplatedialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKETEMPLATEDIALOG_H
#define UI_MAKETEMPLATEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MakeTemplateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *leName;
    QLabel *label_2;
    QLineEdit *leAuthor;
    QLabel *label_3;
    QLineEdit *leVersion;
    QLabel *label_4;
    QPlainTextEdit *leDescription;
    QLabel *label_6;
    QLineEdit *leLicense;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MakeTemplateDialog)
    {
        if (MakeTemplateDialog->objectName().isEmpty())
            MakeTemplateDialog->setObjectName(QString::fromUtf8("MakeTemplateDialog"));
        MakeTemplateDialog->resize(403, 323);
        verticalLayout = new QVBoxLayout(MakeTemplateDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(MakeTemplateDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        groupBox = new QGroupBox(MakeTemplateDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        leName = new QLineEdit(groupBox);
        leName->setObjectName(QString::fromUtf8("leName"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, leName);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        leAuthor = new QLineEdit(groupBox);
        leAuthor->setObjectName(QString::fromUtf8("leAuthor"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, leAuthor);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        leVersion = new QLineEdit(groupBox);
        leVersion->setObjectName(QString::fromUtf8("leVersion"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, leVersion);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        leDescription = new QPlainTextEdit(groupBox);
        leDescription->setObjectName(QString::fromUtf8("leDescription"));
        leDescription->setTabChangesFocus(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, leDescription);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_6);

        leLicense = new QLineEdit(groupBox);
        leLicense->setObjectName(QString::fromUtf8("leLicense"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, leLicense);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(MakeTemplateDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(MakeTemplateDialog);

        QMetaObject::connectSlotsByName(MakeTemplateDialog);
    } // setupUi

    void retranslateUi(QDialog *MakeTemplateDialog)
    {
        MakeTemplateDialog->setWindowTitle(QApplication::translate("MakeTemplateDialog", "Make Template", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MakeTemplateDialog", "Create a template from the current file.", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MakeTemplateDialog", "Meta Data", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MakeTemplateDialog", "Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MakeTemplateDialog", "Author", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MakeTemplateDialog", "Version", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MakeTemplateDialog", "Description", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MakeTemplateDialog", "License", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MakeTemplateDialog: public Ui_MakeTemplateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKETEMPLATEDIALOG_H
