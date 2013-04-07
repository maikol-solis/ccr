/********************************************************************************
** Form generated from reading UI file 'quickdocumentdialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKDOCUMENTDIALOG_H
#define UI_QUICKDOCUMENTDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuickDocumentDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QGridLayout *_2;
    QLabel *labelAuthor;
    QPushButton *pushButtonOptions;
    QComboBox *comboBoxPaper;
    QLabel *labelClass;
    QLineEdit *lineEditAuthor;
    QPushButton *pushButtonClass;
    QComboBox *comboBoxSize;
    QLabel *labelTitle;
    QCheckBox *checkBoxAMS;
    QPushButton *pushButtonEncoding;
    QComboBox *comboBoxClass;
    QLabel *labelSize;
    QLineEdit *lineEditTitle;
    QLabel *labelPaper;
    QLabel *labelOptions;
    QListWidget *listWidgetOptions;
    QLabel *labelEncoding;
    QCheckBox *checkBoxIDX;
    QComboBox *comboBoxEncoding;
    QPushButton *pushButtonPaper;
    QWidget *tabGeometry;
    QVBoxLayout *verticalLayout;
    QLabel *geometryPreviewLabel;
    QGroupBox *groupBox;
    QGridLayout *_3;
    QCheckBox *checkBoxGeometryPageWidth;
    QDoubleSpinBox *spinBoxGeometryPageWidth;
    QComboBox *spinBoxUnitGeometryPageWidth;
    QComboBox *spinBoxUnitGeometryPageHeight;
    QDoubleSpinBox *spinBoxGeometryPageHeight;
    QCheckBox *checkBoxGeometryPageHeight;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBoxGeometryMarginLeft;
    QDoubleSpinBox *spinBoxGeometryMarginLeft;
    QComboBox *spinBoxUnitGeometryMarginLeft;
    QCheckBox *checkBoxGeometryMarginRight;
    QDoubleSpinBox *spinBoxGeometryMarginRight;
    QComboBox *spinBoxUnitGeometryMarginRight;
    QDoubleSpinBox *spinBoxGeometryMarginTop;
    QComboBox *spinBoxUnitGeometryMarginTop;
    QCheckBox *checkBoxGeometryMarginTop;
    QCheckBox *checkBoxGeometryMarginBottom;
    QDoubleSpinBox *spinBoxGeometryMarginBottom;
    QComboBox *spinBoxUnitGeometryMarginBottom;

    void setupUi(QDialog *QuickDocumentDialog)
    {
        if (QuickDocumentDialog->objectName().isEmpty())
            QuickDocumentDialog->setObjectName(QString::fromUtf8("QuickDocumentDialog"));
        QuickDocumentDialog->resize(511, 480);
        gridLayout = new QGridLayout(QuickDocumentDialog);
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
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(QuickDocumentDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(QuickDocumentDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        tabWidget = new QTabWidget(QuickDocumentDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        _2 = new QGridLayout();
#ifndef Q_OS_MAC
        _2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        _2->setContentsMargins(0, 0, 0, 0);
#endif
        _2->setObjectName(QString::fromUtf8("_2"));
        labelAuthor = new QLabel(tab);
        labelAuthor->setObjectName(QString::fromUtf8("labelAuthor"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelAuthor->sizePolicy().hasHeightForWidth());
        labelAuthor->setSizePolicy(sizePolicy);

        _2->addWidget(labelAuthor, 5, 0, 1, 1);

        pushButtonOptions = new QPushButton(tab);
        pushButtonOptions->setObjectName(QString::fromUtf8("pushButtonOptions"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOptions->setIcon(icon);

        _2->addWidget(pushButtonOptions, 7, 2, 1, 1);

        comboBoxPaper = new QComboBox(tab);
        comboBoxPaper->setObjectName(QString::fromUtf8("comboBoxPaper"));

        _2->addWidget(comboBoxPaper, 2, 1, 1, 1);

        labelClass = new QLabel(tab);
        labelClass->setObjectName(QString::fromUtf8("labelClass"));
        sizePolicy.setHeightForWidth(labelClass->sizePolicy().hasHeightForWidth());
        labelClass->setSizePolicy(sizePolicy);

        _2->addWidget(labelClass, 0, 0, 1, 1);

        lineEditAuthor = new QLineEdit(tab);
        lineEditAuthor->setObjectName(QString::fromUtf8("lineEditAuthor"));

        _2->addWidget(lineEditAuthor, 5, 1, 1, 1);

        pushButtonClass = new QPushButton(tab);
        pushButtonClass->setObjectName(QString::fromUtf8("pushButtonClass"));
        pushButtonClass->setIcon(icon);

        _2->addWidget(pushButtonClass, 0, 2, 1, 1);

        comboBoxSize = new QComboBox(tab);
        comboBoxSize->setObjectName(QString::fromUtf8("comboBoxSize"));

        _2->addWidget(comboBoxSize, 1, 1, 1, 1);

        labelTitle = new QLabel(tab);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        sizePolicy.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy);

        _2->addWidget(labelTitle, 6, 0, 1, 1);

        checkBoxAMS = new QCheckBox(tab);
        checkBoxAMS->setObjectName(QString::fromUtf8("checkBoxAMS"));
        checkBoxAMS->setChecked(true);

        _2->addWidget(checkBoxAMS, 4, 0, 1, 1);

        pushButtonEncoding = new QPushButton(tab);
        pushButtonEncoding->setObjectName(QString::fromUtf8("pushButtonEncoding"));
        pushButtonEncoding->setIcon(icon);

        _2->addWidget(pushButtonEncoding, 3, 2, 1, 1);

        comboBoxClass = new QComboBox(tab);
        comboBoxClass->setObjectName(QString::fromUtf8("comboBoxClass"));

        _2->addWidget(comboBoxClass, 0, 1, 1, 1);

        labelSize = new QLabel(tab);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));
        sizePolicy.setHeightForWidth(labelSize->sizePolicy().hasHeightForWidth());
        labelSize->setSizePolicy(sizePolicy);

        _2->addWidget(labelSize, 1, 0, 1, 1);

        lineEditTitle = new QLineEdit(tab);
        lineEditTitle->setObjectName(QString::fromUtf8("lineEditTitle"));

        _2->addWidget(lineEditTitle, 6, 1, 1, 1);

        labelPaper = new QLabel(tab);
        labelPaper->setObjectName(QString::fromUtf8("labelPaper"));
        sizePolicy.setHeightForWidth(labelPaper->sizePolicy().hasHeightForWidth());
        labelPaper->setSizePolicy(sizePolicy);

        _2->addWidget(labelPaper, 2, 0, 1, 1);

        labelOptions = new QLabel(tab);
        labelOptions->setObjectName(QString::fromUtf8("labelOptions"));
        sizePolicy.setHeightForWidth(labelOptions->sizePolicy().hasHeightForWidth());
        labelOptions->setSizePolicy(sizePolicy);

        _2->addWidget(labelOptions, 7, 0, 1, 1);

        listWidgetOptions = new QListWidget(tab);
        listWidgetOptions->setObjectName(QString::fromUtf8("listWidgetOptions"));

        _2->addWidget(listWidgetOptions, 7, 1, 1, 1);

        labelEncoding = new QLabel(tab);
        labelEncoding->setObjectName(QString::fromUtf8("labelEncoding"));
        sizePolicy.setHeightForWidth(labelEncoding->sizePolicy().hasHeightForWidth());
        labelEncoding->setSizePolicy(sizePolicy);

        _2->addWidget(labelEncoding, 3, 0, 1, 1);

        checkBoxIDX = new QCheckBox(tab);
        checkBoxIDX->setObjectName(QString::fromUtf8("checkBoxIDX"));

        _2->addWidget(checkBoxIDX, 4, 1, 1, 1);

        comboBoxEncoding = new QComboBox(tab);
        comboBoxEncoding->setObjectName(QString::fromUtf8("comboBoxEncoding"));

        _2->addWidget(comboBoxEncoding, 3, 1, 1, 1);

        pushButtonPaper = new QPushButton(tab);
        pushButtonPaper->setObjectName(QString::fromUtf8("pushButtonPaper"));
        pushButtonPaper->setIcon(icon);

        _2->addWidget(pushButtonPaper, 2, 2, 1, 1);


        horizontalLayout->addLayout(_2);

        tabWidget->addTab(tab, QString());
        tabGeometry = new QWidget();
        tabGeometry->setObjectName(QString::fromUtf8("tabGeometry"));
        verticalLayout = new QVBoxLayout(tabGeometry);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        geometryPreviewLabel = new QLabel(tabGeometry);
        geometryPreviewLabel->setObjectName(QString::fromUtf8("geometryPreviewLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(geometryPreviewLabel->sizePolicy().hasHeightForWidth());
        geometryPreviewLabel->setSizePolicy(sizePolicy1);
        geometryPreviewLabel->setMinimumSize(QSize(0, 93));
        geometryPreviewLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(geometryPreviewLabel);

        groupBox = new QGroupBox(tabGeometry);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        _3 = new QGridLayout(groupBox);
        _3->setObjectName(QString::fromUtf8("_3"));
        checkBoxGeometryPageWidth = new QCheckBox(groupBox);
        checkBoxGeometryPageWidth->setObjectName(QString::fromUtf8("checkBoxGeometryPageWidth"));

        _3->addWidget(checkBoxGeometryPageWidth, 0, 0, 2, 1);

        spinBoxGeometryPageWidth = new QDoubleSpinBox(groupBox);
        spinBoxGeometryPageWidth->setObjectName(QString::fromUtf8("spinBoxGeometryPageWidth"));
        spinBoxGeometryPageWidth->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        spinBoxGeometryPageWidth->setMaximum(100000);

        _3->addWidget(spinBoxGeometryPageWidth, 0, 1, 1, 1);

        spinBoxUnitGeometryPageWidth = new QComboBox(groupBox);
        spinBoxUnitGeometryPageWidth->setObjectName(QString::fromUtf8("spinBoxUnitGeometryPageWidth"));
        spinBoxUnitGeometryPageWidth->setEditable(true);

        _3->addWidget(spinBoxUnitGeometryPageWidth, 0, 2, 1, 1);

        spinBoxUnitGeometryPageHeight = new QComboBox(groupBox);
        spinBoxUnitGeometryPageHeight->setObjectName(QString::fromUtf8("spinBoxUnitGeometryPageHeight"));
        spinBoxUnitGeometryPageHeight->setEditable(true);

        _3->addWidget(spinBoxUnitGeometryPageHeight, 1, 2, 2, 1);

        spinBoxGeometryPageHeight = new QDoubleSpinBox(groupBox);
        spinBoxGeometryPageHeight->setObjectName(QString::fromUtf8("spinBoxGeometryPageHeight"));
        spinBoxGeometryPageHeight->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        spinBoxGeometryPageHeight->setMaximum(100000);

        _3->addWidget(spinBoxGeometryPageHeight, 1, 1, 2, 1);

        checkBoxGeometryPageHeight = new QCheckBox(groupBox);
        checkBoxGeometryPageHeight->setObjectName(QString::fromUtf8("checkBoxGeometryPageHeight"));

        _3->addWidget(checkBoxGeometryPageHeight, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tabGeometry);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBoxGeometryMarginLeft = new QCheckBox(groupBox_2);
        checkBoxGeometryMarginLeft->setObjectName(QString::fromUtf8("checkBoxGeometryMarginLeft"));

        gridLayout_2->addWidget(checkBoxGeometryMarginLeft, 0, 0, 1, 1);

        spinBoxGeometryMarginLeft = new QDoubleSpinBox(groupBox_2);
        spinBoxGeometryMarginLeft->setObjectName(QString::fromUtf8("spinBoxGeometryMarginLeft"));
        spinBoxGeometryMarginLeft->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        spinBoxGeometryMarginLeft->setMaximum(100000);
        spinBoxGeometryMarginLeft->setValue(20);

        gridLayout_2->addWidget(spinBoxGeometryMarginLeft, 0, 1, 1, 1);

        spinBoxUnitGeometryMarginLeft = new QComboBox(groupBox_2);
        spinBoxUnitGeometryMarginLeft->setObjectName(QString::fromUtf8("spinBoxUnitGeometryMarginLeft"));
        spinBoxUnitGeometryMarginLeft->setEditable(true);

        gridLayout_2->addWidget(spinBoxUnitGeometryMarginLeft, 0, 2, 1, 1);

        checkBoxGeometryMarginRight = new QCheckBox(groupBox_2);
        checkBoxGeometryMarginRight->setObjectName(QString::fromUtf8("checkBoxGeometryMarginRight"));

        gridLayout_2->addWidget(checkBoxGeometryMarginRight, 1, 0, 2, 1);

        spinBoxGeometryMarginRight = new QDoubleSpinBox(groupBox_2);
        spinBoxGeometryMarginRight->setObjectName(QString::fromUtf8("spinBoxGeometryMarginRight"));
        spinBoxGeometryMarginRight->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        spinBoxGeometryMarginRight->setMaximum(100000);
        spinBoxGeometryMarginRight->setValue(20);

        gridLayout_2->addWidget(spinBoxGeometryMarginRight, 1, 1, 1, 1);

        spinBoxUnitGeometryMarginRight = new QComboBox(groupBox_2);
        spinBoxUnitGeometryMarginRight->setObjectName(QString::fromUtf8("spinBoxUnitGeometryMarginRight"));
        spinBoxUnitGeometryMarginRight->setEditable(true);

        gridLayout_2->addWidget(spinBoxUnitGeometryMarginRight, 1, 2, 1, 1);

        spinBoxGeometryMarginTop = new QDoubleSpinBox(groupBox_2);
        spinBoxGeometryMarginTop->setObjectName(QString::fromUtf8("spinBoxGeometryMarginTop"));
        spinBoxGeometryMarginTop->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        spinBoxGeometryMarginTop->setMaximum(100000);
        spinBoxGeometryMarginTop->setValue(20);

        gridLayout_2->addWidget(spinBoxGeometryMarginTop, 2, 1, 2, 1);

        spinBoxUnitGeometryMarginTop = new QComboBox(groupBox_2);
        spinBoxUnitGeometryMarginTop->setObjectName(QString::fromUtf8("spinBoxUnitGeometryMarginTop"));
        spinBoxUnitGeometryMarginTop->setEditable(true);

        gridLayout_2->addWidget(spinBoxUnitGeometryMarginTop, 2, 2, 2, 1);

        checkBoxGeometryMarginTop = new QCheckBox(groupBox_2);
        checkBoxGeometryMarginTop->setObjectName(QString::fromUtf8("checkBoxGeometryMarginTop"));

        gridLayout_2->addWidget(checkBoxGeometryMarginTop, 3, 0, 1, 1);

        checkBoxGeometryMarginBottom = new QCheckBox(groupBox_2);
        checkBoxGeometryMarginBottom->setObjectName(QString::fromUtf8("checkBoxGeometryMarginBottom"));

        gridLayout_2->addWidget(checkBoxGeometryMarginBottom, 4, 0, 1, 1);

        spinBoxGeometryMarginBottom = new QDoubleSpinBox(groupBox_2);
        spinBoxGeometryMarginBottom->setObjectName(QString::fromUtf8("spinBoxGeometryMarginBottom"));
        spinBoxGeometryMarginBottom->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        spinBoxGeometryMarginBottom->setMaximum(100000);
        spinBoxGeometryMarginBottom->setValue(20);

        gridLayout_2->addWidget(spinBoxGeometryMarginBottom, 4, 1, 1, 1);

        spinBoxUnitGeometryMarginBottom = new QComboBox(groupBox_2);
        spinBoxUnitGeometryMarginBottom->setObjectName(QString::fromUtf8("spinBoxUnitGeometryMarginBottom"));
        spinBoxUnitGeometryMarginBottom->setEditable(true);

        gridLayout_2->addWidget(spinBoxUnitGeometryMarginBottom, 4, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        tabWidget->addTab(tabGeometry, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(QuickDocumentDialog);
        QObject::connect(okButton, SIGNAL(clicked()), QuickDocumentDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), QuickDocumentDialog, SLOT(reject()));
        QObject::connect(checkBoxGeometryPageWidth, SIGNAL(toggled(bool)), spinBoxGeometryPageWidth, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometryPageWidth, SIGNAL(toggled(bool)), spinBoxUnitGeometryPageWidth, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometryPageHeight, SIGNAL(toggled(bool)), spinBoxGeometryPageHeight, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometryPageHeight, SIGNAL(toggled(bool)), spinBoxUnitGeometryPageHeight, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometryMarginLeft, SIGNAL(toggled(bool)), spinBoxGeometryMarginLeft, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometryMarginLeft, SIGNAL(toggled(bool)), spinBoxUnitGeometryMarginLeft, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometryMarginRight, SIGNAL(toggled(bool)), spinBoxGeometryMarginRight, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometryMarginRight, SIGNAL(toggled(bool)), spinBoxUnitGeometryMarginRight, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometryMarginTop, SIGNAL(toggled(bool)), spinBoxGeometryMarginTop, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometryMarginTop, SIGNAL(toggled(bool)), spinBoxUnitGeometryMarginTop, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometryMarginBottom, SIGNAL(toggled(bool)), spinBoxGeometryMarginBottom, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometryMarginBottom, SIGNAL(toggled(bool)), spinBoxUnitGeometryMarginBottom, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QuickDocumentDialog);
    } // setupUi

    void retranslateUi(QDialog *QuickDocumentDialog)
    {
        okButton->setText(QApplication::translate("QuickDocumentDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("QuickDocumentDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        labelAuthor->setText(QApplication::translate("QuickDocumentDialog", "Author", 0, QApplication::UnicodeUTF8));
        pushButtonOptions->setText(QString());
        labelClass->setText(QApplication::translate("QuickDocumentDialog", "Document Class", 0, QApplication::UnicodeUTF8));
        pushButtonClass->setText(QString());
        labelTitle->setText(QApplication::translate("QuickDocumentDialog", "Title", 0, QApplication::UnicodeUTF8));
        checkBoxAMS->setText(QApplication::translate("QuickDocumentDialog", "AMS Packages", 0, QApplication::UnicodeUTF8));
        pushButtonEncoding->setText(QString());
        labelSize->setText(QApplication::translate("QuickDocumentDialog", "Typeface Size", 0, QApplication::UnicodeUTF8));
        labelPaper->setText(QApplication::translate("QuickDocumentDialog", "Paper Size", 0, QApplication::UnicodeUTF8));
        labelOptions->setText(QApplication::translate("QuickDocumentDialog", "Other Options", 0, QApplication::UnicodeUTF8));
        labelEncoding->setText(QApplication::translate("QuickDocumentDialog", "Encoding", 0, QApplication::UnicodeUTF8));
        checkBoxIDX->setText(QApplication::translate("QuickDocumentDialog", "makeidx Package", 0, QApplication::UnicodeUTF8));
        pushButtonPaper->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QuickDocumentDialog", "Class Options", 0, QApplication::UnicodeUTF8));
        geometryPreviewLabel->setText(QString());
        groupBox->setTitle(QApplication::translate("QuickDocumentDialog", "Page", 0, QApplication::UnicodeUTF8));
        checkBoxGeometryPageWidth->setText(QApplication::translate("QuickDocumentDialog", "Width:", 0, QApplication::UnicodeUTF8));
        spinBoxGeometryPageWidth->setSuffix(QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8));
        spinBoxUnitGeometryPageWidth->clear();
        spinBoxUnitGeometryPageWidth->insertItems(0, QStringList()
         << QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "cm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "pt", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "bp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "in", 0, QApplication::UnicodeUTF8)
        );
        spinBoxUnitGeometryPageHeight->clear();
        spinBoxUnitGeometryPageHeight->insertItems(0, QStringList()
         << QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "cm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "pt", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "bp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "in", 0, QApplication::UnicodeUTF8)
        );
        spinBoxGeometryPageHeight->setSuffix(QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8));
        checkBoxGeometryPageHeight->setText(QApplication::translate("QuickDocumentDialog", "Height:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QuickDocumentDialog", "Margins", 0, QApplication::UnicodeUTF8));
        checkBoxGeometryMarginLeft->setText(QApplication::translate("QuickDocumentDialog", "Left:", 0, QApplication::UnicodeUTF8));
        spinBoxGeometryMarginLeft->setSuffix(QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8));
        spinBoxUnitGeometryMarginLeft->clear();
        spinBoxUnitGeometryMarginLeft->insertItems(0, QStringList()
         << QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "cm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "pt", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "bp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "in", 0, QApplication::UnicodeUTF8)
        );
        checkBoxGeometryMarginRight->setText(QApplication::translate("QuickDocumentDialog", "Right:", 0, QApplication::UnicodeUTF8));
        spinBoxGeometryMarginRight->setSuffix(QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8));
        spinBoxUnitGeometryMarginRight->clear();
        spinBoxUnitGeometryMarginRight->insertItems(0, QStringList()
         << QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "cm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "pt", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "bp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "in", 0, QApplication::UnicodeUTF8)
        );
        spinBoxGeometryMarginTop->setSuffix(QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8));
        spinBoxUnitGeometryMarginTop->clear();
        spinBoxUnitGeometryMarginTop->insertItems(0, QStringList()
         << QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "cm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "pt", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "bp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "in", 0, QApplication::UnicodeUTF8)
        );
        checkBoxGeometryMarginTop->setText(QApplication::translate("QuickDocumentDialog", "Top:", 0, QApplication::UnicodeUTF8));
        checkBoxGeometryMarginBottom->setText(QApplication::translate("QuickDocumentDialog", "Bottom:", 0, QApplication::UnicodeUTF8));
        spinBoxGeometryMarginBottom->setSuffix(QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8));
        spinBoxUnitGeometryMarginBottom->clear();
        spinBoxUnitGeometryMarginBottom->insertItems(0, QStringList()
         << QApplication::translate("QuickDocumentDialog", "mm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "cm", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "pt", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "bp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QuickDocumentDialog", "in", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(tabGeometry), QApplication::translate("QuickDocumentDialog", "Geometry", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QuickDocumentDialog);
    } // retranslateUi

};

namespace Ui {
    class QuickDocumentDialog: public Ui_QuickDocumentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKDOCUMENTDIALOG_H
