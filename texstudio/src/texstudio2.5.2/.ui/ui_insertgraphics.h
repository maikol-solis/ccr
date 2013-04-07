/********************************************************************************
** Form generated from reading UI file 'insertgraphics.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTGRAPHICS_H
#define UI_INSERTGRAPHICS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InsertGraphics
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leFile;
    QPushButton *fileSelectButton;
    QGroupBox *groupBoxOptions;
    QGridLayout *gridLayout_2;
    QRadioButton *rbWidthHeight;
    QCheckBox *cbWidth;
    QLineEdit *leWidth;
    QComboBox *cbWidthUnit;
    QCheckBox *cbHeight;
    QLineEdit *leHeight;
    QComboBox *cbHeightUnit;
    QLineEdit *leScale;
    QRadioButton *rbUser;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cbCentering;
    QGroupBox *gbFloat;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QComboBox *cbPosition;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *teCaption;
    QLabel *label_3;
    QLineEdit *leLabel;
    QCheckBox *cbSpan;
    QLabel *label_2;
    QFrame *placementCheckboxes;
    QGridLayout *gridLayout_4;
    QCheckBox *cbPlaceTop;
    QCheckBox *cbPlaceBottom;
    QCheckBox *cbPlacePage;
    QCheckBox *cbPlaceHere;
    QCheckBox *cbPlaceForce;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lePlacement;
    QPushButton *pbPlaceExpand;
    QLineEdit *leShortCaption;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *hboxLayout;
    QPushButton *pbSaveDefault;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *InsertGraphics)
    {
        if (InsertGraphics->objectName().isEmpty())
            InsertGraphics->setObjectName(QString::fromUtf8("InsertGraphics"));
        InsertGraphics->resize(423, 517);
        verticalLayout = new QVBoxLayout(InsertGraphics);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        verticalLayout->setContentsMargins(9, 9, 9, 9);
#endif
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(InsertGraphics);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leFile = new QLineEdit(InsertGraphics);
        leFile->setObjectName(QString::fromUtf8("leFile"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leFile->sizePolicy().hasHeightForWidth());
        leFile->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(leFile, 0, 1, 1, 1);

        fileSelectButton = new QPushButton(InsertGraphics);
        fileSelectButton->setObjectName(QString::fromUtf8("fileSelectButton"));
        sizePolicy.setHeightForWidth(fileSelectButton->sizePolicy().hasHeightForWidth());
        fileSelectButton->setSizePolicy(sizePolicy);
        fileSelectButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/classic/images/classic/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileSelectButton->setIcon(icon);
        fileSelectButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(fileSelectButton, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        groupBoxOptions = new QGroupBox(InsertGraphics);
        groupBoxOptions->setObjectName(QString::fromUtf8("groupBoxOptions"));
        groupBoxOptions->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(groupBoxOptions);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rbWidthHeight = new QRadioButton(groupBoxOptions);
        rbWidthHeight->setObjectName(QString::fromUtf8("rbWidthHeight"));
        rbWidthHeight->setChecked(true);

        gridLayout_2->addWidget(rbWidthHeight, 0, 0, 1, 1);

        cbWidth = new QCheckBox(groupBoxOptions);
        cbWidth->setObjectName(QString::fromUtf8("cbWidth"));
        cbWidth->setChecked(true);

        gridLayout_2->addWidget(cbWidth, 0, 1, 1, 1);

        leWidth = new QLineEdit(groupBoxOptions);
        leWidth->setObjectName(QString::fromUtf8("leWidth"));

        gridLayout_2->addWidget(leWidth, 0, 2, 1, 1);

        cbWidthUnit = new QComboBox(groupBoxOptions);
        cbWidthUnit->setObjectName(QString::fromUtf8("cbWidthUnit"));
        cbWidthUnit->setMinimumSize(QSize(80, 0));

        gridLayout_2->addWidget(cbWidthUnit, 0, 3, 1, 1);

        cbHeight = new QCheckBox(groupBoxOptions);
        cbHeight->setObjectName(QString::fromUtf8("cbHeight"));

        gridLayout_2->addWidget(cbHeight, 1, 1, 1, 1);

        leHeight = new QLineEdit(groupBoxOptions);
        leHeight->setObjectName(QString::fromUtf8("leHeight"));

        gridLayout_2->addWidget(leHeight, 1, 2, 1, 1);

        cbHeightUnit = new QComboBox(groupBoxOptions);
        cbHeightUnit->setObjectName(QString::fromUtf8("cbHeightUnit"));
        cbHeightUnit->setMinimumSize(QSize(80, 0));

        gridLayout_2->addWidget(cbHeightUnit, 1, 3, 1, 1);

        leScale = new QLineEdit(groupBoxOptions);
        leScale->setObjectName(QString::fromUtf8("leScale"));

        gridLayout_2->addWidget(leScale, 3, 0, 1, 4);

        rbUser = new QRadioButton(groupBoxOptions);
        rbUser->setObjectName(QString::fromUtf8("rbUser"));

        gridLayout_2->addWidget(rbUser, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBoxOptions);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        cbCentering = new QCheckBox(InsertGraphics);
        cbCentering->setObjectName(QString::fromUtf8("cbCentering"));
        cbCentering->setChecked(true);

        horizontalLayout_2->addWidget(cbCentering);


        verticalLayout->addLayout(horizontalLayout_2);

        gbFloat = new QGroupBox(InsertGraphics);
        gbFloat->setObjectName(QString::fromUtf8("gbFloat"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gbFloat->sizePolicy().hasHeightForWidth());
        gbFloat->setSizePolicy(sizePolicy2);
        gbFloat->setMinimumSize(QSize(0, 260));
        gbFloat->setCheckable(true);
        gridLayout_3 = new QGridLayout(gbFloat);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_4 = new QLabel(gbFloat);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        cbPosition = new QComboBox(gbFloat);
        cbPosition->setObjectName(QString::fromUtf8("cbPosition"));

        gridLayout_3->addWidget(cbPosition, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);

        teCaption = new QPlainTextEdit(gbFloat);
        teCaption->setObjectName(QString::fromUtf8("teCaption"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(teCaption->sizePolicy().hasHeightForWidth());
        teCaption->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(teCaption, 2, 1, 1, 2);

        label_3 = new QLabel(gbFloat);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        leLabel = new QLineEdit(gbFloat);
        leLabel->setObjectName(QString::fromUtf8("leLabel"));

        gridLayout_3->addWidget(leLabel, 3, 1, 1, 2);

        cbSpan = new QCheckBox(gbFloat);
        cbSpan->setObjectName(QString::fromUtf8("cbSpan"));

        gridLayout_3->addWidget(cbSpan, 14, 0, 1, 2);

        label_2 = new QLabel(gbFloat);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 8, 0, 1, 1);

        placementCheckboxes = new QFrame(gbFloat);
        placementCheckboxes->setObjectName(QString::fromUtf8("placementCheckboxes"));
        placementCheckboxes->setFrameShape(QFrame::StyledPanel);
        placementCheckboxes->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(placementCheckboxes);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        cbPlaceTop = new QCheckBox(placementCheckboxes);
        cbPlaceTop->setObjectName(QString::fromUtf8("cbPlaceTop"));

        gridLayout_4->addWidget(cbPlaceTop, 0, 0, 1, 1);

        cbPlaceBottom = new QCheckBox(placementCheckboxes);
        cbPlaceBottom->setObjectName(QString::fromUtf8("cbPlaceBottom"));

        gridLayout_4->addWidget(cbPlaceBottom, 0, 1, 1, 1);

        cbPlacePage = new QCheckBox(placementCheckboxes);
        cbPlacePage->setObjectName(QString::fromUtf8("cbPlacePage"));

        gridLayout_4->addWidget(cbPlacePage, 0, 2, 1, 1);

        cbPlaceHere = new QCheckBox(placementCheckboxes);
        cbPlaceHere->setObjectName(QString::fromUtf8("cbPlaceHere"));

        gridLayout_4->addWidget(cbPlaceHere, 0, 3, 1, 1);

        cbPlaceForce = new QCheckBox(placementCheckboxes);
        cbPlaceForce->setObjectName(QString::fromUtf8("cbPlaceForce"));

        gridLayout_4->addWidget(cbPlaceForce, 1, 0, 1, 4);


        gridLayout_3->addWidget(placementCheckboxes, 9, 1, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lePlacement = new QLineEdit(gbFloat);
        lePlacement->setObjectName(QString::fromUtf8("lePlacement"));

        horizontalLayout_4->addWidget(lePlacement);

        pbPlaceExpand = new QPushButton(gbFloat);
        pbPlaceExpand->setObjectName(QString::fromUtf8("pbPlaceExpand"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/up-arrow-circle-silver.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPlaceExpand->setIcon(icon1);

        horizontalLayout_4->addWidget(pbPlaceExpand);


        gridLayout_3->addLayout(horizontalLayout_4, 8, 1, 1, 2);

        leShortCaption = new QLineEdit(gbFloat);
        leShortCaption->setObjectName(QString::fromUtf8("leShortCaption"));

        gridLayout_3->addWidget(leShortCaption, 1, 1, 1, 2);

        label_5 = new QLabel(gbFloat);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(gbFloat);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);


        verticalLayout->addWidget(gbFloat);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        pbSaveDefault = new QPushButton(InsertGraphics);
        pbSaveDefault->setObjectName(QString::fromUtf8("pbSaveDefault"));
        pbSaveDefault->setMinimumSize(QSize(0, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/classic/images/classic/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSaveDefault->setIcon(icon2);

        hboxLayout->addWidget(pbSaveDefault);

        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(InsertGraphics);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(InsertGraphics);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        verticalLayout->addLayout(hboxLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(leFile);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(leFile, fileSelectButton);
        QWidget::setTabOrder(fileSelectButton, rbWidthHeight);
        QWidget::setTabOrder(rbWidthHeight, cbWidth);
        QWidget::setTabOrder(cbWidth, leWidth);
        QWidget::setTabOrder(leWidth, cbWidthUnit);
        QWidget::setTabOrder(cbWidthUnit, cbHeight);
        QWidget::setTabOrder(cbHeight, leHeight);
        QWidget::setTabOrder(leHeight, cbHeightUnit);
        QWidget::setTabOrder(cbHeightUnit, rbUser);
        QWidget::setTabOrder(rbUser, leScale);
        QWidget::setTabOrder(leScale, cbCentering);
        QWidget::setTabOrder(cbCentering, gbFloat);
        QWidget::setTabOrder(gbFloat, cbPosition);
        QWidget::setTabOrder(cbPosition, leShortCaption);
        QWidget::setTabOrder(leShortCaption, teCaption);
        QWidget::setTabOrder(teCaption, leLabel);
        QWidget::setTabOrder(leLabel, lePlacement);
        QWidget::setTabOrder(lePlacement, pbPlaceExpand);
        QWidget::setTabOrder(pbPlaceExpand, cbPlaceTop);
        QWidget::setTabOrder(cbPlaceTop, cbPlaceBottom);
        QWidget::setTabOrder(cbPlaceBottom, cbPlacePage);
        QWidget::setTabOrder(cbPlacePage, cbPlaceHere);
        QWidget::setTabOrder(cbPlaceHere, cbPlaceForce);
        QWidget::setTabOrder(cbPlaceForce, cbSpan);
        QWidget::setTabOrder(cbSpan, pbSaveDefault);
        QWidget::setTabOrder(pbSaveDefault, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(InsertGraphics);
        QObject::connect(okButton, SIGNAL(clicked()), InsertGraphics, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), InsertGraphics, SLOT(reject()));

        cbPosition->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(InsertGraphics);
    } // setupUi

    void retranslateUi(QDialog *InsertGraphics)
    {
        label->setText(QApplication::translate("InsertGraphics", "File", 0, QApplication::UnicodeUTF8));
        fileSelectButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        groupBoxOptions->setToolTip(QApplication::translate("InsertGraphics", "Defines the options for \\includegraphics[options]{file}.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBoxOptions->setTitle(QApplication::translate("InsertGraphics", "Graphics Options", 0, QApplication::UnicodeUTF8));
        rbWidthHeight->setText(QApplication::translate("InsertGraphics", "Width/Height", 0, QApplication::UnicodeUTF8));
        cbWidth->setText(QApplication::translate("InsertGraphics", "Width", 0, QApplication::UnicodeUTF8));
        leWidth->setText(QApplication::translate("InsertGraphics", "0.7", 0, QApplication::UnicodeUTF8));
        cbHeight->setText(QApplication::translate("InsertGraphics", "Height", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leScale->setToolTip(QApplication::translate("InsertGraphics", "Defines the options for \\includegraphics[options]{file}.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        rbUser->setText(QApplication::translate("InsertGraphics", "User Defined", 0, QApplication::UnicodeUTF8));
        cbCentering->setText(QApplication::translate("InsertGraphics", "Center Horizontally", 0, QApplication::UnicodeUTF8));
        gbFloat->setTitle(QApplication::translate("InsertGraphics", "Place in Figure Environment", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("InsertGraphics", "Caption", 0, QApplication::UnicodeUTF8));
        cbPosition->clear();
        cbPosition->insertItems(0, QStringList()
         << QApplication::translate("InsertGraphics", "Above graphic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InsertGraphics", "Below graphic", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        teCaption->setToolTip(QApplication::translate("InsertGraphics", "Caption for display next to the image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("InsertGraphics", "Label", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leLabel->setToolTip(QApplication::translate("InsertGraphics", "Identifier, which is used to reference the graphic; e.g. using \\ref{thisLabel}", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbSpan->setText(QApplication::translate("InsertGraphics", "Span Two Columns", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("InsertGraphics", "Position", 0, QApplication::UnicodeUTF8));
        cbPlaceTop->setText(QApplication::translate("InsertGraphics", "Top", 0, QApplication::UnicodeUTF8));
        cbPlaceBottom->setText(QApplication::translate("InsertGraphics", "Bottom", 0, QApplication::UnicodeUTF8));
        cbPlacePage->setText(QApplication::translate("InsertGraphics", "Page", 0, QApplication::UnicodeUTF8));
        cbPlaceHere->setText(QApplication::translate("InsertGraphics", "Here", 0, QApplication::UnicodeUTF8));
        cbPlaceForce->setText(QApplication::translate("InsertGraphics", "Override Internal Layout Parameters", 0, QApplication::UnicodeUTF8));
        pbPlaceExpand->setText(QString());
#ifndef QT_NO_TOOLTIP
        leShortCaption->setToolTip(QApplication::translate("InsertGraphics", "Caption for display in the list of tables", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("InsertGraphics", "  Short", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("InsertGraphics", "  Long", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pbSaveDefault->setToolTip(QApplication::translate("InsertGraphics", "Save current settings as default.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbSaveDefault->setText(QApplication::translate("InsertGraphics", "as Default", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("InsertGraphics", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("InsertGraphics", "Cancel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(InsertGraphics);
    } // retranslateUi

};

namespace Ui {
    class InsertGraphics: public Ui_InsertGraphics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTGRAPHICS_H
