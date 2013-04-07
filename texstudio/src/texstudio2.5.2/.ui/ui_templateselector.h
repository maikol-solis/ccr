/********************************************************************************
** Form generated from reading UI file 'templateselector.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATESELECTOR_H
#define UI_TEMPLATESELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_templateSelectorDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *lbName;
    QLabel *lbDescription;
    QLabel *lbAuthorTag;
    QLabel *lbAuthor;
    QLabel *lbVersion;
    QLabel *lbDate;
    QLabel *lbLicense;
    QLabel *previewLabelDummy;
    QDialogButtonBox *buttonBox;
    QTreeWidget *templatesTree;

    void setupUi(QDialog *templateSelectorDialog)
    {
        if (templateSelectorDialog->objectName().isEmpty())
            templateSelectorDialog->setObjectName(QString::fromUtf8("templateSelectorDialog"));
        templateSelectorDialog->resize(793, 425);
        gridLayout = new QGridLayout(templateSelectorDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(templateSelectorDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbName = new QLabel(frame);
        lbName->setObjectName(QString::fromUtf8("lbName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbName->sizePolicy().hasHeightForWidth());
        lbName->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        lbName->setFont(font);
        lbName->setText(QString::fromUtf8("Template Title"));

        verticalLayout->addWidget(lbName);

        lbDescription = new QLabel(frame);
        lbDescription->setObjectName(QString::fromUtf8("lbDescription"));
        lbDescription->setText(QString::fromUtf8("The template description will be displayed here."));
        lbDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbDescription->setWordWrap(true);

        verticalLayout->addWidget(lbDescription);

        lbAuthorTag = new QLabel(frame);
        lbAuthorTag->setObjectName(QString::fromUtf8("lbAuthorTag"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbAuthorTag->sizePolicy().hasHeightForWidth());
        lbAuthorTag->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(lbAuthorTag);

        lbAuthor = new QLabel(frame);
        lbAuthor->setObjectName(QString::fromUtf8("lbAuthor"));
        lbAuthor->setText(QString::fromUtf8("This is the author description. You may use basicf HTML."));
        lbAuthor->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lbAuthor->setWordWrap(true);
        lbAuthor->setOpenExternalLinks(true);

        verticalLayout->addWidget(lbAuthor);

        lbVersion = new QLabel(frame);
        lbVersion->setObjectName(QString::fromUtf8("lbVersion"));
        sizePolicy1.setHeightForWidth(lbVersion->sizePolicy().hasHeightForWidth());
        lbVersion->setSizePolicy(sizePolicy1);
        lbVersion->setText(QString::fromUtf8("Version: 1.0"));

        verticalLayout->addWidget(lbVersion);

        lbDate = new QLabel(frame);
        lbDate->setObjectName(QString::fromUtf8("lbDate"));
        sizePolicy1.setHeightForWidth(lbDate->sizePolicy().hasHeightForWidth());
        lbDate->setSizePolicy(sizePolicy1);
        lbDate->setText(QString::fromUtf8("Date: 25.10.2012"));

        verticalLayout->addWidget(lbDate);

        lbLicense = new QLabel(frame);
        lbLicense->setObjectName(QString::fromUtf8("lbLicense"));
        sizePolicy1.setHeightForWidth(lbLicense->sizePolicy().hasHeightForWidth());
        lbLicense->setSizePolicy(sizePolicy1);
        lbLicense->setText(QString::fromUtf8("License: suggested Public Domain or Creative Commons"));

        verticalLayout->addWidget(lbLicense);


        gridLayout->addWidget(frame, 0, 1, 1, 1);

        previewLabelDummy = new QLabel(templateSelectorDialog);
        previewLabelDummy->setObjectName(QString::fromUtf8("previewLabelDummy"));
        previewLabelDummy->setMinimumSize(QSize(243, 310));
        previewLabelDummy->setFrameShape(QFrame::Box);
        previewLabelDummy->setFrameShadow(QFrame::Plain);
        previewLabelDummy->setText(QString::fromUtf8("dummy - will be replaced programmatically"));
        previewLabelDummy->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(previewLabelDummy, 0, 2, 1, 1);

        buttonBox = new QDialogButtonBox(templateSelectorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 3);

        templatesTree = new QTreeWidget(templateSelectorDialog);
        templatesTree->setObjectName(QString::fromUtf8("templatesTree"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(templatesTree->sizePolicy().hasHeightForWidth());
        templatesTree->setSizePolicy(sizePolicy2);
        templatesTree->header()->setVisible(false);

        gridLayout->addWidget(templatesTree, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 3);
        gridLayout->setColumnStretch(2, 3);

        retranslateUi(templateSelectorDialog);

        QMetaObject::connectSlotsByName(templateSelectorDialog);
    } // setupUi

    void retranslateUi(QDialog *templateSelectorDialog)
    {
        templateSelectorDialog->setWindowTitle(QApplication::translate("templateSelectorDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        lbAuthorTag->setText(QApplication::translate("templateSelectorDialog", "Author:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class templateSelectorDialog: public Ui_templateSelectorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATESELECTOR_H
