/********************************************************************************
** Form generated from reading UI file 'webpublishdialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBPUBLISHDIALOG_H
#define UI_WEBPUBLISHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_WebPublishDialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit_2;
    QLabel *label;
    QGroupBox *latexgroupBox;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
    QSpinBox *compilationspinBox;
    QLabel *contentLabel;
    QLabel *startindexLabel;
    QLabel *tocdepthLabel;
    QLineEdit *contentEdit;
    QSpinBox *startindexspinBox;
    QSpinBox *tocdepthspinBox;
    QLabel *compilationLabel;
    QGroupBox *groupBoxHtml;
    QGridLayout *gridLayout3;
    QGridLayout *gridLayout4;
    QLabel *titleLabel;
    QLineEdit *titleEdit;
    QLabel *navigationLabel;
    QLabel *footnoteLabel;
    QComboBox *navigationBox;
    QLabel *alignmentLabel;
    QComboBox *indexcomboBox;
    QLineEdit *footnoteEdit;
    QComboBox *alignmentcomboBox;
    QLabel *indexLabel;
    QGridLayout *gridLayout5;
    QLineEdit *browserEdit;
    QSpacerItem *spacerItem;
    QPushButton *LaunchButton;
    QTextEdit *messagetextEdit;
    QLabel *inputfileLabel;
    QPushButton *inputfileButton;
    QPushButton *quitButton;
    QLabel *browserLabel;
    QLineEdit *inputfileEdit;
    QGroupBox *imagegroupBox;
    QHBoxLayout *hboxLayout;
    QLabel *widthLabel;
    QSpinBox *widthspinBox;

    void setupUi(QDialog *WebPublishDialog)
    {
        if (WebPublishDialog->objectName().isEmpty())
            WebPublishDialog->setObjectName(QString::fromUtf8("WebPublishDialog"));
        WebPublishDialog->resize(841, 454);
        gridLayout = new QGridLayout(WebPublishDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit_2 = new QTextEdit(WebPublishDialog);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setReadOnly(true);

        gridLayout->addWidget(textEdit_2, 3, 2, 1, 1);

        label = new QLabel(WebPublishDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/webpublish.png")));

        gridLayout->addWidget(label, 3, 1, 1, 1);

        latexgroupBox = new QGroupBox(WebPublishDialog);
        latexgroupBox->setObjectName(QString::fromUtf8("latexgroupBox"));
        gridLayout1 = new QGridLayout(latexgroupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout2 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        compilationspinBox = new QSpinBox(latexgroupBox);
        compilationspinBox->setObjectName(QString::fromUtf8("compilationspinBox"));
        compilationspinBox->setMinimum(1);
        compilationspinBox->setMaximum(3);
        compilationspinBox->setValue(1);

        gridLayout2->addWidget(compilationspinBox, 0, 2, 1, 1);

        contentLabel = new QLabel(latexgroupBox);
        contentLabel->setObjectName(QString::fromUtf8("contentLabel"));

        gridLayout2->addWidget(contentLabel, 3, 0, 1, 1);

        startindexLabel = new QLabel(latexgroupBox);
        startindexLabel->setObjectName(QString::fromUtf8("startindexLabel"));

        gridLayout2->addWidget(startindexLabel, 2, 0, 1, 1);

        tocdepthLabel = new QLabel(latexgroupBox);
        tocdepthLabel->setObjectName(QString::fromUtf8("tocdepthLabel"));

        gridLayout2->addWidget(tocdepthLabel, 1, 0, 1, 1);

        contentEdit = new QLineEdit(latexgroupBox);
        contentEdit->setObjectName(QString::fromUtf8("contentEdit"));

        gridLayout2->addWidget(contentEdit, 3, 1, 1, 2);

        startindexspinBox = new QSpinBox(latexgroupBox);
        startindexspinBox->setObjectName(QString::fromUtf8("startindexspinBox"));
        startindexspinBox->setMinimum(1);
        startindexspinBox->setMaximum(5000);
        startindexspinBox->setValue(1);

        gridLayout2->addWidget(startindexspinBox, 2, 2, 1, 1);

        tocdepthspinBox = new QSpinBox(latexgroupBox);
        tocdepthspinBox->setObjectName(QString::fromUtf8("tocdepthspinBox"));
        tocdepthspinBox->setMinimum(1);
        tocdepthspinBox->setMaximum(3);
        tocdepthspinBox->setValue(2);

        gridLayout2->addWidget(tocdepthspinBox, 1, 2, 1, 1);

        compilationLabel = new QLabel(latexgroupBox);
        compilationLabel->setObjectName(QString::fromUtf8("compilationLabel"));

        gridLayout2->addWidget(compilationLabel, 0, 0, 1, 2);


        gridLayout1->addLayout(gridLayout2, 0, 0, 1, 1);


        gridLayout->addWidget(latexgroupBox, 2, 0, 2, 1);

        groupBoxHtml = new QGroupBox(WebPublishDialog);
        groupBoxHtml->setObjectName(QString::fromUtf8("groupBoxHtml"));
        gridLayout3 = new QGridLayout(groupBoxHtml);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout4 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        titleLabel = new QLabel(groupBoxHtml);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        gridLayout4->addWidget(titleLabel, 3, 0, 1, 1);

        titleEdit = new QLineEdit(groupBoxHtml);
        titleEdit->setObjectName(QString::fromUtf8("titleEdit"));

        gridLayout4->addWidget(titleEdit, 3, 1, 1, 1);

        navigationLabel = new QLabel(groupBoxHtml);
        navigationLabel->setObjectName(QString::fromUtf8("navigationLabel"));

        gridLayout4->addWidget(navigationLabel, 2, 0, 1, 1);

        footnoteLabel = new QLabel(groupBoxHtml);
        footnoteLabel->setObjectName(QString::fromUtf8("footnoteLabel"));

        gridLayout4->addWidget(footnoteLabel, 4, 0, 1, 1);

        navigationBox = new QComboBox(groupBoxHtml);
        navigationBox->setObjectName(QString::fromUtf8("navigationBox"));

        gridLayout4->addWidget(navigationBox, 2, 1, 1, 1);

        alignmentLabel = new QLabel(groupBoxHtml);
        alignmentLabel->setObjectName(QString::fromUtf8("alignmentLabel"));

        gridLayout4->addWidget(alignmentLabel, 0, 0, 1, 1);

        indexcomboBox = new QComboBox(groupBoxHtml);
        indexcomboBox->setObjectName(QString::fromUtf8("indexcomboBox"));

        gridLayout4->addWidget(indexcomboBox, 1, 1, 1, 1);

        footnoteEdit = new QLineEdit(groupBoxHtml);
        footnoteEdit->setObjectName(QString::fromUtf8("footnoteEdit"));

        gridLayout4->addWidget(footnoteEdit, 4, 1, 1, 1);

        alignmentcomboBox = new QComboBox(groupBoxHtml);
        alignmentcomboBox->setObjectName(QString::fromUtf8("alignmentcomboBox"));

        gridLayout4->addWidget(alignmentcomboBox, 0, 1, 1, 1);

        indexLabel = new QLabel(groupBoxHtml);
        indexLabel->setObjectName(QString::fromUtf8("indexLabel"));

        gridLayout4->addWidget(indexLabel, 1, 0, 1, 1);


        gridLayout3->addLayout(gridLayout4, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxHtml, 0, 0, 1, 1);

        gridLayout5 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout5->setSpacing(6);
#endif
        gridLayout5->setContentsMargins(0, 0, 0, 0);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        browserEdit = new QLineEdit(WebPublishDialog);
        browserEdit->setObjectName(QString::fromUtf8("browserEdit"));

        gridLayout5->addWidget(browserEdit, 1, 1, 1, 2);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacerItem, 3, 2, 1, 1);

        LaunchButton = new QPushButton(WebPublishDialog);
        LaunchButton->setObjectName(QString::fromUtf8("LaunchButton"));

        gridLayout5->addWidget(LaunchButton, 3, 0, 1, 2);

        messagetextEdit = new QTextEdit(WebPublishDialog);
        messagetextEdit->setObjectName(QString::fromUtf8("messagetextEdit"));
        messagetextEdit->setReadOnly(true);

        gridLayout5->addWidget(messagetextEdit, 2, 0, 1, 4);

        inputfileLabel = new QLabel(WebPublishDialog);
        inputfileLabel->setObjectName(QString::fromUtf8("inputfileLabel"));

        gridLayout5->addWidget(inputfileLabel, 0, 0, 1, 1);

        inputfileButton = new QPushButton(WebPublishDialog);
        inputfileButton->setObjectName(QString::fromUtf8("inputfileButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/classic/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        inputfileButton->setIcon(icon);

        gridLayout5->addWidget(inputfileButton, 0, 3, 1, 1);

        quitButton = new QPushButton(WebPublishDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        gridLayout5->addWidget(quitButton, 3, 3, 1, 1);

        browserLabel = new QLabel(WebPublishDialog);
        browserLabel->setObjectName(QString::fromUtf8("browserLabel"));

        gridLayout5->addWidget(browserLabel, 1, 0, 1, 1);

        inputfileEdit = new QLineEdit(WebPublishDialog);
        inputfileEdit->setObjectName(QString::fromUtf8("inputfileEdit"));

        gridLayout5->addWidget(inputfileEdit, 0, 1, 1, 2);


        gridLayout->addLayout(gridLayout5, 0, 1, 3, 2);

        imagegroupBox = new QGroupBox(WebPublishDialog);
        imagegroupBox->setObjectName(QString::fromUtf8("imagegroupBox"));
        hboxLayout = new QHBoxLayout(imagegroupBox);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        widthLabel = new QLabel(imagegroupBox);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));

        hboxLayout->addWidget(widthLabel);

        widthspinBox = new QSpinBox(imagegroupBox);
        widthspinBox->setObjectName(QString::fromUtf8("widthspinBox"));
        widthspinBox->setMinimum(10);
        widthspinBox->setMaximum(2048);
        widthspinBox->setSingleStep(10);
        widthspinBox->setValue(700);

        hboxLayout->addWidget(widthspinBox);


        gridLayout->addWidget(imagegroupBox, 1, 0, 1, 1);

        QWidget::setTabOrder(alignmentcomboBox, indexcomboBox);
        QWidget::setTabOrder(indexcomboBox, navigationBox);
        QWidget::setTabOrder(navigationBox, titleEdit);
        QWidget::setTabOrder(titleEdit, footnoteEdit);
        QWidget::setTabOrder(footnoteEdit, widthspinBox);
        QWidget::setTabOrder(widthspinBox, compilationspinBox);
        QWidget::setTabOrder(compilationspinBox, tocdepthspinBox);
        QWidget::setTabOrder(tocdepthspinBox, startindexspinBox);
        QWidget::setTabOrder(startindexspinBox, contentEdit);
        QWidget::setTabOrder(contentEdit, inputfileEdit);
        QWidget::setTabOrder(inputfileEdit, inputfileButton);
        QWidget::setTabOrder(inputfileButton, browserEdit);
        QWidget::setTabOrder(browserEdit, LaunchButton);
        QWidget::setTabOrder(LaunchButton, quitButton);
        QWidget::setTabOrder(quitButton, textEdit_2);
        QWidget::setTabOrder(textEdit_2, messagetextEdit);

        retranslateUi(WebPublishDialog);

        QMetaObject::connectSlotsByName(WebPublishDialog);
    } // setupUi

    void retranslateUi(QDialog *WebPublishDialog)
    {
        WebPublishDialog->setWindowTitle(QApplication::translate("WebPublishDialog", "Convert to Html", 0, QApplication::UnicodeUTF8));
        textEdit_2->setHtml(QApplication::translate("WebPublishDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bitstream Vera Sans'; font-size:9pt; font-weight:600; color:#000000;\">LaTeX to Html conversion tool</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Bitstream Vera Sans'; font-size:9pt; color:#000000;\">Copyright 2004-2006 P.Brachet &amp; J.Amblard</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        latexgroupBox->setTitle(QApplication::translate("WebPublishDialog", "LaTeX options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        compilationspinBox->setToolTip(QApplication::translate("WebPublishDialog", "Number of latex compilations for the input file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        contentLabel->setText(QApplication::translate("WebPublishDialog", "Content name :", 0, QApplication::UnicodeUTF8));
        startindexLabel->setText(QApplication::translate("WebPublishDialog", "Start Index :", 0, QApplication::UnicodeUTF8));
        tocdepthLabel->setText(QApplication::translate("WebPublishDialog", "Tocdepth :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        contentEdit->setToolTip(QApplication::translate("WebPublishDialog", "Latex code for the title of the table of contents", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        startindexspinBox->setToolTip(QApplication::translate("WebPublishDialog", "The number of the ps page corresponding to the first numberline indexed in the toc file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        tocdepthspinBox->setToolTip(QApplication::translate("WebPublishDialog", "Set the value of the LaTeX tocdepth counter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        compilationLabel->setText(QApplication::translate("WebPublishDialog", "Number of compilations :", 0, QApplication::UnicodeUTF8));
        groupBoxHtml->setTitle(QApplication::translate("WebPublishDialog", "Html options", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("WebPublishDialog", "Title :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        titleEdit->setToolTip(QApplication::translate("WebPublishDialog", "Title of the html files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        navigationLabel->setText(QApplication::translate("WebPublishDialog", "Navigation :", 0, QApplication::UnicodeUTF8));
        footnoteLabel->setText(QApplication::translate("WebPublishDialog", "Footnote :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        navigationBox->setToolTip(QApplication::translate("WebPublishDialog", "Navigation mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        alignmentLabel->setText(QApplication::translate("WebPublishDialog", "Alignment :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        indexcomboBox->setToolTip(QApplication::translate("WebPublishDialog", "Create an index page ?", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        footnoteEdit->setToolTip(QApplication::translate("WebPublishDialog", "Text displayed at the bottom of each html files ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        alignmentcomboBox->setToolTip(QApplication::translate("WebPublishDialog", "Alignment in the html files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        indexLabel->setText(QApplication::translate("WebPublishDialog", "Create index :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        browserEdit->setToolTip(QApplication::translate("WebPublishDialog", "Browser command. Let's empty to not run the browser at the end of the conversion", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        LaunchButton->setText(QApplication::translate("WebPublishDialog", "Launch", 0, QApplication::UnicodeUTF8));
        inputfileLabel->setText(QApplication::translate("WebPublishDialog", "Input File :", 0, QApplication::UnicodeUTF8));
        inputfileButton->setText(QString());
        quitButton->setText(QApplication::translate("WebPublishDialog", "Close", 0, QApplication::UnicodeUTF8));
        browserLabel->setText(QApplication::translate("WebPublishDialog", "Browser :", 0, QApplication::UnicodeUTF8));
        imagegroupBox->setTitle(QApplication::translate("WebPublishDialog", "Images options", 0, QApplication::UnicodeUTF8));
        widthLabel->setText(QApplication::translate("WebPublishDialog", "Images Width :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        widthspinBox->setToolTip(QApplication::translate("WebPublishDialog", "Width of the largest image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class WebPublishDialog: public Ui_WebPublishDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBPUBLISHDIALOG_H
