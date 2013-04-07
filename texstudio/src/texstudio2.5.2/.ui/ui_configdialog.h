/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFontComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *contentsWidget;
    QStackedWidget *pagesWidget;
    QWidget *pageGeneral;
    QVBoxLayout *vboxLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QComboBox *comboBoxInterfaceStyle;
    QLabel *label_5;
    QFontComboBox *comboBoxInterfaceFont;
    QLabel *label_7;
    QSpinBox *spinBoxInterfaceFontSize;
    QLabel *label_9;
    QComboBox *comboBoxLanguage;
    QLabel *label_14;
    QComboBox *comboBoxInterfaceModernStyle;
    QCheckBox *checkBoxTabbedStructureView;
    QCheckBox *checkBoxTabbedLogView;
    QCheckBox *checkBoxUseTexmakerPalette;
    QCheckBox *checkBoxUseSystemTheme;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout2;
    QLabel *label_8;
    QSpinBox *spinBoxMaxRecentFiles;
    QLabel *label_10;
    QSpinBox *spinBoxMaxRecentProjects;
    QCheckBox *checkBoxParseBibTeX;
    QCheckBox *checkBoxParseMaster;
    QGroupBox *groupBox;
    QGridLayout *gridLayout3;
    QLabel *label_13;
    QPushButton *btSelectThesaurusFileName;
    QComboBox *comboBoxThesaurusFileName;
    QLineEdit *leDictDir;
    QLabel *label_42;
    QComboBox *comboBoxSpellcheckLang;
    QLabel *label_43;
    QPushButton *pushButtonDictDir;
    QLabel *labelGetDic;
    QGroupBox *groupBox_Update;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBoxAutoUpdateCheck;
    QSpinBox *spinBoxAutoUpdateCheckIntervalDays;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_56;
    QLabel *labelUpdateCheckDate;
    QPushButton *pushButtonUpdateCheckNow;
    QSpacerItem *spacerItem;
    QWidget *pageCommands;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBoxCommands;
    QLabel *label_15;
    QLabel *label_4;
    QLabel *label_17;
    QLabel *label_16;
    QWidget *pageQuickBuild;
    QVBoxLayout *vboxLayout2;
    QGroupBox *groupBoxMetaCommands;
    QGroupBox *groupBoxUserCommands;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout;
    QCheckBox *checkBoxRunAfterBibTeXChange;
    QCheckBox *checkBoxShowLog;
    QCheckBox *checkBoxSingleInstanceViewer;
    QLabel *label_37;
    QComboBox *comboBoxShowStdout;
    QLabel *label_38;
    QSpinBox *spinBoxRerunLatex;
    QCheckBox *checkBox;
    QScrollArea *scrollAreaPaths;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_1;
    QPushButton *pushButtonPathLog;
    QLabel *label_58;
    QPushButton *pushButtonPathPdf;
    QLabel *label_57;
    QLineEdit *lineEditPathPDF;
    QLineEdit *lineEditPathLog;
    QLineEdit *lineEditPathCommands;
    QPushButton *pushButtonPathCommands;
    QLabel *label_59;
    QWidget *pageShortcuts;
    QVBoxLayout *vboxLayout3;
    QLabel *label_6;
    QTreeWidget *shortcutTree;
    QCheckBox *cb_CloseLogByEsc;
    QWidget *pageLatexMenus;
    QVBoxLayout *vboxLayout4;
    QLabel *label_19;
    QTreeWidget *latexTree;
    QCheckBox *checkBoxShowAllMenus;
    QWidget *pageToolbars;
    QVBoxLayout *vboxLayout5;
    QLabel *label_20;
    QGridLayout *_2;
    QListWidget *listCustomToolBar;
    QVBoxLayout *_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pbToToolbar;
    QPushButton *pbFromToolbar;
    QSpacerItem *spacer;
    QComboBox *comboBoxToolbars;
    QComboBox *comboBoxActions;
    QTreeWidget *treePossibleToolbarActions;
    QWidget *pageEditor;
    QGridLayout *gridLayout4;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout5;
    QLabel *labelFamily;
    QSpinBox *spinBoxSize;
    QLabel *labelEncoding;
    QComboBox *comboBoxEncoding;
    QComboBox *comboBoxAutoIndent;
    QLabel *labelSize;
    QCheckBox *checkBoxFolding;
    QComboBox *comboBoxFont;
    QLabel *label_30;
    QLabel *label_39;
    QComboBox *comboBoxReplaceQuotes;
    QGroupBox *groupBoxInlineChecking;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxInlineSpellCheck;
    QCheckBox *checkBoxInlineGrammarCheck;
    QCheckBox *checkBoxInlineCitationCheck;
    QCheckBox *checkBoxInlineReferenceCheck;
    QCheckBox *checkBoxInlineSyntaxCheck;
    QCheckBox *checkBoxRealTimeCheck;
    QCheckBox *checkBoxAutoDetectOnLoad;
    QLabel *label_2;
    QSpinBox *spinBoxLineSpacingPercent;
    QCheckBox *checkBoxShowOnlyMonospacedFonts;
    QCheckBox *checkBoxAutoLoad;
    QSpacerItem *verticalSpacer_5;
    QWidget *pageAdvEditor;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_33;
    QComboBox *comboboxLineNumbers;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *checkBoxState;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_22;
    QSpinBox *sbTabSpace;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *checkBoxShowWhitespace;
    QCheckBox *checkBoxLineState;
    QCheckBox *checkBoxBoldCursor;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBoxCloseSearchReplaceTogether;
    QCheckBox *checkBoxUseLineForSearch;
    QCheckBox *checkBoxSearchOnlyInSelection;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout6;
    QLabel *label_24;
    QLabel *label_23;
    QCheckBox *checkBoxAutoCompleteParens;
    QCheckBox *checkBoxMouseWheelZoom;
    QSpinBox *spinBoxWrapLineWidth;
    QComboBox *comboBoxAutoSave;
    QComboBox *comboBoxLineWrap;
    QLabel *label_41;
    QCheckBox *checkBoxToolTipHelp2;
    QCheckBox *checkBoxToolTipPreview;
    QGroupBox *gbTableAutoformat;
    QGridLayout *gridLayoutTableAutoFormat;
    QLabel *label_60;
    QLineEdit *leTableFormatingSpecialCommands;
    QLabel *label_61;
    QComboBox *cbTableFormatingSpecialCommandPos;
    QCheckBox *cbTableFormatingOneLinePerCell;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *checkBoxHackDisableAccentWorkaround;
    QCheckBox *checkBoxHackAutoRendering;
    QCheckBox *checkBoxHackDisableFixedPitch;
    QCheckBox *checkBoxHackDisableWidthCache;
    QCheckBox *checkBoxHackDisableLineCache;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QComboBox *comboBoxHackRenderMode;
    QSpacerItem *verticalSpacer;
    QWidget *pageSyntaxHighlighting;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *formatConfigBox;
    QWidget *pageCustomHighlighting;
    QVBoxLayout *vboxLayout6;
    QTableWidget *twHighlighEnvirons;
    QHBoxLayout *hboxLayout;
    QPushButton *pbAddLine;
    QPushButton *pbRemoveLine;
    QSpacerItem *spacerItem1;
    QTableWidget *twCustomSyntax;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbAddSyntaxLine;
    QPushButton *pbRemoveSyntaxLine;
    QSpacerItem *horizontalSpacer;
    QWidget *pageCompletion;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout7;
    QCheckBox *checkBoxCompletion;
    QCheckBox *checkBoxCaseSensitive;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QCheckBox *checkBoxCaseSensitiveInFirstCharacter;
    QSpacerItem *spacerItem3;
    QCheckBox *checkBoxCompletePrefix;
    QCheckBox *checkBoxEOWCompletes;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxPreferedTab;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBoxAutoReplaceCommands;
    QCheckBox *checkBoxToolTipHelp;
    QCheckBox *checkBoxUsePlaceholders;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_40;
    QSpinBox *spinBoxTabRelFontSize;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_12;
    QListWidget *completeListWidget;
    QWidget *pageGrammar;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_8;
    QCheckBox *checkBoxGrammarRepetitionCheck;
    QLabel *label_47;
    QSpinBox *spinBoxGrammarRepetitionDistance;
    QSpinBox *spinBoxGrammarLongRangeRepetition;
    QSpinBox *spinBoxGrammarLongRangeRepetitionMinLength;
    QLabel *label_54;
    QLabel *label_55;
    QLabel *label_48;
    QCheckBox *checkBoxGrammarBadWordCheck;
    QLineEdit *lineEditGrammarWordlists;
    QPushButton *pushButtonGrammarWordlists;
    QGroupBox *groupBox_14;
    QGridLayout *gridLayout_9;
    QLabel *label_44;
    QLineEdit *lineEditGrammarLTUrl;
    QCheckBox *checkBoxGrammarLTAutorun;
    QLabel *label_45;
    QLineEdit *lineEditGrammarLTPath;
    QPushButton *pushButtonGrammarLTPath;
    QLabel *label_46;
    QLineEdit *lineEditGrammarLTIgnoredRules;
    QLabel *label_49;
    QLineEdit *lineEditGrammarLTJava;
    QPushButton *pushButtonGrammarLTJava;
    QLineEdit *lineEditGrammarSpecialRules1;
    QLineEdit *lineEditGrammarSpecialRules2;
    QLineEdit *lineEditGrammarSpecialRules4;
    QLineEdit *lineEditGrammarSpecialRules3;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QSpacerItem *verticalSpacer_4;
    QWidget *pagePreview;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QLabel *label_31;
    QComboBox *comboBoxDvi2PngMode;
    QLabel *label_32;
    QComboBox *comboBoxPreviewMode;
    QLabel *label_35;
    QComboBox *comboBoxAutoPreview;
    QLabel *label_36;
    QSpinBox *spinBoxAutoPreviewDelay;
    QCheckBox *checkBoxReplaceBeamer;
    QCheckBox *checkBoxPrecompilePreamble;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_4;
    QLabel *label_28;
    QComboBox *comboBoxPreviewScale;
    QLabel *label_29;
    QSpinBox *spinBoxPreviewScale;
    QLabel *label_27;
    QSpinBox *spinBoxPreviewDPI;
    QLabel *label_26;
    QComboBox *comboBoxPreviewMagnifierShape;
    QLabel *label_25;
    QSpinBox *spinBoxPreviewMagnifierSize;
    QCheckBox *checkBoxPreviewMagnifierBorder;
    QLabel *label_34;
    QLineEdit *lineEditPreviewSyncFileMask;
    QLabel *label_18;
    QSpinBox *spinBoxCacheSizeMB;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageSVN;
    QVBoxLayout *vboxLayout7;
    QCheckBox *cbAutoCheckin;
    QCheckBox *cbSVNUndo;
    QCheckBox *cbKeywordSubstitution;
    QHBoxLayout *hboxLayout2;
    QLabel *label_21;
    QSpinBox *sbDirSearchDepth;
    QSpacerItem *spacerItem4;
    QCheckBox *checkBoxShowAdvancedOptions;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem5;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName(QString::fromUtf8("ConfigDialog"));
        ConfigDialog->resize(1116, 674);
        gridLayout = new QGridLayout(ConfigDialog);
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(18);
        gridLayout->setVerticalSpacing(6);
        contentsWidget = new QListWidget(ConfigDialog);
        contentsWidget->setObjectName(QString::fromUtf8("contentsWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(contentsWidget->sizePolicy().hasHeightForWidth());
        contentsWidget->setSizePolicy(sizePolicy);
        contentsWidget->setMinimumSize(QSize(200, 410));
        contentsWidget->setMaximumSize(QSize(170, 32000));
        contentsWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(contentsWidget, 0, 0, 2, 1);

        pagesWidget = new QStackedWidget(ConfigDialog);
        pagesWidget->setObjectName(QString::fromUtf8("pagesWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pagesWidget->sizePolicy().hasHeightForWidth());
        pagesWidget->setSizePolicy(sizePolicy1);
        pagesWidget->setMinimumSize(QSize(400, 390));
        pageGeneral = new QWidget();
        pageGeneral->setObjectName(QString::fromUtf8("pageGeneral"));
        vboxLayout = new QVBoxLayout(pageGeneral);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        scrollArea = new QScrollArea(pageGeneral);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 592, 600));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 9, 0);
        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout1 = new QGridLayout(groupBox_6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(label_3, 0, 0, 1, 1);

        comboBoxInterfaceStyle = new QComboBox(groupBox_6);
        comboBoxInterfaceStyle->setObjectName(QString::fromUtf8("comboBoxInterfaceStyle"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBoxInterfaceStyle->sizePolicy().hasHeightForWidth());
        comboBoxInterfaceStyle->setSizePolicy(sizePolicy3);

        gridLayout1->addWidget(comboBoxInterfaceStyle, 0, 1, 1, 2);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(label_5, 3, 0, 1, 1);

        comboBoxInterfaceFont = new QFontComboBox(groupBox_6);
        comboBoxInterfaceFont->setObjectName(QString::fromUtf8("comboBoxInterfaceFont"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboBoxInterfaceFont->sizePolicy().hasHeightForWidth());
        comboBoxInterfaceFont->setSizePolicy(sizePolicy4);

        gridLayout1->addWidget(comboBoxInterfaceFont, 3, 1, 1, 2);

        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(label_7, 4, 0, 1, 1);

        spinBoxInterfaceFontSize = new QSpinBox(groupBox_6);
        spinBoxInterfaceFontSize->setObjectName(QString::fromUtf8("spinBoxInterfaceFontSize"));
        sizePolicy4.setHeightForWidth(spinBoxInterfaceFontSize->sizePolicy().hasHeightForWidth());
        spinBoxInterfaceFontSize->setSizePolicy(sizePolicy4);

        gridLayout1->addWidget(spinBoxInterfaceFontSize, 4, 1, 1, 2);

        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        gridLayout1->addWidget(label_9, 8, 0, 1, 1);

        comboBoxLanguage = new QComboBox(groupBox_6);
        comboBoxLanguage->setObjectName(QString::fromUtf8("comboBoxLanguage"));
        sizePolicy4.setHeightForWidth(comboBoxLanguage->sizePolicy().hasHeightForWidth());
        comboBoxLanguage->setSizePolicy(sizePolicy4);

        gridLayout1->addWidget(comboBoxLanguage, 8, 1, 1, 2);

        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout1->addWidget(label_14, 1, 0, 1, 1);

        comboBoxInterfaceModernStyle = new QComboBox(groupBox_6);
        comboBoxInterfaceModernStyle->setObjectName(QString::fromUtf8("comboBoxInterfaceModernStyle"));

        gridLayout1->addWidget(comboBoxInterfaceModernStyle, 1, 1, 1, 2);

        checkBoxTabbedStructureView = new QCheckBox(groupBox_6);
        checkBoxTabbedStructureView->setObjectName(QString::fromUtf8("checkBoxTabbedStructureView"));
        sizePolicy4.setHeightForWidth(checkBoxTabbedStructureView->sizePolicy().hasHeightForWidth());
        checkBoxTabbedStructureView->setSizePolicy(sizePolicy4);
        checkBoxTabbedStructureView->setProperty("advancedOption", QVariant(true));

        gridLayout1->addWidget(checkBoxTabbedStructureView, 7, 2, 1, 1);

        checkBoxTabbedLogView = new QCheckBox(groupBox_6);
        checkBoxTabbedLogView->setObjectName(QString::fromUtf8("checkBoxTabbedLogView"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(checkBoxTabbedLogView->sizePolicy().hasHeightForWidth());
        checkBoxTabbedLogView->setSizePolicy(sizePolicy5);
        checkBoxTabbedLogView->setProperty("advancedOption", QVariant(true));

        gridLayout1->addWidget(checkBoxTabbedLogView, 7, 1, 1, 1);

        checkBoxUseTexmakerPalette = new QCheckBox(groupBox_6);
        checkBoxUseTexmakerPalette->setObjectName(QString::fromUtf8("checkBoxUseTexmakerPalette"));
        checkBoxUseTexmakerPalette->setProperty("advancedOption", QVariant(true));

        gridLayout1->addWidget(checkBoxUseTexmakerPalette, 2, 1, 1, 1);

        checkBoxUseSystemTheme = new QCheckBox(groupBox_6);
        checkBoxUseSystemTheme->setObjectName(QString::fromUtf8("checkBoxUseSystemTheme"));
        checkBoxUseSystemTheme->setProperty("advancedOption", QVariant(true));

        gridLayout1->addWidget(checkBoxUseSystemTheme, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setProperty("advancedOption", QVariant(true));
        gridLayout2 = new QGridLayout(groupBox_7);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_8 = new QLabel(groupBox_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);

        gridLayout2->addWidget(label_8, 1, 0, 1, 1);

        spinBoxMaxRecentFiles = new QSpinBox(groupBox_7);
        spinBoxMaxRecentFiles->setObjectName(QString::fromUtf8("spinBoxMaxRecentFiles"));
        sizePolicy4.setHeightForWidth(spinBoxMaxRecentFiles->sizePolicy().hasHeightForWidth());
        spinBoxMaxRecentFiles->setSizePolicy(sizePolicy4);

        gridLayout2->addWidget(spinBoxMaxRecentFiles, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);

        gridLayout2->addWidget(label_10, 2, 0, 1, 1);

        spinBoxMaxRecentProjects = new QSpinBox(groupBox_7);
        spinBoxMaxRecentProjects->setObjectName(QString::fromUtf8("spinBoxMaxRecentProjects"));
        sizePolicy4.setHeightForWidth(spinBoxMaxRecentProjects->sizePolicy().hasHeightForWidth());
        spinBoxMaxRecentProjects->setSizePolicy(sizePolicy4);

        gridLayout2->addWidget(spinBoxMaxRecentProjects, 2, 1, 1, 1);

        checkBoxParseBibTeX = new QCheckBox(groupBox_7);
        checkBoxParseBibTeX->setObjectName(QString::fromUtf8("checkBoxParseBibTeX"));

        gridLayout2->addWidget(checkBoxParseBibTeX, 3, 0, 1, 1);

        checkBoxParseMaster = new QCheckBox(groupBox_7);
        checkBoxParseMaster->setObjectName(QString::fromUtf8("checkBoxParseMaster"));
        checkBoxParseMaster->setProperty("advancedOption", QVariant(true));

        gridLayout2->addWidget(checkBoxParseMaster, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_7);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout3 = new QGridLayout(groupBox);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout3->addWidget(label_13, 3, 0, 1, 1);

        btSelectThesaurusFileName = new QPushButton(groupBox);
        btSelectThesaurusFileName->setObjectName(QString::fromUtf8("btSelectThesaurusFileName"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(btSelectThesaurusFileName->sizePolicy().hasHeightForWidth());
        btSelectThesaurusFileName->setSizePolicy(sizePolicy6);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/classic/images/classic/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        btSelectThesaurusFileName->setIcon(icon);

        gridLayout3->addWidget(btSelectThesaurusFileName, 3, 5, 1, 1);

        comboBoxThesaurusFileName = new QComboBox(groupBox);
        comboBoxThesaurusFileName->setObjectName(QString::fromUtf8("comboBoxThesaurusFileName"));
        comboBoxThesaurusFileName->setEditable(true);

        gridLayout3->addWidget(comboBoxThesaurusFileName, 3, 1, 1, 4);

        leDictDir = new QLineEdit(groupBox);
        leDictDir->setObjectName(QString::fromUtf8("leDictDir"));

        gridLayout3->addWidget(leDictDir, 0, 1, 1, 4);

        label_42 = new QLabel(groupBox);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout3->addWidget(label_42, 0, 0, 1, 1);

        comboBoxSpellcheckLang = new QComboBox(groupBox);
        comboBoxSpellcheckLang->setObjectName(QString::fromUtf8("comboBoxSpellcheckLang"));

        gridLayout3->addWidget(comboBoxSpellcheckLang, 1, 1, 1, 5);

        label_43 = new QLabel(groupBox);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout3->addWidget(label_43, 1, 0, 1, 1);

        pushButtonDictDir = new QPushButton(groupBox);
        pushButtonDictDir->setObjectName(QString::fromUtf8("pushButtonDictDir"));
        sizePolicy6.setHeightForWidth(pushButtonDictDir->sizePolicy().hasHeightForWidth());
        pushButtonDictDir->setSizePolicy(sizePolicy6);
        pushButtonDictDir->setIcon(icon);

        gridLayout3->addWidget(pushButtonDictDir, 0, 5, 1, 1);

        labelGetDic = new QLabel(groupBox);
        labelGetDic->setObjectName(QString::fromUtf8("labelGetDic"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(labelGetDic->sizePolicy().hasHeightForWidth());
        labelGetDic->setSizePolicy(sizePolicy7);

        gridLayout3->addWidget(labelGetDic, 2, 1, 1, 5);


        verticalLayout->addWidget(groupBox);

        groupBox_Update = new QGroupBox(scrollAreaWidgetContents);
        groupBox_Update->setObjectName(QString::fromUtf8("groupBox_Update"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_Update);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBoxAutoUpdateCheck = new QCheckBox(groupBox_Update);
        checkBoxAutoUpdateCheck->setObjectName(QString::fromUtf8("checkBoxAutoUpdateCheck"));

        horizontalLayout_5->addWidget(checkBoxAutoUpdateCheck);

        spinBoxAutoUpdateCheckIntervalDays = new QSpinBox(groupBox_Update);
        spinBoxAutoUpdateCheckIntervalDays->setObjectName(QString::fromUtf8("spinBoxAutoUpdateCheckIntervalDays"));
        spinBoxAutoUpdateCheckIntervalDays->setMinimum(1);
        spinBoxAutoUpdateCheckIntervalDays->setValue(7);

        horizontalLayout_5->addWidget(spinBoxAutoUpdateCheckIntervalDays);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label_56 = new QLabel(groupBox_Update);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        horizontalLayout_5->addWidget(label_56);

        labelUpdateCheckDate = new QLabel(groupBox_Update);
        labelUpdateCheckDate->setObjectName(QString::fromUtf8("labelUpdateCheckDate"));
        labelUpdateCheckDate->setText(QString::fromUtf8("<checkDate>"));

        horizontalLayout_5->addWidget(labelUpdateCheckDate);

        pushButtonUpdateCheckNow = new QPushButton(groupBox_Update);
        pushButtonUpdateCheckNow->setObjectName(QString::fromUtf8("pushButtonUpdateCheckNow"));

        horizontalLayout_5->addWidget(pushButtonUpdateCheckNow);


        verticalLayout->addWidget(groupBox_Update);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(spacerItem);

        scrollArea->setWidget(scrollAreaWidgetContents);

        vboxLayout->addWidget(scrollArea);

        pagesWidget->addWidget(pageGeneral);
        pageCommands = new QWidget();
        pageCommands->setObjectName(QString::fromUtf8("pageCommands"));
        vboxLayout1 = new QVBoxLayout(pageCommands);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        groupBoxCommands = new QGroupBox(pageCommands);
        groupBoxCommands->setObjectName(QString::fromUtf8("groupBoxCommands"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(groupBoxCommands->sizePolicy().hasHeightForWidth());
        groupBoxCommands->setSizePolicy(sizePolicy8);

        vboxLayout1->addWidget(groupBoxCommands);

        label_15 = new QLabel(pageCommands);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        vboxLayout1->addWidget(label_15);

        label_4 = new QLabel(pageCommands);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setIndent(15);

        vboxLayout1->addWidget(label_4);

        label_17 = new QLabel(pageCommands);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setWordWrap(true);
        label_17->setIndent(30);
        label_17->setProperty("advancedOption", QVariant(true));

        vboxLayout1->addWidget(label_17);

        label_16 = new QLabel(pageCommands);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMargin(0);
        label_16->setIndent(15);

        vboxLayout1->addWidget(label_16);

        pagesWidget->addWidget(pageCommands);
        pageQuickBuild = new QWidget();
        pageQuickBuild->setObjectName(QString::fromUtf8("pageQuickBuild"));
        vboxLayout2 = new QVBoxLayout(pageQuickBuild);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        groupBoxMetaCommands = new QGroupBox(pageQuickBuild);
        groupBoxMetaCommands->setObjectName(QString::fromUtf8("groupBoxMetaCommands"));
        sizePolicy.setHeightForWidth(groupBoxMetaCommands->sizePolicy().hasHeightForWidth());
        groupBoxMetaCommands->setSizePolicy(sizePolicy);
        groupBoxMetaCommands->setBaseSize(QSize(0, 0));

        vboxLayout2->addWidget(groupBoxMetaCommands);

        groupBoxUserCommands = new QGroupBox(pageQuickBuild);
        groupBoxUserCommands->setObjectName(QString::fromUtf8("groupBoxUserCommands"));
        groupBoxUserCommands->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        vboxLayout2->addWidget(groupBoxUserCommands);

        groupBox_4 = new QGroupBox(pageQuickBuild);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setProperty("advancedOption", QVariant(true));
        formLayout = new QFormLayout(groupBox_4);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        checkBoxRunAfterBibTeXChange = new QCheckBox(groupBox_4);
        checkBoxRunAfterBibTeXChange->setObjectName(QString::fromUtf8("checkBoxRunAfterBibTeXChange"));

        formLayout->setWidget(0, QFormLayout::LabelRole, checkBoxRunAfterBibTeXChange);

        checkBoxShowLog = new QCheckBox(groupBox_4);
        checkBoxShowLog->setObjectName(QString::fromUtf8("checkBoxShowLog"));
        checkBoxShowLog->setChecked(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, checkBoxShowLog);

        checkBoxSingleInstanceViewer = new QCheckBox(groupBox_4);
        checkBoxSingleInstanceViewer->setObjectName(QString::fromUtf8("checkBoxSingleInstanceViewer"));
        sizePolicy5.setHeightForWidth(checkBoxSingleInstanceViewer->sizePolicy().hasHeightForWidth());
        checkBoxSingleInstanceViewer->setSizePolicy(sizePolicy5);
        checkBoxSingleInstanceViewer->setMinimumSize(QSize(0, 0));
        checkBoxSingleInstanceViewer->setBaseSize(QSize(600, 0));

        formLayout->setWidget(2, QFormLayout::SpanningRole, checkBoxSingleInstanceViewer);

        label_37 = new QLabel(groupBox_4);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setProperty("advancedOption", QVariant(true));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_37);

        comboBoxShowStdout = new QComboBox(groupBox_4);
        comboBoxShowStdout->setObjectName(QString::fromUtf8("comboBoxShowStdout"));
        comboBoxShowStdout->setProperty("advancedOption", QVariant(true));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBoxShowStdout);

        label_38 = new QLabel(groupBox_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_38);

        spinBoxRerunLatex = new QSpinBox(groupBox_4);
        spinBoxRerunLatex->setObjectName(QString::fromUtf8("spinBoxRerunLatex"));
        spinBoxRerunLatex->setValue(5);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBoxRerunLatex);

        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, checkBox);

        scrollAreaPaths = new QScrollArea(groupBox_4);
        scrollAreaPaths->setObjectName(QString::fromUtf8("scrollAreaPaths"));
        scrollAreaPaths->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 850, 137));
        gridLayout_1 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        pushButtonPathLog = new QPushButton(scrollAreaWidgetContents_4);
        pushButtonPathLog->setObjectName(QString::fromUtf8("pushButtonPathLog"));
        sizePolicy6.setHeightForWidth(pushButtonPathLog->sizePolicy().hasHeightForWidth());
        pushButtonPathLog->setSizePolicy(sizePolicy6);
        pushButtonPathLog->setIcon(icon);

        gridLayout_1->addWidget(pushButtonPathLog, 1, 2, 1, 1);

        label_58 = new QLabel(scrollAreaWidgetContents_4);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        gridLayout_1->addWidget(label_58, 3, 0, 1, 1);

        pushButtonPathPdf = new QPushButton(scrollAreaWidgetContents_4);
        pushButtonPathPdf->setObjectName(QString::fromUtf8("pushButtonPathPdf"));
        sizePolicy6.setHeightForWidth(pushButtonPathPdf->sizePolicy().hasHeightForWidth());
        pushButtonPathPdf->setSizePolicy(sizePolicy6);
        pushButtonPathPdf->setIcon(icon);

        gridLayout_1->addWidget(pushButtonPathPdf, 2, 2, 4, 1);

        label_57 = new QLabel(scrollAreaWidgetContents_4);
        label_57->setObjectName(QString::fromUtf8("label_57"));

        gridLayout_1->addWidget(label_57, 1, 0, 1, 1);

        lineEditPathPDF = new QLineEdit(scrollAreaWidgetContents_4);
        lineEditPathPDF->setObjectName(QString::fromUtf8("lineEditPathPDF"));

        gridLayout_1->addWidget(lineEditPathPDF, 3, 1, 1, 1);

        lineEditPathLog = new QLineEdit(scrollAreaWidgetContents_4);
        lineEditPathLog->setObjectName(QString::fromUtf8("lineEditPathLog"));

        gridLayout_1->addWidget(lineEditPathLog, 0, 1, 3, 1);

        lineEditPathCommands = new QLineEdit(scrollAreaWidgetContents_4);
        lineEditPathCommands->setObjectName(QString::fromUtf8("lineEditPathCommands"));

        gridLayout_1->addWidget(lineEditPathCommands, 6, 1, 1, 1);

        pushButtonPathCommands = new QPushButton(scrollAreaWidgetContents_4);
        pushButtonPathCommands->setObjectName(QString::fromUtf8("pushButtonPathCommands"));
        sizePolicy6.setHeightForWidth(pushButtonPathCommands->sizePolicy().hasHeightForWidth());
        pushButtonPathCommands->setSizePolicy(sizePolicy6);
        pushButtonPathCommands->setIcon(icon);

        gridLayout_1->addWidget(pushButtonPathCommands, 6, 2, 2, 1);

        label_59 = new QLabel(scrollAreaWidgetContents_4);
        label_59->setObjectName(QString::fromUtf8("label_59"));

        gridLayout_1->addWidget(label_59, 6, 0, 1, 1);

        scrollAreaPaths->setWidget(scrollAreaWidgetContents_4);

        formLayout->setWidget(6, QFormLayout::SpanningRole, scrollAreaPaths);


        vboxLayout2->addWidget(groupBox_4);

        vboxLayout2->setStretch(0, 3);
        vboxLayout2->setStretch(1, 1);
        pagesWidget->addWidget(pageQuickBuild);
        pageShortcuts = new QWidget();
        pageShortcuts->setObjectName(QString::fromUtf8("pageShortcuts"));
        vboxLayout3 = new QVBoxLayout(pageShortcuts);
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        label_6 = new QLabel(pageShortcuts);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        vboxLayout3->addWidget(label_6);

        shortcutTree = new QTreeWidget(pageShortcuts);
        shortcutTree->setObjectName(QString::fromUtf8("shortcutTree"));
        shortcutTree->setAnimated(true);
        shortcutTree->setColumnCount(4);

        vboxLayout3->addWidget(shortcutTree);

        cb_CloseLogByEsc = new QCheckBox(pageShortcuts);
        cb_CloseLogByEsc->setObjectName(QString::fromUtf8("cb_CloseLogByEsc"));

        vboxLayout3->addWidget(cb_CloseLogByEsc);

        pagesWidget->addWidget(pageShortcuts);
        pageLatexMenus = new QWidget();
        pageLatexMenus->setObjectName(QString::fromUtf8("pageLatexMenus"));
        vboxLayout4 = new QVBoxLayout(pageLatexMenus);
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        label_19 = new QLabel(pageLatexMenus);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        vboxLayout4->addWidget(label_19);

        latexTree = new QTreeWidget(pageLatexMenus);
        latexTree->setObjectName(QString::fromUtf8("latexTree"));
        latexTree->setAnimated(true);
        latexTree->setColumnCount(3);
        latexTree->header()->setDefaultSectionSize(250);

        vboxLayout4->addWidget(latexTree);

        checkBoxShowAllMenus = new QCheckBox(pageLatexMenus);
        checkBoxShowAllMenus->setObjectName(QString::fromUtf8("checkBoxShowAllMenus"));

        vboxLayout4->addWidget(checkBoxShowAllMenus);

        pagesWidget->addWidget(pageLatexMenus);
        pageToolbars = new QWidget();
        pageToolbars->setObjectName(QString::fromUtf8("pageToolbars"));
        vboxLayout5 = new QVBoxLayout(pageToolbars);
        vboxLayout5->setContentsMargins(0, 0, 0, 0);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        label_20 = new QLabel(pageToolbars);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        vboxLayout5->addWidget(label_20);

        _2 = new QGridLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        listCustomToolBar = new QListWidget(pageToolbars);
        listCustomToolBar->setObjectName(QString::fromUtf8("listCustomToolBar"));
        listCustomToolBar->setMovement(QListView::Free);

        _2->addWidget(listCustomToolBar, 1, 1, 1, 1);

        _3 = new QVBoxLayout();
        _3->setObjectName(QString::fromUtf8("_3"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _3->addItem(verticalSpacer_3);

        pbToToolbar = new QPushButton(pageToolbars);
        pbToToolbar->setObjectName(QString::fromUtf8("pbToToolbar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbToToolbar->setIcon(icon1);

        _3->addWidget(pbToToolbar);

        pbFromToolbar = new QPushButton(pageToolbars);
        pbFromToolbar->setObjectName(QString::fromUtf8("pbFromToolbar"));
        pbFromToolbar->setText(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFromToolbar->setIcon(icon2);

        _3->addWidget(pbFromToolbar);

        spacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        _3->addItem(spacer);


        _2->addLayout(_3, 1, 2, 1, 1);

        comboBoxToolbars = new QComboBox(pageToolbars);
        comboBoxToolbars->setObjectName(QString::fromUtf8("comboBoxToolbars"));

        _2->addWidget(comboBoxToolbars, 0, 1, 1, 1);

        comboBoxActions = new QComboBox(pageToolbars);
        comboBoxActions->setObjectName(QString::fromUtf8("comboBoxActions"));

        _2->addWidget(comboBoxActions, 0, 3, 1, 1);

        treePossibleToolbarActions = new QTreeWidget(pageToolbars);
        treePossibleToolbarActions->setObjectName(QString::fromUtf8("treePossibleToolbarActions"));
        treePossibleToolbarActions->setRootIsDecorated(false);
        treePossibleToolbarActions->setAnimated(true);
        treePossibleToolbarActions->setAllColumnsShowFocus(true);

        _2->addWidget(treePossibleToolbarActions, 1, 3, 1, 1);


        vboxLayout5->addLayout(_2);

        pagesWidget->addWidget(pageToolbars);
        pageEditor = new QWidget();
        pageEditor->setObjectName(QString::fromUtf8("pageEditor"));
        gridLayout4 = new QGridLayout(pageEditor);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        groupBox_3 = new QGroupBox(pageEditor);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout5 = new QGridLayout(groupBox_3);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        labelFamily = new QLabel(groupBox_3);
        labelFamily->setObjectName(QString::fromUtf8("labelFamily"));

        gridLayout5->addWidget(labelFamily, 0, 0, 1, 1);

        spinBoxSize = new QSpinBox(groupBox_3);
        spinBoxSize->setObjectName(QString::fromUtf8("spinBoxSize"));
        spinBoxSize->setMinimum(1);
        spinBoxSize->setValue(12);

        gridLayout5->addWidget(spinBoxSize, 1, 1, 1, 4);

        labelEncoding = new QLabel(groupBox_3);
        labelEncoding->setObjectName(QString::fromUtf8("labelEncoding"));
        sizePolicy2.setHeightForWidth(labelEncoding->sizePolicy().hasHeightForWidth());
        labelEncoding->setSizePolicy(sizePolicy2);

        gridLayout5->addWidget(labelEncoding, 3, 0, 1, 1);

        comboBoxEncoding = new QComboBox(groupBox_3);
        comboBoxEncoding->setObjectName(QString::fromUtf8("comboBoxEncoding"));

        gridLayout5->addWidget(comboBoxEncoding, 3, 1, 1, 2);

        comboBoxAutoIndent = new QComboBox(groupBox_3);
        comboBoxAutoIndent->setObjectName(QString::fromUtf8("comboBoxAutoIndent"));
        comboBoxAutoIndent->setProperty("advancedOption", QVariant(false));

        gridLayout5->addWidget(comboBoxAutoIndent, 6, 1, 1, 4);

        labelSize = new QLabel(groupBox_3);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        gridLayout5->addWidget(labelSize, 1, 0, 1, 1);

        checkBoxFolding = new QCheckBox(groupBox_3);
        checkBoxFolding->setObjectName(QString::fromUtf8("checkBoxFolding"));

        gridLayout5->addWidget(checkBoxFolding, 4, 1, 1, 4);

        comboBoxFont = new QComboBox(groupBox_3);
        comboBoxFont->setObjectName(QString::fromUtf8("comboBoxFont"));
        comboBoxFont->setEditable(true);

        gridLayout5->addWidget(comboBoxFont, 0, 1, 1, 2);

        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout5->addWidget(label_30, 6, 0, 1, 1);

        label_39 = new QLabel(groupBox_3);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout5->addWidget(label_39, 7, 0, 1, 1);

        comboBoxReplaceQuotes = new QComboBox(groupBox_3);
        comboBoxReplaceQuotes->setObjectName(QString::fromUtf8("comboBoxReplaceQuotes"));

        gridLayout5->addWidget(comboBoxReplaceQuotes, 7, 1, 1, 4);

        groupBoxInlineChecking = new QGroupBox(groupBox_3);
        groupBoxInlineChecking->setObjectName(QString::fromUtf8("groupBoxInlineChecking"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(groupBoxInlineChecking->sizePolicy().hasHeightForWidth());
        groupBoxInlineChecking->setSizePolicy(sizePolicy9);
        horizontalLayout_4 = new QHBoxLayout(groupBoxInlineChecking);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBoxInlineSpellCheck = new QCheckBox(groupBoxInlineChecking);
        checkBoxInlineSpellCheck->setObjectName(QString::fromUtf8("checkBoxInlineSpellCheck"));

        horizontalLayout_4->addWidget(checkBoxInlineSpellCheck);

        checkBoxInlineGrammarCheck = new QCheckBox(groupBoxInlineChecking);
        checkBoxInlineGrammarCheck->setObjectName(QString::fromUtf8("checkBoxInlineGrammarCheck"));

        horizontalLayout_4->addWidget(checkBoxInlineGrammarCheck);

        checkBoxInlineCitationCheck = new QCheckBox(groupBoxInlineChecking);
        checkBoxInlineCitationCheck->setObjectName(QString::fromUtf8("checkBoxInlineCitationCheck"));

        horizontalLayout_4->addWidget(checkBoxInlineCitationCheck);

        checkBoxInlineReferenceCheck = new QCheckBox(groupBoxInlineChecking);
        checkBoxInlineReferenceCheck->setObjectName(QString::fromUtf8("checkBoxInlineReferenceCheck"));

        horizontalLayout_4->addWidget(checkBoxInlineReferenceCheck);

        checkBoxInlineSyntaxCheck = new QCheckBox(groupBoxInlineChecking);
        checkBoxInlineSyntaxCheck->setObjectName(QString::fromUtf8("checkBoxInlineSyntaxCheck"));

        horizontalLayout_4->addWidget(checkBoxInlineSyntaxCheck);


        gridLayout5->addWidget(groupBoxInlineChecking, 8, 1, 1, 4);

        checkBoxRealTimeCheck = new QCheckBox(groupBox_3);
        checkBoxRealTimeCheck->setObjectName(QString::fromUtf8("checkBoxRealTimeCheck"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(checkBoxRealTimeCheck->sizePolicy().hasHeightForWidth());
        checkBoxRealTimeCheck->setSizePolicy(sizePolicy10);
        checkBoxRealTimeCheck->setChecked(true);

        gridLayout5->addWidget(checkBoxRealTimeCheck, 8, 0, 1, 1);

        checkBoxAutoDetectOnLoad = new QCheckBox(groupBox_3);
        checkBoxAutoDetectOnLoad->setObjectName(QString::fromUtf8("checkBoxAutoDetectOnLoad"));

        gridLayout5->addWidget(checkBoxAutoDetectOnLoad, 3, 3, 1, 2);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setProperty("advancedOption", QVariant(true));

        gridLayout5->addWidget(label_2, 2, 0, 1, 1);

        spinBoxLineSpacingPercent = new QSpinBox(groupBox_3);
        spinBoxLineSpacingPercent->setObjectName(QString::fromUtf8("spinBoxLineSpacingPercent"));
        spinBoxLineSpacingPercent->setMinimum(100);
        spinBoxLineSpacingPercent->setMaximum(500);
        spinBoxLineSpacingPercent->setSingleStep(10);
        spinBoxLineSpacingPercent->setProperty("advancedOption", QVariant(true));

        gridLayout5->addWidget(spinBoxLineSpacingPercent, 2, 1, 1, 4);

        checkBoxShowOnlyMonospacedFonts = new QCheckBox(groupBox_3);
        checkBoxShowOnlyMonospacedFonts->setObjectName(QString::fromUtf8("checkBoxShowOnlyMonospacedFonts"));

        gridLayout5->addWidget(checkBoxShowOnlyMonospacedFonts, 0, 3, 1, 2);

        checkBoxAutoLoad = new QCheckBox(groupBox_3);
        checkBoxAutoLoad->setObjectName(QString::fromUtf8("checkBoxAutoLoad"));

        gridLayout5->addWidget(checkBoxAutoLoad, 9, 0, 1, 3);


        gridLayout4->addWidget(groupBox_3, 1, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(verticalSpacer_5, 2, 0, 1, 1);

        pagesWidget->addWidget(pageEditor);
        pageAdvEditor = new QWidget();
        pageAdvEditor->setObjectName(QString::fromUtf8("pageAdvEditor"));
        verticalLayout_2 = new QVBoxLayout(pageAdvEditor);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea_2 = new QScrollArea(pageAdvEditor);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 865, 750));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, -1, 0);
        groupBox_9 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_6 = new QGridLayout(groupBox_9);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_33 = new QLabel(groupBox_9);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_6->addWidget(label_33);

        comboboxLineNumbers = new QComboBox(groupBox_9);
        comboboxLineNumbers->setObjectName(QString::fromUtf8("comboboxLineNumbers"));
        comboboxLineNumbers->setProperty("advancedOption", QVariant(true));

        horizontalLayout_6->addWidget(comboboxLineNumbers);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        gridLayout_6->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        checkBoxState = new QCheckBox(groupBox_9);
        checkBoxState->setObjectName(QString::fromUtf8("checkBoxState"));
        checkBoxState->setProperty("advancedOption", QVariant(true));

        gridLayout_6->addWidget(checkBoxState, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_22 = new QLabel(groupBox_9);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_7->addWidget(label_22);

        sbTabSpace = new QSpinBox(groupBox_9);
        sbTabSpace->setObjectName(QString::fromUtf8("sbTabSpace"));
        sbTabSpace->setMinimum(2);
        sbTabSpace->setMaximum(32);
        sbTabSpace->setValue(4);

        horizontalLayout_7->addWidget(sbTabSpace);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        gridLayout_6->addLayout(horizontalLayout_7, 1, 1, 1, 1);

        checkBoxShowWhitespace = new QCheckBox(groupBox_9);
        checkBoxShowWhitespace->setObjectName(QString::fromUtf8("checkBoxShowWhitespace"));
        checkBoxShowWhitespace->setChecked(true);
        checkBoxShowWhitespace->setProperty("advancedOption", QVariant(true));

        gridLayout_6->addWidget(checkBoxShowWhitespace, 0, 1, 1, 1);

        checkBoxLineState = new QCheckBox(groupBox_9);
        checkBoxLineState->setObjectName(QString::fromUtf8("checkBoxLineState"));
        checkBoxLineState->setProperty("advancedOption", QVariant(true));

        gridLayout_6->addWidget(checkBoxLineState, 0, 0, 1, 1);

        checkBoxBoldCursor = new QCheckBox(groupBox_9);
        checkBoxBoldCursor->setObjectName(QString::fromUtf8("checkBoxBoldCursor"));
        checkBoxBoldCursor->setChecked(true);
        checkBoxBoldCursor->setProperty("advancedOption", QVariant(true));

        gridLayout_6->addWidget(checkBoxBoldCursor, 2, 1, 1, 1);


        verticalLayout_8->addWidget(groupBox_9);

        groupBox_10 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        verticalLayout_5 = new QVBoxLayout(groupBox_10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        checkBoxCloseSearchReplaceTogether = new QCheckBox(groupBox_10);
        checkBoxCloseSearchReplaceTogether->setObjectName(QString::fromUtf8("checkBoxCloseSearchReplaceTogether"));
        checkBoxCloseSearchReplaceTogether->setProperty("advancedOption", QVariant(true));

        verticalLayout_5->addWidget(checkBoxCloseSearchReplaceTogether);

        checkBoxUseLineForSearch = new QCheckBox(groupBox_10);
        checkBoxUseLineForSearch->setObjectName(QString::fromUtf8("checkBoxUseLineForSearch"));
        checkBoxUseLineForSearch->setProperty("advancedOption", QVariant(true));

        verticalLayout_5->addWidget(checkBoxUseLineForSearch);

        checkBoxSearchOnlyInSelection = new QCheckBox(groupBox_10);
        checkBoxSearchOnlyInSelection->setObjectName(QString::fromUtf8("checkBoxSearchOnlyInSelection"));

        verticalLayout_5->addWidget(checkBoxSearchOnlyInSelection);


        verticalLayout_8->addWidget(groupBox_10);

        groupBox_11 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setCheckable(false);
        gridLayout6 = new QGridLayout(groupBox_11);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        label_24 = new QLabel(groupBox_11);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout6->addWidget(label_24, 8, 0, 1, 1);

        label_23 = new QLabel(groupBox_11);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout6->addWidget(label_23, 6, 0, 1, 1);

        checkBoxAutoCompleteParens = new QCheckBox(groupBox_11);
        checkBoxAutoCompleteParens->setObjectName(QString::fromUtf8("checkBoxAutoCompleteParens"));

        gridLayout6->addWidget(checkBoxAutoCompleteParens, 3, 0, 1, 1);

        checkBoxMouseWheelZoom = new QCheckBox(groupBox_11);
        checkBoxMouseWheelZoom->setObjectName(QString::fromUtf8("checkBoxMouseWheelZoom"));

        gridLayout6->addWidget(checkBoxMouseWheelZoom, 4, 0, 1, 1);

        spinBoxWrapLineWidth = new QSpinBox(groupBox_11);
        spinBoxWrapLineWidth->setObjectName(QString::fromUtf8("spinBoxWrapLineWidth"));
        spinBoxWrapLineWidth->setMinimum(20);
        spinBoxWrapLineWidth->setMaximum(999);

        gridLayout6->addWidget(spinBoxWrapLineWidth, 6, 1, 1, 1);

        comboBoxAutoSave = new QComboBox(groupBox_11);
        comboBoxAutoSave->setObjectName(QString::fromUtf8("comboBoxAutoSave"));

        gridLayout6->addWidget(comboBoxAutoSave, 8, 1, 1, 1);

        comboBoxLineWrap = new QComboBox(groupBox_11);
        comboBoxLineWrap->setObjectName(QString::fromUtf8("comboBoxLineWrap"));

        gridLayout6->addWidget(comboBoxLineWrap, 5, 1, 1, 1);

        label_41 = new QLabel(groupBox_11);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout6->addWidget(label_41, 5, 0, 1, 1);

        checkBoxToolTipHelp2 = new QCheckBox(groupBox_11);
        checkBoxToolTipHelp2->setObjectName(QString::fromUtf8("checkBoxToolTipHelp2"));

        gridLayout6->addWidget(checkBoxToolTipHelp2, 3, 2, 1, 2);

        checkBoxToolTipPreview = new QCheckBox(groupBox_11);
        checkBoxToolTipPreview->setObjectName(QString::fromUtf8("checkBoxToolTipPreview"));

        gridLayout6->addWidget(checkBoxToolTipPreview, 4, 2, 1, 2);

        gridLayout6->setColumnStretch(1, 1);
        gridLayout6->setColumnStretch(2, 1);
        gridLayout6->setColumnStretch(3, 1);

        verticalLayout_8->addWidget(groupBox_11);

        gbTableAutoformat = new QGroupBox(scrollAreaWidgetContents_2);
        gbTableAutoformat->setObjectName(QString::fromUtf8("gbTableAutoformat"));
        gridLayoutTableAutoFormat = new QGridLayout(gbTableAutoformat);
        gridLayoutTableAutoFormat->setObjectName(QString::fromUtf8("gridLayoutTableAutoFormat"));
        label_60 = new QLabel(gbTableAutoformat);
        label_60->setObjectName(QString::fromUtf8("label_60"));

        gridLayoutTableAutoFormat->addWidget(label_60, 0, 0, 1, 1);

        leTableFormatingSpecialCommands = new QLineEdit(gbTableAutoformat);
        leTableFormatingSpecialCommands->setObjectName(QString::fromUtf8("leTableFormatingSpecialCommands"));

        gridLayoutTableAutoFormat->addWidget(leTableFormatingSpecialCommands, 0, 1, 1, 1);

        label_61 = new QLabel(gbTableAutoformat);
        label_61->setObjectName(QString::fromUtf8("label_61"));

        gridLayoutTableAutoFormat->addWidget(label_61, 1, 0, 1, 1);

        cbTableFormatingSpecialCommandPos = new QComboBox(gbTableAutoformat);
        cbTableFormatingSpecialCommandPos->setObjectName(QString::fromUtf8("cbTableFormatingSpecialCommandPos"));

        gridLayoutTableAutoFormat->addWidget(cbTableFormatingSpecialCommandPos, 1, 1, 1, 1);

        cbTableFormatingOneLinePerCell = new QCheckBox(gbTableAutoformat);
        cbTableFormatingOneLinePerCell->setObjectName(QString::fromUtf8("cbTableFormatingOneLinePerCell"));

        gridLayoutTableAutoFormat->addWidget(cbTableFormatingOneLinePerCell, 2, 0, 1, 2);


        verticalLayout_8->addWidget(gbTableAutoformat);

        groupBox_12 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        verticalLayout_11 = new QVBoxLayout(groupBox_12);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        checkBoxHackDisableAccentWorkaround = new QCheckBox(groupBox_12);
        checkBoxHackDisableAccentWorkaround->setObjectName(QString::fromUtf8("checkBoxHackDisableAccentWorkaround"));

        verticalLayout_11->addWidget(checkBoxHackDisableAccentWorkaround);

        checkBoxHackAutoRendering = new QCheckBox(groupBox_12);
        checkBoxHackAutoRendering->setObjectName(QString::fromUtf8("checkBoxHackAutoRendering"));

        verticalLayout_11->addWidget(checkBoxHackAutoRendering);

        checkBoxHackDisableFixedPitch = new QCheckBox(groupBox_12);
        checkBoxHackDisableFixedPitch->setObjectName(QString::fromUtf8("checkBoxHackDisableFixedPitch"));

        verticalLayout_11->addWidget(checkBoxHackDisableFixedPitch);

        checkBoxHackDisableWidthCache = new QCheckBox(groupBox_12);
        checkBoxHackDisableWidthCache->setObjectName(QString::fromUtf8("checkBoxHackDisableWidthCache"));

        verticalLayout_11->addWidget(checkBoxHackDisableWidthCache);

        checkBoxHackDisableLineCache = new QCheckBox(groupBox_12);
        checkBoxHackDisableLineCache->setObjectName(QString::fromUtf8("checkBoxHackDisableLineCache"));

        verticalLayout_11->addWidget(checkBoxHackDisableLineCache);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_11 = new QLabel(groupBox_12);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy11(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy11);

        horizontalLayout_8->addWidget(label_11);

        comboBoxHackRenderMode = new QComboBox(groupBox_12);
        comboBoxHackRenderMode->setObjectName(QString::fromUtf8("comboBoxHackRenderMode"));

        horizontalLayout_8->addWidget(comboBoxHackRenderMode);


        verticalLayout_11->addLayout(horizontalLayout_8);


        verticalLayout_8->addWidget(groupBox_12);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea_2);

        pagesWidget->addWidget(pageAdvEditor);
        pageSyntaxHighlighting = new QWidget();
        pageSyntaxHighlighting->setObjectName(QString::fromUtf8("pageSyntaxHighlighting"));
        verticalLayout_7 = new QVBoxLayout(pageSyntaxHighlighting);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        formatConfigBox = new QGroupBox(pageSyntaxHighlighting);
        formatConfigBox->setObjectName(QString::fromUtf8("formatConfigBox"));
        QSizePolicy sizePolicy12(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(formatConfigBox->sizePolicy().hasHeightForWidth());
        formatConfigBox->setSizePolicy(sizePolicy12);
        formatConfigBox->setMinimumSize(QSize(0, 0));
        formatConfigBox->setBaseSize(QSize(0, 0));

        verticalLayout_7->addWidget(formatConfigBox);

        pagesWidget->addWidget(pageSyntaxHighlighting);
        pageCustomHighlighting = new QWidget();
        pageCustomHighlighting->setObjectName(QString::fromUtf8("pageCustomHighlighting"));
        vboxLayout6 = new QVBoxLayout(pageCustomHighlighting);
        vboxLayout6->setContentsMargins(0, 0, 0, 0);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        twHighlighEnvirons = new QTableWidget(pageCustomHighlighting);
        if (twHighlighEnvirons->columnCount() < 2)
            twHighlighEnvirons->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twHighlighEnvirons->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twHighlighEnvirons->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (twHighlighEnvirons->rowCount() < 1)
            twHighlighEnvirons->setRowCount(1);
        twHighlighEnvirons->setObjectName(QString::fromUtf8("twHighlighEnvirons"));
        twHighlighEnvirons->setRowCount(1);
        twHighlighEnvirons->setColumnCount(2);
        twHighlighEnvirons->horizontalHeader()->setDefaultSectionSize(200);

        vboxLayout6->addWidget(twHighlighEnvirons);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        pbAddLine = new QPushButton(pageCustomHighlighting);
        pbAddLine->setObjectName(QString::fromUtf8("pbAddLine"));

        hboxLayout->addWidget(pbAddLine);

        pbRemoveLine = new QPushButton(pageCustomHighlighting);
        pbRemoveLine->setObjectName(QString::fromUtf8("pbRemoveLine"));

        hboxLayout->addWidget(pbRemoveLine);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout6->addLayout(hboxLayout);

        twCustomSyntax = new QTableWidget(pageCustomHighlighting);
        if (twCustomSyntax->columnCount() < 1)
            twCustomSyntax->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twCustomSyntax->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        if (twCustomSyntax->rowCount() < 1)
            twCustomSyntax->setRowCount(1);
        twCustomSyntax->setObjectName(QString::fromUtf8("twCustomSyntax"));
        twCustomSyntax->setRowCount(1);
        twCustomSyntax->horizontalHeader()->setStretchLastSection(true);

        vboxLayout6->addWidget(twCustomSyntax);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pbAddSyntaxLine = new QPushButton(pageCustomHighlighting);
        pbAddSyntaxLine->setObjectName(QString::fromUtf8("pbAddSyntaxLine"));

        horizontalLayout_3->addWidget(pbAddSyntaxLine);

        pbRemoveSyntaxLine = new QPushButton(pageCustomHighlighting);
        pbRemoveSyntaxLine->setObjectName(QString::fromUtf8("pbRemoveSyntaxLine"));

        horizontalLayout_3->addWidget(pbRemoveSyntaxLine);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        vboxLayout6->addLayout(horizontalLayout_3);

        pagesWidget->addWidget(pageCustomHighlighting);
        pageCompletion = new QWidget();
        pageCompletion->setObjectName(QString::fromUtf8("pageCompletion"));
        verticalLayout_4 = new QVBoxLayout(pageCompletion);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_2 = new QGroupBox(pageCompletion);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout7 = new QGridLayout(groupBox_2);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        checkBoxCompletion = new QCheckBox(groupBox_2);
        checkBoxCompletion->setObjectName(QString::fromUtf8("checkBoxCompletion"));

        gridLayout7->addWidget(checkBoxCompletion, 0, 0, 1, 1);

        checkBoxCaseSensitive = new QCheckBox(groupBox_2);
        checkBoxCaseSensitive->setObjectName(QString::fromUtf8("checkBoxCaseSensitive"));

        gridLayout7->addWidget(checkBoxCaseSensitive, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        checkBoxCaseSensitiveInFirstCharacter = new QCheckBox(groupBox_2);
        checkBoxCaseSensitiveInFirstCharacter->setObjectName(QString::fromUtf8("checkBoxCaseSensitiveInFirstCharacter"));
        checkBoxCaseSensitiveInFirstCharacter->setProperty("advancedOption", QVariant(true));

        hboxLayout1->addWidget(checkBoxCaseSensitiveInFirstCharacter);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        gridLayout7->addLayout(hboxLayout1, 2, 0, 1, 1);

        checkBoxCompletePrefix = new QCheckBox(groupBox_2);
        checkBoxCompletePrefix->setObjectName(QString::fromUtf8("checkBoxCompletePrefix"));
        checkBoxCompletePrefix->setProperty("advancedOption", QVariant(true));

        gridLayout7->addWidget(checkBoxCompletePrefix, 3, 0, 1, 1);

        checkBoxEOWCompletes = new QCheckBox(groupBox_2);
        checkBoxEOWCompletes->setObjectName(QString::fromUtf8("checkBoxEOWCompletes"));
        checkBoxEOWCompletes->setProperty("advancedOption", QVariant(true));

        gridLayout7->addWidget(checkBoxEOWCompletes, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBoxPreferedTab = new QComboBox(groupBox_2);
        comboBoxPreferedTab->setObjectName(QString::fromUtf8("comboBoxPreferedTab"));

        horizontalLayout->addWidget(comboBoxPreferedTab);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout7->addLayout(horizontalLayout, 0, 1, 1, 1);

        checkBoxAutoReplaceCommands = new QCheckBox(groupBox_2);
        checkBoxAutoReplaceCommands->setObjectName(QString::fromUtf8("checkBoxAutoReplaceCommands"));

        gridLayout7->addWidget(checkBoxAutoReplaceCommands, 1, 1, 1, 1);

        checkBoxToolTipHelp = new QCheckBox(groupBox_2);
        checkBoxToolTipHelp->setObjectName(QString::fromUtf8("checkBoxToolTipHelp"));
        checkBoxToolTipHelp->setProperty("advancedOption", QVariant(false));

        gridLayout7->addWidget(checkBoxToolTipHelp, 2, 1, 1, 1);

        checkBoxUsePlaceholders = new QCheckBox(groupBox_2);
        checkBoxUsePlaceholders->setObjectName(QString::fromUtf8("checkBoxUsePlaceholders"));
        checkBoxUsePlaceholders->setProperty("advancedOption", QVariant(true));

        gridLayout7->addWidget(checkBoxUsePlaceholders, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_40 = new QLabel(groupBox_2);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setProperty("advancedOption", QVariant(true));

        horizontalLayout_2->addWidget(label_40);

        spinBoxTabRelFontSize = new QSpinBox(groupBox_2);
        spinBoxTabRelFontSize->setObjectName(QString::fromUtf8("spinBoxTabRelFontSize"));
        spinBoxTabRelFontSize->setSuffix(QString::fromUtf8(" %"));
        spinBoxTabRelFontSize->setMaximum(10000);
        spinBoxTabRelFontSize->setValue(75);
        spinBoxTabRelFontSize->setProperty("advancedOption", QVariant(true));

        horizontalLayout_2->addWidget(spinBoxTabRelFontSize);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout7->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        gridLayout7->setColumnStretch(0, 1);
        gridLayout7->setColumnStretch(1, 1);

        verticalLayout_4->addWidget(groupBox_2);

        label_12 = new QLabel(pageCompletion);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        completeListWidget = new QListWidget(pageCompletion);
        completeListWidget->setObjectName(QString::fromUtf8("completeListWidget"));
        completeListWidget->setFlow(QListView::TopToBottom);
        completeListWidget->setProperty("isWrapping", QVariant(true));
        completeListWidget->setResizeMode(QListView::Adjust);
        completeListWidget->setUniformItemSizes(false);
        completeListWidget->setSortingEnabled(true);

        verticalLayout_4->addWidget(completeListWidget);

        pagesWidget->addWidget(pageCompletion);
        pageGrammar = new QWidget();
        pageGrammar->setObjectName(QString::fromUtf8("pageGrammar"));
        verticalLayout_6 = new QVBoxLayout(pageGrammar);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        scrollArea_3 = new QScrollArea(pageGrammar);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 377, 528));
        verticalLayout_9 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, -1);
        groupBox_13 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        gridLayout_8 = new QGridLayout(groupBox_13);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        checkBoxGrammarRepetitionCheck = new QCheckBox(groupBox_13);
        checkBoxGrammarRepetitionCheck->setObjectName(QString::fromUtf8("checkBoxGrammarRepetitionCheck"));

        gridLayout_8->addWidget(checkBoxGrammarRepetitionCheck, 0, 0, 1, 3);

        label_47 = new QLabel(groupBox_13);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setProperty("advancedOption", QVariant(true));

        gridLayout_8->addWidget(label_47, 1, 0, 1, 1);

        spinBoxGrammarRepetitionDistance = new QSpinBox(groupBox_13);
        spinBoxGrammarRepetitionDistance->setObjectName(QString::fromUtf8("spinBoxGrammarRepetitionDistance"));
        spinBoxGrammarRepetitionDistance->setProperty("advancedOption", QVariant(true));

        gridLayout_8->addWidget(spinBoxGrammarRepetitionDistance, 1, 1, 1, 2);

        spinBoxGrammarLongRangeRepetition = new QSpinBox(groupBox_13);
        spinBoxGrammarLongRangeRepetition->setObjectName(QString::fromUtf8("spinBoxGrammarLongRangeRepetition"));
        spinBoxGrammarLongRangeRepetition->setProperty("advancedOption", QVariant(true));

        gridLayout_8->addWidget(spinBoxGrammarLongRangeRepetition, 2, 1, 1, 2);

        spinBoxGrammarLongRangeRepetitionMinLength = new QSpinBox(groupBox_13);
        spinBoxGrammarLongRangeRepetitionMinLength->setObjectName(QString::fromUtf8("spinBoxGrammarLongRangeRepetitionMinLength"));
        spinBoxGrammarLongRangeRepetitionMinLength->setProperty("advancedOption", QVariant(true));

        gridLayout_8->addWidget(spinBoxGrammarLongRangeRepetitionMinLength, 3, 1, 1, 2);

        label_54 = new QLabel(groupBox_13);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setProperty("advancedOption", QVariant(true));

        gridLayout_8->addWidget(label_54, 2, 0, 1, 1);

        label_55 = new QLabel(groupBox_13);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setProperty("advancedOption", QVariant(true));

        gridLayout_8->addWidget(label_55, 3, 0, 1, 1);

        label_48 = new QLabel(groupBox_13);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_8->addWidget(label_48, 5, 0, 1, 1);

        checkBoxGrammarBadWordCheck = new QCheckBox(groupBox_13);
        checkBoxGrammarBadWordCheck->setObjectName(QString::fromUtf8("checkBoxGrammarBadWordCheck"));

        gridLayout_8->addWidget(checkBoxGrammarBadWordCheck, 4, 0, 1, 1);

        lineEditGrammarWordlists = new QLineEdit(groupBox_13);
        lineEditGrammarWordlists->setObjectName(QString::fromUtf8("lineEditGrammarWordlists"));

        gridLayout_8->addWidget(lineEditGrammarWordlists, 5, 1, 1, 1);

        pushButtonGrammarWordlists = new QPushButton(groupBox_13);
        pushButtonGrammarWordlists->setObjectName(QString::fromUtf8("pushButtonGrammarWordlists"));
        sizePolicy6.setHeightForWidth(pushButtonGrammarWordlists->sizePolicy().hasHeightForWidth());
        pushButtonGrammarWordlists->setSizePolicy(sizePolicy6);
        pushButtonGrammarWordlists->setIcon(icon);

        gridLayout_8->addWidget(pushButtonGrammarWordlists, 5, 2, 1, 1);


        verticalLayout_9->addWidget(groupBox_13);

        groupBox_14 = new QGroupBox(scrollAreaWidgetContents_3);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        gridLayout_9 = new QGridLayout(groupBox_14);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_44 = new QLabel(groupBox_14);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_9->addWidget(label_44, 0, 0, 1, 1);

        lineEditGrammarLTUrl = new QLineEdit(groupBox_14);
        lineEditGrammarLTUrl->setObjectName(QString::fromUtf8("lineEditGrammarLTUrl"));

        gridLayout_9->addWidget(lineEditGrammarLTUrl, 0, 1, 1, 2);

        checkBoxGrammarLTAutorun = new QCheckBox(groupBox_14);
        checkBoxGrammarLTAutorun->setObjectName(QString::fromUtf8("checkBoxGrammarLTAutorun"));

        gridLayout_9->addWidget(checkBoxGrammarLTAutorun, 3, 0, 1, 3);

        label_45 = new QLabel(groupBox_14);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_9->addWidget(label_45, 4, 0, 1, 1);

        lineEditGrammarLTPath = new QLineEdit(groupBox_14);
        lineEditGrammarLTPath->setObjectName(QString::fromUtf8("lineEditGrammarLTPath"));

        gridLayout_9->addWidget(lineEditGrammarLTPath, 4, 1, 1, 1);

        pushButtonGrammarLTPath = new QPushButton(groupBox_14);
        pushButtonGrammarLTPath->setObjectName(QString::fromUtf8("pushButtonGrammarLTPath"));
        sizePolicy6.setHeightForWidth(pushButtonGrammarLTPath->sizePolicy().hasHeightForWidth());
        pushButtonGrammarLTPath->setSizePolicy(sizePolicy6);
        pushButtonGrammarLTPath->setIcon(icon);

        gridLayout_9->addWidget(pushButtonGrammarLTPath, 4, 2, 1, 1);

        label_46 = new QLabel(groupBox_14);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        gridLayout_9->addWidget(label_46, 1, 0, 1, 1);

        lineEditGrammarLTIgnoredRules = new QLineEdit(groupBox_14);
        lineEditGrammarLTIgnoredRules->setObjectName(QString::fromUtf8("lineEditGrammarLTIgnoredRules"));

        gridLayout_9->addWidget(lineEditGrammarLTIgnoredRules, 1, 1, 1, 2);

        label_49 = new QLabel(groupBox_14);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_9->addWidget(label_49, 5, 0, 1, 1);

        lineEditGrammarLTJava = new QLineEdit(groupBox_14);
        lineEditGrammarLTJava->setObjectName(QString::fromUtf8("lineEditGrammarLTJava"));

        gridLayout_9->addWidget(lineEditGrammarLTJava, 5, 1, 1, 1);

        pushButtonGrammarLTJava = new QPushButton(groupBox_14);
        pushButtonGrammarLTJava->setObjectName(QString::fromUtf8("pushButtonGrammarLTJava"));
        sizePolicy6.setHeightForWidth(pushButtonGrammarLTJava->sizePolicy().hasHeightForWidth());
        pushButtonGrammarLTJava->setSizePolicy(sizePolicy6);
        pushButtonGrammarLTJava->setIcon(icon);

        gridLayout_9->addWidget(pushButtonGrammarLTJava, 5, 2, 1, 1);

        lineEditGrammarSpecialRules1 = new QLineEdit(groupBox_14);
        lineEditGrammarSpecialRules1->setObjectName(QString::fromUtf8("lineEditGrammarSpecialRules1"));
        lineEditGrammarSpecialRules1->setProperty("advancedOption", QVariant(true));

        gridLayout_9->addWidget(lineEditGrammarSpecialRules1, 6, 1, 1, 2);

        lineEditGrammarSpecialRules2 = new QLineEdit(groupBox_14);
        lineEditGrammarSpecialRules2->setObjectName(QString::fromUtf8("lineEditGrammarSpecialRules2"));
        lineEditGrammarSpecialRules2->setProperty("advancedOption", QVariant(true));

        gridLayout_9->addWidget(lineEditGrammarSpecialRules2, 7, 1, 1, 2);

        lineEditGrammarSpecialRules4 = new QLineEdit(groupBox_14);
        lineEditGrammarSpecialRules4->setObjectName(QString::fromUtf8("lineEditGrammarSpecialRules4"));
        lineEditGrammarSpecialRules4->setProperty("advancedOption", QVariant(true));

        gridLayout_9->addWidget(lineEditGrammarSpecialRules4, 9, 1, 1, 2);

        lineEditGrammarSpecialRules3 = new QLineEdit(groupBox_14);
        lineEditGrammarSpecialRules3->setObjectName(QString::fromUtf8("lineEditGrammarSpecialRules3"));
        lineEditGrammarSpecialRules3->setProperty("advancedOption", QVariant(true));

        gridLayout_9->addWidget(lineEditGrammarSpecialRules3, 8, 1, 1, 2);

        label_50 = new QLabel(groupBox_14);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setProperty("advancedOption", QVariant(true));

        gridLayout_9->addWidget(label_50, 7, 0, 1, 1);

        label_51 = new QLabel(groupBox_14);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setProperty("advancedOption", QVariant(true));

        gridLayout_9->addWidget(label_51, 6, 0, 1, 1);

        label_52 = new QLabel(groupBox_14);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setProperty("advancedOption", QVariant(true));

        gridLayout_9->addWidget(label_52, 8, 0, 1, 1);

        label_53 = new QLabel(groupBox_14);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setProperty("advancedOption", QVariant(true));

        gridLayout_9->addWidget(label_53, 9, 0, 1, 1);


        verticalLayout_9->addWidget(groupBox_14);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_4);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_6->addWidget(scrollArea_3);

        pagesWidget->addWidget(pageGrammar);
        pagePreview = new QWidget();
        pagePreview->setObjectName(QString::fromUtf8("pagePreview"));
        verticalLayout_3 = new QVBoxLayout(pagePreview);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_5 = new QGroupBox(pagePreview);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_31 = new QLabel(groupBox_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_5->addWidget(label_31, 0, 0, 1, 1);

        comboBoxDvi2PngMode = new QComboBox(groupBox_5);
        comboBoxDvi2PngMode->setObjectName(QString::fromUtf8("comboBoxDvi2PngMode"));
        comboBoxDvi2PngMode->setProperty("advancedOption", QVariant(false));

        gridLayout_5->addWidget(comboBoxDvi2PngMode, 0, 1, 1, 1);

        label_32 = new QLabel(groupBox_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setProperty("advancedOption", QVariant(false));

        gridLayout_5->addWidget(label_32, 1, 0, 1, 1);

        comboBoxPreviewMode = new QComboBox(groupBox_5);
        comboBoxPreviewMode->setObjectName(QString::fromUtf8("comboBoxPreviewMode"));
        comboBoxPreviewMode->setProperty("advancedOption", QVariant(false));

        gridLayout_5->addWidget(comboBoxPreviewMode, 1, 1, 1, 1);

        label_35 = new QLabel(groupBox_5);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_5->addWidget(label_35, 2, 0, 1, 1);

        comboBoxAutoPreview = new QComboBox(groupBox_5);
        comboBoxAutoPreview->setObjectName(QString::fromUtf8("comboBoxAutoPreview"));

        gridLayout_5->addWidget(comboBoxAutoPreview, 2, 1, 1, 1);

        label_36 = new QLabel(groupBox_5);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setProperty("advancedOption", QVariant(true));

        gridLayout_5->addWidget(label_36, 3, 0, 1, 1);

        spinBoxAutoPreviewDelay = new QSpinBox(groupBox_5);
        spinBoxAutoPreviewDelay->setObjectName(QString::fromUtf8("spinBoxAutoPreviewDelay"));
        spinBoxAutoPreviewDelay->setMinimum(40);
        spinBoxAutoPreviewDelay->setMaximum(3000);
        spinBoxAutoPreviewDelay->setProperty("advancedOption", QVariant(true));

        gridLayout_5->addWidget(spinBoxAutoPreviewDelay, 3, 1, 1, 1);

        checkBoxReplaceBeamer = new QCheckBox(groupBox_5);
        checkBoxReplaceBeamer->setObjectName(QString::fromUtf8("checkBoxReplaceBeamer"));
        checkBoxReplaceBeamer->setChecked(true);
        checkBoxReplaceBeamer->setProperty("advancedOption", QVariant(true));

        gridLayout_5->addWidget(checkBoxReplaceBeamer, 4, 1, 1, 1);

        checkBoxPrecompilePreamble = new QCheckBox(groupBox_5);
        checkBoxPrecompilePreamble->setObjectName(QString::fromUtf8("checkBoxPrecompilePreamble"));
        checkBoxPrecompilePreamble->setChecked(true);
        checkBoxPrecompilePreamble->setProperty("advancedOption", QVariant(true));

        gridLayout_5->addWidget(checkBoxPrecompilePreamble, 5, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_5);

        groupBox_8 = new QGroupBox(pagePreview);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_4 = new QGridLayout(groupBox_8);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_28 = new QLabel(groupBox_8);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_4->addWidget(label_28, 0, 0, 1, 1);

        comboBoxPreviewScale = new QComboBox(groupBox_8);
        comboBoxPreviewScale->setObjectName(QString::fromUtf8("comboBoxPreviewScale"));

        gridLayout_4->addWidget(comboBoxPreviewScale, 0, 1, 1, 1);

        label_29 = new QLabel(groupBox_8);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_4->addWidget(label_29, 1, 0, 1, 1);

        spinBoxPreviewScale = new QSpinBox(groupBox_8);
        spinBoxPreviewScale->setObjectName(QString::fromUtf8("spinBoxPreviewScale"));
        sizePolicy5.setHeightForWidth(spinBoxPreviewScale->sizePolicy().hasHeightForWidth());
        spinBoxPreviewScale->setSizePolicy(sizePolicy5);
        spinBoxPreviewScale->setMinimum(1);
        spinBoxPreviewScale->setMaximum(10000);

        gridLayout_4->addWidget(spinBoxPreviewScale, 1, 1, 1, 1);

        label_27 = new QLabel(groupBox_8);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_4->addWidget(label_27, 2, 0, 1, 1);

        spinBoxPreviewDPI = new QSpinBox(groupBox_8);
        spinBoxPreviewDPI->setObjectName(QString::fromUtf8("spinBoxPreviewDPI"));

        gridLayout_4->addWidget(spinBoxPreviewDPI, 2, 1, 1, 1);

        label_26 = new QLabel(groupBox_8);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_4->addWidget(label_26, 3, 0, 1, 1);

        comboBoxPreviewMagnifierShape = new QComboBox(groupBox_8);
        comboBoxPreviewMagnifierShape->setObjectName(QString::fromUtf8("comboBoxPreviewMagnifierShape"));

        gridLayout_4->addWidget(comboBoxPreviewMagnifierShape, 3, 1, 1, 1);

        label_25 = new QLabel(groupBox_8);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_4->addWidget(label_25, 4, 0, 1, 1);

        spinBoxPreviewMagnifierSize = new QSpinBox(groupBox_8);
        spinBoxPreviewMagnifierSize->setObjectName(QString::fromUtf8("spinBoxPreviewMagnifierSize"));
        spinBoxPreviewMagnifierSize->setMinimum(50);
        spinBoxPreviewMagnifierSize->setMaximum(10000);
        spinBoxPreviewMagnifierSize->setSingleStep(50);
        spinBoxPreviewMagnifierSize->setValue(300);

        gridLayout_4->addWidget(spinBoxPreviewMagnifierSize, 4, 1, 1, 1);

        checkBoxPreviewMagnifierBorder = new QCheckBox(groupBox_8);
        checkBoxPreviewMagnifierBorder->setObjectName(QString::fromUtf8("checkBoxPreviewMagnifierBorder"));

        gridLayout_4->addWidget(checkBoxPreviewMagnifierBorder, 5, 1, 1, 1);

        label_34 = new QLabel(groupBox_8);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setProperty("advancedOption", QVariant(true));

        gridLayout_4->addWidget(label_34, 6, 0, 1, 1);

        lineEditPreviewSyncFileMask = new QLineEdit(groupBox_8);
        lineEditPreviewSyncFileMask->setObjectName(QString::fromUtf8("lineEditPreviewSyncFileMask"));
        sizePolicy10.setHeightForWidth(lineEditPreviewSyncFileMask->sizePolicy().hasHeightForWidth());
        lineEditPreviewSyncFileMask->setSizePolicy(sizePolicy10);
        lineEditPreviewSyncFileMask->setProperty("advancedOption", QVariant(true));

        gridLayout_4->addWidget(lineEditPreviewSyncFileMask, 6, 1, 1, 1);

        label_18 = new QLabel(groupBox_8);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setProperty("advancedOption", QVariant(true));

        gridLayout_4->addWidget(label_18, 7, 0, 1, 1);

        spinBoxCacheSizeMB = new QSpinBox(groupBox_8);
        spinBoxCacheSizeMB->setObjectName(QString::fromUtf8("spinBoxCacheSizeMB"));
        spinBoxCacheSizeMB->setMinimum(100);
        spinBoxCacheSizeMB->setMaximum(1024);
        spinBoxCacheSizeMB->setSingleStep(100);
        spinBoxCacheSizeMB->setValue(512);
        spinBoxCacheSizeMB->setProperty("advancedOption", QVariant(true));

        gridLayout_4->addWidget(spinBoxCacheSizeMB, 7, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_8);

        verticalSpacer_2 = new QSpacerItem(20, 359, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        pagesWidget->addWidget(pagePreview);
        pageSVN = new QWidget();
        pageSVN->setObjectName(QString::fromUtf8("pageSVN"));
        vboxLayout7 = new QVBoxLayout(pageSVN);
        vboxLayout7->setContentsMargins(0, 0, 0, 0);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        cbAutoCheckin = new QCheckBox(pageSVN);
        cbAutoCheckin->setObjectName(QString::fromUtf8("cbAutoCheckin"));

        vboxLayout7->addWidget(cbAutoCheckin);

        cbSVNUndo = new QCheckBox(pageSVN);
        cbSVNUndo->setObjectName(QString::fromUtf8("cbSVNUndo"));

        vboxLayout7->addWidget(cbSVNUndo);

        cbKeywordSubstitution = new QCheckBox(pageSVN);
        cbKeywordSubstitution->setObjectName(QString::fromUtf8("cbKeywordSubstitution"));

        vboxLayout7->addWidget(cbKeywordSubstitution);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_21 = new QLabel(pageSVN);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        hboxLayout2->addWidget(label_21);

        sbDirSearchDepth = new QSpinBox(pageSVN);
        sbDirSearchDepth->setObjectName(QString::fromUtf8("sbDirSearchDepth"));
        sizePolicy4.setHeightForWidth(sbDirSearchDepth->sizePolicy().hasHeightForWidth());
        sbDirSearchDepth->setSizePolicy(sizePolicy4);

        hboxLayout2->addWidget(sbDirSearchDepth);


        vboxLayout7->addLayout(hboxLayout2);

        spacerItem4 = new QSpacerItem(20, 554, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout7->addItem(spacerItem4);

        pagesWidget->addWidget(pageSVN);

        gridLayout->addWidget(pagesWidget, 0, 1, 2, 5);

        checkBoxShowAdvancedOptions = new QCheckBox(ConfigDialog);
        checkBoxShowAdvancedOptions->setObjectName(QString::fromUtf8("checkBoxShowAdvancedOptions"));
        checkBoxShowAdvancedOptions->setChecked(true);

        gridLayout->addWidget(checkBoxShowAdvancedOptions, 2, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setSizeConstraint(QLayout::SetMinimumSize);
        spacerItem5 = new QSpacerItem(407, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem5);

        okButton = new QPushButton(ConfigDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        hboxLayout3->addWidget(okButton);

        cancelButton = new QPushButton(ConfigDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout3->addWidget(cancelButton);


        gridLayout->addLayout(hboxLayout3, 2, 5, 1, 1);

        QWidget::setTabOrder(contentsWidget, scrollArea);
        QWidget::setTabOrder(scrollArea, comboBoxInterfaceStyle);
        QWidget::setTabOrder(comboBoxInterfaceStyle, comboBoxInterfaceModernStyle);
        QWidget::setTabOrder(comboBoxInterfaceModernStyle, checkBoxUseTexmakerPalette);
        QWidget::setTabOrder(checkBoxUseTexmakerPalette, checkBoxUseSystemTheme);
        QWidget::setTabOrder(checkBoxUseSystemTheme, comboBoxInterfaceFont);
        QWidget::setTabOrder(comboBoxInterfaceFont, spinBoxInterfaceFontSize);
        QWidget::setTabOrder(spinBoxInterfaceFontSize, checkBoxTabbedLogView);
        QWidget::setTabOrder(checkBoxTabbedLogView, checkBoxTabbedStructureView);
        QWidget::setTabOrder(checkBoxTabbedStructureView, comboBoxLanguage);
        QWidget::setTabOrder(comboBoxLanguage, spinBoxMaxRecentFiles);
        QWidget::setTabOrder(spinBoxMaxRecentFiles, spinBoxMaxRecentProjects);
        QWidget::setTabOrder(spinBoxMaxRecentProjects, checkBoxParseBibTeX);
        QWidget::setTabOrder(checkBoxParseBibTeX, checkBoxParseMaster);
        QWidget::setTabOrder(checkBoxParseMaster, leDictDir);
        QWidget::setTabOrder(leDictDir, pushButtonDictDir);
        QWidget::setTabOrder(pushButtonDictDir, comboBoxSpellcheckLang);
        QWidget::setTabOrder(comboBoxSpellcheckLang, comboBoxThesaurusFileName);
        QWidget::setTabOrder(comboBoxThesaurusFileName, btSelectThesaurusFileName);
        QWidget::setTabOrder(btSelectThesaurusFileName, checkBoxShowAdvancedOptions);
        QWidget::setTabOrder(checkBoxShowAdvancedOptions, checkBoxRunAfterBibTeXChange);
        QWidget::setTabOrder(checkBoxRunAfterBibTeXChange, checkBoxShowLog);
        QWidget::setTabOrder(checkBoxShowLog, checkBoxSingleInstanceViewer);
        QWidget::setTabOrder(checkBoxSingleInstanceViewer, comboBoxShowStdout);
        QWidget::setTabOrder(comboBoxShowStdout, spinBoxRerunLatex);
        QWidget::setTabOrder(spinBoxRerunLatex, shortcutTree);
        QWidget::setTabOrder(shortcutTree, cb_CloseLogByEsc);
        QWidget::setTabOrder(cb_CloseLogByEsc, latexTree);
        QWidget::setTabOrder(latexTree, checkBoxShowAllMenus);
        QWidget::setTabOrder(checkBoxShowAllMenus, comboBoxToolbars);
        QWidget::setTabOrder(comboBoxToolbars, listCustomToolBar);
        QWidget::setTabOrder(listCustomToolBar, pbToToolbar);
        QWidget::setTabOrder(pbToToolbar, pbFromToolbar);
        QWidget::setTabOrder(pbFromToolbar, comboBoxActions);
        QWidget::setTabOrder(comboBoxActions, treePossibleToolbarActions);
        QWidget::setTabOrder(treePossibleToolbarActions, comboBoxFont);
        QWidget::setTabOrder(comboBoxFont, spinBoxSize);
        QWidget::setTabOrder(spinBoxSize, comboBoxEncoding);
        QWidget::setTabOrder(comboBoxEncoding, checkBoxAutoDetectOnLoad);
        QWidget::setTabOrder(checkBoxAutoDetectOnLoad, checkBoxFolding);
        QWidget::setTabOrder(checkBoxFolding, comboBoxAutoIndent);
        QWidget::setTabOrder(comboBoxAutoIndent, comboBoxReplaceQuotes);
        QWidget::setTabOrder(comboBoxReplaceQuotes, checkBoxRealTimeCheck);
        QWidget::setTabOrder(checkBoxRealTimeCheck, checkBoxInlineSpellCheck);
        QWidget::setTabOrder(checkBoxInlineSpellCheck, checkBoxInlineGrammarCheck);
        QWidget::setTabOrder(checkBoxInlineGrammarCheck, checkBoxInlineCitationCheck);
        QWidget::setTabOrder(checkBoxInlineCitationCheck, checkBoxInlineReferenceCheck);
        QWidget::setTabOrder(checkBoxInlineReferenceCheck, checkBoxInlineSyntaxCheck);
        QWidget::setTabOrder(checkBoxInlineSyntaxCheck, checkBoxLineState);
        QWidget::setTabOrder(checkBoxLineState, checkBoxCloseSearchReplaceTogether);
        QWidget::setTabOrder(checkBoxCloseSearchReplaceTogether, checkBoxUseLineForSearch);
        QWidget::setTabOrder(checkBoxUseLineForSearch, checkBoxSearchOnlyInSelection);
        QWidget::setTabOrder(checkBoxSearchOnlyInSelection, checkBoxAutoCompleteParens);
        QWidget::setTabOrder(checkBoxAutoCompleteParens, checkBoxMouseWheelZoom);
        QWidget::setTabOrder(checkBoxMouseWheelZoom, checkBoxToolTipHelp2);
        QWidget::setTabOrder(checkBoxToolTipHelp2, comboBoxLineWrap);
        QWidget::setTabOrder(comboBoxLineWrap, spinBoxWrapLineWidth);
        QWidget::setTabOrder(spinBoxWrapLineWidth, comboBoxAutoSave);
        QWidget::setTabOrder(comboBoxAutoSave, checkBoxHackDisableAccentWorkaround);
        QWidget::setTabOrder(checkBoxHackDisableAccentWorkaround, checkBoxHackAutoRendering);
        QWidget::setTabOrder(checkBoxHackAutoRendering, checkBoxHackDisableFixedPitch);
        QWidget::setTabOrder(checkBoxHackDisableFixedPitch, checkBoxHackDisableWidthCache);
        QWidget::setTabOrder(checkBoxHackDisableWidthCache, checkBoxHackDisableLineCache);
        QWidget::setTabOrder(checkBoxHackDisableLineCache, twHighlighEnvirons);
        QWidget::setTabOrder(twHighlighEnvirons, pbAddLine);
        QWidget::setTabOrder(pbAddLine, pbRemoveLine);
        QWidget::setTabOrder(pbRemoveLine, twCustomSyntax);
        QWidget::setTabOrder(twCustomSyntax, pbAddSyntaxLine);
        QWidget::setTabOrder(pbAddSyntaxLine, pbRemoveSyntaxLine);
        QWidget::setTabOrder(pbRemoveSyntaxLine, checkBoxCaseSensitiveInFirstCharacter);
        QWidget::setTabOrder(checkBoxCaseSensitiveInFirstCharacter, spinBoxTabRelFontSize);
        QWidget::setTabOrder(spinBoxTabRelFontSize, completeListWidget);
        QWidget::setTabOrder(completeListWidget, checkBoxGrammarRepetitionCheck);
        QWidget::setTabOrder(checkBoxGrammarRepetitionCheck, spinBoxGrammarRepetitionDistance);
        QWidget::setTabOrder(spinBoxGrammarRepetitionDistance, spinBoxGrammarLongRangeRepetition);
        QWidget::setTabOrder(spinBoxGrammarLongRangeRepetition, spinBoxGrammarLongRangeRepetitionMinLength);
        QWidget::setTabOrder(spinBoxGrammarLongRangeRepetitionMinLength, checkBoxGrammarBadWordCheck);
        QWidget::setTabOrder(checkBoxGrammarBadWordCheck, lineEditGrammarWordlists);
        QWidget::setTabOrder(lineEditGrammarWordlists, pushButtonGrammarWordlists);
        QWidget::setTabOrder(pushButtonGrammarWordlists, lineEditGrammarLTUrl);
        QWidget::setTabOrder(lineEditGrammarLTUrl, lineEditGrammarLTIgnoredRules);
        QWidget::setTabOrder(lineEditGrammarLTIgnoredRules, checkBoxGrammarLTAutorun);
        QWidget::setTabOrder(checkBoxGrammarLTAutorun, lineEditGrammarLTPath);
        QWidget::setTabOrder(lineEditGrammarLTPath, pushButtonGrammarLTPath);
        QWidget::setTabOrder(pushButtonGrammarLTPath, lineEditGrammarLTJava);
        QWidget::setTabOrder(lineEditGrammarLTJava, pushButtonGrammarLTJava);
        QWidget::setTabOrder(pushButtonGrammarLTJava, lineEditGrammarSpecialRules1);
        QWidget::setTabOrder(lineEditGrammarSpecialRules1, lineEditGrammarSpecialRules2);
        QWidget::setTabOrder(lineEditGrammarSpecialRules2, lineEditGrammarSpecialRules3);
        QWidget::setTabOrder(lineEditGrammarSpecialRules3, lineEditGrammarSpecialRules4);
        QWidget::setTabOrder(lineEditGrammarSpecialRules4, comboBoxDvi2PngMode);
        QWidget::setTabOrder(comboBoxDvi2PngMode, comboBoxPreviewMode);
        QWidget::setTabOrder(comboBoxPreviewMode, comboBoxAutoPreview);
        QWidget::setTabOrder(comboBoxAutoPreview, spinBoxAutoPreviewDelay);
        QWidget::setTabOrder(spinBoxAutoPreviewDelay, checkBoxReplaceBeamer);
        QWidget::setTabOrder(checkBoxReplaceBeamer, checkBoxPrecompilePreamble);
        QWidget::setTabOrder(checkBoxPrecompilePreamble, comboBoxPreviewScale);
        QWidget::setTabOrder(comboBoxPreviewScale, spinBoxPreviewScale);
        QWidget::setTabOrder(spinBoxPreviewScale, spinBoxPreviewDPI);
        QWidget::setTabOrder(spinBoxPreviewDPI, comboBoxPreviewMagnifierShape);
        QWidget::setTabOrder(comboBoxPreviewMagnifierShape, spinBoxPreviewMagnifierSize);
        QWidget::setTabOrder(spinBoxPreviewMagnifierSize, checkBoxPreviewMagnifierBorder);
        QWidget::setTabOrder(checkBoxPreviewMagnifierBorder, lineEditPreviewSyncFileMask);
        QWidget::setTabOrder(lineEditPreviewSyncFileMask, cbAutoCheckin);
        QWidget::setTabOrder(cbAutoCheckin, cbSVNUndo);
        QWidget::setTabOrder(cbSVNUndo, cbKeywordSubstitution);
        QWidget::setTabOrder(cbKeywordSubstitution, sbDirSearchDepth);
        QWidget::setTabOrder(sbDirSearchDepth, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(ConfigDialog);
        QObject::connect(okButton, SIGNAL(clicked()), ConfigDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), ConfigDialog, SLOT(reject()));
        QObject::connect(checkBoxCaseSensitive, SIGNAL(toggled(bool)), checkBoxCaseSensitiveInFirstCharacter, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxRealTimeCheck, SIGNAL(toggled(bool)), checkBoxInlineSpellCheck, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxRealTimeCheck, SIGNAL(toggled(bool)), checkBoxInlineCitationCheck, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxRealTimeCheck, SIGNAL(toggled(bool)), checkBoxInlineReferenceCheck, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxRealTimeCheck, SIGNAL(toggled(bool)), checkBoxInlineSyntaxCheck, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxHackAutoRendering, SIGNAL(toggled(bool)), checkBoxHackDisableFixedPitch, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxHackAutoRendering, SIGNAL(toggled(bool)), checkBoxHackDisableWidthCache, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxHackAutoRendering, SIGNAL(toggled(bool)), checkBoxHackDisableLineCache, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxHackAutoRendering, SIGNAL(toggled(bool)), comboBoxHackRenderMode, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxRealTimeCheck, SIGNAL(toggled(bool)), checkBoxInlineGrammarCheck, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxAutoUpdateCheck, SIGNAL(toggled(bool)), spinBoxAutoUpdateCheckIntervalDays, SLOT(setEnabled(bool)));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), scrollAreaPaths, SLOT(setVisible(bool)));

        contentsWidget->setCurrentRow(-1);
        pagesWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QApplication::translate("ConfigDialog", "Configure TeXstudio", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("ConfigDialog", "Appearance", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ConfigDialog", "Style:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ConfigDialog", "Font:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ConfigDialog", "Font Size:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ConfigDialog", "Language:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ConfigDialog", "Color Scheme:", 0, QApplication::UnicodeUTF8));
        comboBoxInterfaceModernStyle->clear();
        comboBoxInterfaceModernStyle->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "Classic", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Modern", 0, QApplication::UnicodeUTF8)
        );
        checkBoxTabbedStructureView->setText(QApplication::translate("ConfigDialog", "Tabbed Structure/Symbol View", 0, QApplication::UnicodeUTF8));
        checkBoxTabbedLogView->setText(QApplication::translate("ConfigDialog", "Tabbed Log Viewer", 0, QApplication::UnicodeUTF8));
        checkBoxUseTexmakerPalette->setText(QApplication::translate("ConfigDialog", "Ignore Most System Colors", 0, QApplication::UnicodeUTF8));
        checkBoxUseSystemTheme->setText(QApplication::translate("ConfigDialog", "Use System Theme Icons", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("ConfigDialog", "Files", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ConfigDialog", "Max. Recent Documents:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ConfigDialog", "Max. Recent Master Documents:", 0, QApplication::UnicodeUTF8));
        checkBoxParseBibTeX->setText(QApplication::translate("ConfigDialog", "Parse BibTeX", 0, QApplication::UnicodeUTF8));
        checkBoxParseMaster->setText(QApplication::translate("ConfigDialog", "Always Show Structure of Master Document", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ConfigDialog", "Dictionaries", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ConfigDialog", "Thesaurus Database:", 0, QApplication::UnicodeUTF8));
        btSelectThesaurusFileName->setText(QString());
        comboBoxThesaurusFileName->setProperty("dirFilter", QVariant(QApplication::translate("ConfigDialog", "*.dat", 0, QApplication::UnicodeUTF8)));
        label_42->setText(QApplication::translate("ConfigDialog", "Spelling Dictionary Directory:", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("ConfigDialog", "Default Language:", 0, QApplication::UnicodeUTF8));
        pushButtonDictDir->setText(QString());
        labelGetDic->setText(QApplication::translate("ConfigDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_Update->setTitle(QApplication::translate("ConfigDialog", "Update", 0, QApplication::UnicodeUTF8));
        checkBoxAutoUpdateCheck->setText(QApplication::translate("ConfigDialog", "Automatically check every", 0, QApplication::UnicodeUTF8));
        spinBoxAutoUpdateCheckIntervalDays->setSuffix(QApplication::translate("ConfigDialog", " days", 0, QApplication::UnicodeUTF8));
        label_56->setText(QApplication::translate("ConfigDialog", "Last Checked:", 0, QApplication::UnicodeUTF8));
        pushButtonUpdateCheckNow->setText(QApplication::translate("ConfigDialog", "Check Now", 0, QApplication::UnicodeUTF8));
        groupBoxCommands->setTitle(QApplication::translate("ConfigDialog", "Commands (%: filename without extension - @: line number - ?: extended filename options)", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ConfigDialog", "<span style=\" font-weight:600; text-decoration: underline;\">Special chars</span>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ConfigDialog", "<b>%</b>: filename without extension; <b>@</b>: line number; <b>?[selector][terminating char]</b>: formated filename\n"
"", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("ConfigDialog", "<i>Selectors:</i> a combination of <b>a</b>: absolute path, <!--<i>r</i>: relative path, --><b>m</b>: basefile name without extension,<b>e</b>: extension, <b>r</b>: path relative to master, <b>*</b>: all files matching the following pattern<br />\n"
"prepend <b>c:</b> for current file instead of master file (include the colon)<br />\n"
"<i>Terminating chars:</i> <b>)</b>: ends selector. The following chars end the selector and have additional meaning<br />\n"
"<b>\"</b>: enclose in double-quotes, <b>.</b> (dot) add a point at the end, (space): add a space at the end<br />\n"
"<i>Examples:</i> <b>?ame\"</b>: complete absolute filename enclosed in double-quotes, <b>?e)</b> just the extension without leading dot (e.g. tex), <br />\n"
"<b>?m\"</b> double-quoted filename without extension (identical to <b>%</b>), <b>?me</b> filename with extension (e.g. example.tex), <b>?*.aux</b>: all .aux files in the current directory", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ConfigDialog", "<b>%%</b>, <b>@@</b> and <b>?? </b> become: %, @ or ?\n"
"", 0, QApplication::UnicodeUTF8));
        groupBoxMetaCommands->setTitle(QApplication::translate("ConfigDialog", "Meta Commands", 0, QApplication::UnicodeUTF8));
        groupBoxUserCommands->setTitle(QApplication::translate("ConfigDialog", "User Commands", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("ConfigDialog", "Build Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxRunAfterBibTeXChange->setToolTip(QApplication::translate("ConfigDialog", "Runs txs:///recompile-bibliography, if bib-files were changed.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxRunAfterBibTeXChange->setText(QApplication::translate("ConfigDialog", "Check and update bibliography before compiling", 0, QApplication::UnicodeUTF8));
        checkBoxShowLog->setText(QApplication::translate("ConfigDialog", "Show log after compiling if there are errors", 0, QApplication::UnicodeUTF8));
        checkBoxSingleInstanceViewer->setText(QApplication::translate("ConfigDialog", "Don't launch a new instance of the viewer if the dvi/ps/pdf file is already opened", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("ConfigDialog", "Show stdout:", 0, QApplication::UnicodeUTF8));
        comboBoxShowStdout->clear();
        comboBoxShowStdout->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "Never", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Only For User Commands", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Always (If not redirected > /dev/null)", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        label_38->setToolTip(QApplication::translate("ConfigDialog", "Some LaTeX constructs (e.g. references) need multiple compilation cycles until they are displayed correctly.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_38->setText(QApplication::translate("ConfigDialog", "Maximum Compile Repetitions:", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("ConfigDialog", "Additional Search Paths:", 0, QApplication::UnicodeUTF8));
        pushButtonPathLog->setText(QString());
        label_58->setText(QApplication::translate("ConfigDialog", "PDF Viewer", 0, QApplication::UnicodeUTF8));
        pushButtonPathPdf->setText(QString());
        label_57->setText(QApplication::translate("ConfigDialog", "Log File", 0, QApplication::UnicodeUTF8));
        pushButtonPathCommands->setText(QString());
        label_59->setText(QApplication::translate("ConfigDialog", "Commands ($PATH)", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ConfigDialog", "Shortcuts", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = shortcutTree->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("ConfigDialog", "4", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("ConfigDialog", "3", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("ConfigDialog", "2", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("ConfigDialog", "1", 0, QApplication::UnicodeUTF8));
        cb_CloseLogByEsc->setText(QApplication::translate("ConfigDialog", "Close Log-View with Esc-Key", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ConfigDialog", "Menus", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = latexTree->headerItem();
        ___qtreewidgetitem1->setText(2, QApplication::translate("ConfigDialog", "Slot", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("ConfigDialog", "Command", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("ConfigDialog", "Name", 0, QApplication::UnicodeUTF8));
        checkBoxShowAllMenus->setText(QApplication::translate("ConfigDialog", "Show All", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("ConfigDialog", "Toolbar Customization", 0, QApplication::UnicodeUTF8));
        pbToToolbar->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem2 = treePossibleToolbarActions->headerItem();
        ___qtreewidgetitem2->setText(0, QApplication::translate("ConfigDialog", "1", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("ConfigDialog", "Editor", 0, QApplication::UnicodeUTF8));
        labelFamily->setText(QApplication::translate("ConfigDialog", "Font Family:", 0, QApplication::UnicodeUTF8));
        labelEncoding->setText(QApplication::translate("ConfigDialog", "Default Font Encoding:", 0, QApplication::UnicodeUTF8));
        comboBoxAutoIndent->clear();
        comboBoxAutoIndent->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "Ignore Indentation", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Keep Indentation", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Indent and Unindent Automatically", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Keep Indentation With Spaces Only", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Indent and Unindent Automatically With Spaces Only", 0, QApplication::UnicodeUTF8)
        );
        labelSize->setText(QApplication::translate("ConfigDialog", "Font Size:", 0, QApplication::UnicodeUTF8));
        checkBoxFolding->setText(QApplication::translate("ConfigDialog", "Folding", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("ConfigDialog", "Indentation Mode:", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("ConfigDialog", "Replace Double Quotes:", 0, QApplication::UnicodeUTF8));
        comboBoxReplaceQuotes->clear();
        comboBoxReplaceQuotes->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "No Replacement", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "English Quotes:  `` ''", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "French Quotes:  \"< \">", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "German Quotes:  \"` \"'", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "French Quotes (babel): \\og \\fg{}", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Reverse French Quotes: \"> \"<", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Package csquotes: \\enquote{  }", 0, QApplication::UnicodeUTF8)
        );
        groupBoxInlineChecking->setTitle(QString());
        checkBoxInlineSpellCheck->setText(QApplication::translate("ConfigDialog", "Spelling", 0, QApplication::UnicodeUTF8));
        checkBoxInlineGrammarCheck->setText(QApplication::translate("ConfigDialog", "Grammar", 0, QApplication::UnicodeUTF8));
        checkBoxInlineCitationCheck->setText(QApplication::translate("ConfigDialog", "Citations", 0, QApplication::UnicodeUTF8));
        checkBoxInlineReferenceCheck->setText(QApplication::translate("ConfigDialog", "References", 0, QApplication::UnicodeUTF8));
        checkBoxInlineSyntaxCheck->setText(QApplication::translate("ConfigDialog", "Syntax", 0, QApplication::UnicodeUTF8));
        checkBoxRealTimeCheck->setText(QApplication::translate("ConfigDialog", "Inline Checking:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxAutoDetectOnLoad->setToolTip(QApplication::translate("ConfigDialog", "can only decide between utf16/utf-8 and ISO 8859-1 !", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxAutoDetectOnLoad->setText(QApplication::translate("ConfigDialog", "Auto Detect Encoding of Loaded Files", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ConfigDialog", "Line Spacing:", 0, QApplication::UnicodeUTF8));
        spinBoxLineSpacingPercent->setSuffix(QApplication::translate("ConfigDialog", "%", 0, QApplication::UnicodeUTF8));
        checkBoxShowOnlyMonospacedFonts->setText(QApplication::translate("ConfigDialog", "Show Only Monospaced Fonts", 0, QApplication::UnicodeUTF8));
        checkBoxAutoLoad->setText(QApplication::translate("ConfigDialog", "Automatically load included files", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("ConfigDialog", "Appearance", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("ConfigDialog", "Show Line Numbers:", 0, QApplication::UnicodeUTF8));
        comboboxLineNumbers->clear();
        comboboxLineNumbers->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "No Line Numbers", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "All Line Numbers", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Only Important Line Numbers", 0, QApplication::UnicodeUTF8)
        );
        checkBoxState->setText(QApplication::translate("ConfigDialog", "Show State Panel", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ConfigDialog", "Tab Width:", 0, QApplication::UnicodeUTF8));
        checkBoxShowWhitespace->setText(QApplication::translate("ConfigDialog", "Show Whitespace", 0, QApplication::UnicodeUTF8));
        checkBoxLineState->setText(QApplication::translate("ConfigDialog", "Show Line Change State", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxBoldCursor->setToolTip(QApplication::translate("ConfigDialog", "Draw cursor as a thick line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxBoldCursor->setText(QApplication::translate("ConfigDialog", "Bold Cursor", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("ConfigDialog", "Search Panel", 0, QApplication::UnicodeUTF8));
        checkBoxCloseSearchReplaceTogether->setText(QApplication::translate("ConfigDialog", "Close search and replace panel together", 0, QApplication::UnicodeUTF8));
        checkBoxUseLineForSearch->setText(QApplication::translate("ConfigDialog", "Use single line selection as Search Word", 0, QApplication::UnicodeUTF8));
        checkBoxSearchOnlyInSelection->setText(QApplication::translate("ConfigDialog", "Restrict search scope to an existing selection", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("ConfigDialog", "Special options", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ConfigDialog", "Auto Save All Files:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ConfigDialog", "Maximal Characters:", 0, QApplication::UnicodeUTF8));
        checkBoxAutoCompleteParens->setText(QApplication::translate("ConfigDialog", "Auto Complete Parentheses", 0, QApplication::UnicodeUTF8));
        checkBoxMouseWheelZoom->setText(QApplication::translate("ConfigDialog", "Mouse Wheel Zoom", 0, QApplication::UnicodeUTF8));
        comboBoxAutoSave->clear();
        comboBoxAutoSave->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "Never", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "5 minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "10 minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "20 minutes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "60 minutes", 0, QApplication::UnicodeUTF8)
        );
        comboBoxLineWrap->clear();
        comboBoxLineWrap->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "No Line Wrap", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Soft Line Wrap at Window Edge", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Soft Line Wrap after max. Characters", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Hard Line Wrap after max. Characters", 0, QApplication::UnicodeUTF8)
        );
        label_41->setText(QApplication::translate("ConfigDialog", "Line Wrapping:", 0, QApplication::UnicodeUTF8));
        checkBoxToolTipHelp2->setText(QApplication::translate("ConfigDialog", "Show help as tooltip on text in editor", 0, QApplication::UnicodeUTF8));
        checkBoxToolTipPreview->setText(QApplication::translate("ConfigDialog", "Show preview as tooltip on formulas in editor", 0, QApplication::UnicodeUTF8));
        gbTableAutoformat->setTitle(QApplication::translate("ConfigDialog", "Table Autoformating", 0, QApplication::UnicodeUTF8));
        label_60->setText(QApplication::translate("ConfigDialog", "Special Commands:", 0, QApplication::UnicodeUTF8));
        label_61->setText(QApplication::translate("ConfigDialog", "Special Commands Position:", 0, QApplication::UnicodeUTF8));
        cbTableFormatingSpecialCommandPos->clear();
        cbTableFormatingSpecialCommandPos->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "Behind Line Break", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Separate Line (No Indent)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Separate Line (Indented to First Column)", 0, QApplication::UnicodeUTF8)
        );
        cbTableFormatingOneLinePerCell->setText(QApplication::translate("ConfigDialog", "One Line Per Cell", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("ConfigDialog", "Hacks/Workarounds", 0, QApplication::UnicodeUTF8));
        checkBoxHackDisableAccentWorkaround->setText(QApplication::translate("ConfigDialog", "Disable work-around on accent typing (Mac OS X only)", 0, QApplication::UnicodeUTF8));
        checkBoxHackAutoRendering->setText(QApplication::translate("ConfigDialog", "Try to automatically choose best display options", 0, QApplication::UnicodeUTF8));
        checkBoxHackDisableFixedPitch->setText(QApplication::translate("ConfigDialog", "Disable fixed pitch mode", 0, QApplication::UnicodeUTF8));
        checkBoxHackDisableWidthCache->setText(QApplication::translate("ConfigDialog", "Disable cache of character width", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxHackDisableLineCache->setToolTip(QApplication::translate("ConfigDialog", "If the cache of rendered lines is enabled, rendered lines are stored in a cache, so they do not have to be rendered again. Leading to a speed improvement (especially on Mac), at the cost of a higher memory usage.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxHackDisableLineCache->setText(QApplication::translate("ConfigDialog", "Disable cache of rendered lines", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ConfigDialog", "Render Mode:", 0, QApplication::UnicodeUTF8));
        comboBoxHackRenderMode->clear();
        comboBoxHackRenderMode->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "QCE (recommended)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Qt", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Single Letter", 0, QApplication::UnicodeUTF8)
        );
        formatConfigBox->setTitle(QApplication::translate("ConfigDialog", "Formats", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = twHighlighEnvirons->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ConfigDialog", "Custom Environment", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = twHighlighEnvirons->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ConfigDialog", "Type of Environment", 0, QApplication::UnicodeUTF8));
        pbAddLine->setText(QApplication::translate("ConfigDialog", "Add Line", 0, QApplication::UnicodeUTF8));
        pbRemoveLine->setText(QApplication::translate("ConfigDialog", "Remove Line", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = twCustomSyntax->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("ConfigDialog", "Additional Commands", 0, QApplication::UnicodeUTF8));
        pbAddSyntaxLine->setText(QApplication::translate("ConfigDialog", "Add Line", 0, QApplication::UnicodeUTF8));
        pbRemoveSyntaxLine->setText(QApplication::translate("ConfigDialog", "Remove Line", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ConfigDialog", "Completion", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxCompletion->setToolTip(QApplication::translate("ConfigDialog", "Starts the completer as soon as '\\' is typed. Alternatively the completer can always be started manually by Ctrl+Space.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxCompletion->setText(QApplication::translate("ConfigDialog", "Automatically start completer when typing LaTeX-Commands", 0, QApplication::UnicodeUTF8));
        checkBoxCaseSensitive->setText(QApplication::translate("ConfigDialog", "Case Sensitive", 0, QApplication::UnicodeUTF8));
        checkBoxCaseSensitiveInFirstCharacter->setText(QApplication::translate("ConfigDialog", "In First Character", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxCompletePrefix->setToolTip(QApplication::translate("ConfigDialog", "If all completer suggestions have the next characters in common, you can use <Tab> to automatically insert them.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxCompletePrefix->setText(QApplication::translate("ConfigDialog", "Auto Complete Common Prefix", 0, QApplication::UnicodeUTF8));
        checkBoxEOWCompletes->setText(QApplication::translate("ConfigDialog", "Complete selected text when non-word character is pressed", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ConfigDialog", "Preferred Commands Set:", 0, QApplication::UnicodeUTF8));
        comboBoxPreferedTab->clear();
        comboBoxPreferedTab->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "Typical", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Most Used", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "All", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        checkBoxAutoReplaceCommands->setToolTip(QApplication::translate("ConfigDialog", "Allows in-place substitution of commands. Example:<br>\n"
"<code>\\textbf{foo}</code>\n"
"<ul>\n"
"<li>Put cursor behind \"text\"</li>\n"
"<li>Start completer by Ctrl+Space</li>\n"
"<li>Select <code>\\textrm</code><li>\n"
"<li>The result is <code>\\textrm{foo}</code><li>\n"
"</ul>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxAutoReplaceCommands->setText(QApplication::translate("ConfigDialog", "Auto Replace Latex-Commands", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxToolTipHelp->setToolTip(QApplication::translate("ConfigDialog", "Shows a tooltip with a description of the selected completer command", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxToolTipHelp->setText(QApplication::translate("ConfigDialog", "ToolTip-Help", 0, QApplication::UnicodeUTF8));
        checkBoxUsePlaceholders->setText(QApplication::translate("ConfigDialog", "Use Placeholders", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_40->setToolTip(QApplication::translate("ConfigDialog", "Size of the tab bar at the bottom or top of the completer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_40->setText(QApplication::translate("ConfigDialog", "Tab Bar Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBoxTabRelFontSize->setToolTip(QApplication::translate("ConfigDialog", "Size of the command set tabs at the bottom or top of the completer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("ConfigDialog", "Use following completion files:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        completeListWidget->setToolTip(QApplication::translate("ConfigDialog", "TXS tries to automatically load completion files for packages if a\n"
"\\usepackage{} command is found. These automatically included files\n"
"are not shown here. Checking additional packages here is usually not\n"
"necessary. However if automatic detection fails or you want to include\n"
"specfic user completion files, you can enforce their usage by activating\n"
"them here.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_13->setTitle(QApplication::translate("ConfigDialog", "Internal", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxGrammarRepetitionCheck->setToolTip(QApplication::translate("ConfigDialog", "Words repeated within a paragraph will be highlighted.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxGrammarRepetitionCheck->setText(QApplication::translate("ConfigDialog", "Check for Word Repetitions", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("ConfigDialog", "Words Between Repetitions:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBoxGrammarRepetitionDistance->setToolTip(QApplication::translate("ConfigDialog", "Equal words are marked as repetition if there are no more than this number of words between them.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spinBoxGrammarLongRangeRepetition->setToolTip(QApplication::translate("ConfigDialog", "Equal, longer words are marked as long range repetition if there are no more than this number of words between them.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        spinBoxGrammarLongRangeRepetitionMinLength->setToolTip(QApplication::translate("ConfigDialog", "Only words with have this length are checked for long range repetitions.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_54->setText(QApplication::translate("ConfigDialog", "Long Range Repetitions:", 0, QApplication::UnicodeUTF8));
        label_55->setText(QApplication::translate("ConfigDialog", "Min Length of Words with Long Repetition:", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("ConfigDialog", "Wordlist Directory:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBoxGrammarBadWordCheck->setToolTip(QApplication::translate("ConfigDialog", "Certain informal or weak words will be highlighted.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxGrammarBadWordCheck->setText(QApplication::translate("ConfigDialog", "Check for Bad Words", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEditGrammarWordlists->setToolTip(QApplication::translate("ConfigDialog", "Directory containing the lists which words are \"bad\" or may be repeated.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButtonGrammarWordlists->setText(QString());
        groupBox_14->setTitle(QApplication::translate("ConfigDialog", "LanguageTool", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("ConfigDialog", "Server URL: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEditGrammarLTUrl->setToolTip(QApplication::translate("ConfigDialog", "Url to connect to LanguageTool. ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBoxGrammarLTAutorun->setText(QApplication::translate("ConfigDialog", "Start LanguageTool if not running", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("ConfigDialog", "LT Path:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEditGrammarLTPath->setToolTip(QApplication::translate("ConfigDialog", "Path containing the LanguageTool java archive.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButtonGrammarLTPath->setText(QString());
        label_46->setText(QApplication::translate("ConfigDialog", "Ignored Rules:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEditGrammarLTIgnoredRules->setToolTip(QApplication::translate("ConfigDialog", "Comma separated list of LanguageTool rules which will not be highlighted as errors.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_49->setText(QApplication::translate("ConfigDialog", "Java:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEditGrammarLTJava->setToolTip(QApplication::translate("ConfigDialog", "Java executable, used to start LanguageTool, if it is not running.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButtonGrammarLTJava->setText(QString());
#ifndef QT_NO_TOOLTIP
        lineEditGrammarSpecialRules1->setToolTip(QApplication::translate("ConfigDialog", "Comma separated list of LanguageTool rules which will highlighted in a special format.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEditGrammarSpecialRules2->setToolTip(QApplication::translate("ConfigDialog", "Comma separated list of LanguageTool rules which will highlighted in a special format.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEditGrammarSpecialRules4->setToolTip(QApplication::translate("ConfigDialog", "Comma separated list of LanguageTool rules which will highlighted in a special format.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEditGrammarSpecialRules3->setToolTip(QApplication::translate("ConfigDialog", "Comma separated list of LanguageTool rules which will highlighted in a special format.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_50->setText(QApplication::translate("ConfigDialog", "Special Rules 2:", 0, QApplication::UnicodeUTF8));
        label_51->setText(QApplication::translate("ConfigDialog", "Special Rules 1:", 0, QApplication::UnicodeUTF8));
        label_52->setText(QApplication::translate("ConfigDialog", "Special Rules 3:", 0, QApplication::UnicodeUTF8));
        label_53->setText(QApplication::translate("ConfigDialog", "Special Rules 4:", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("ConfigDialog", "Segment Preview", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("ConfigDialog", "Command:", 0, QApplication::UnicodeUTF8));
        comboBoxDvi2PngMode->clear();
        comboBoxDvi2PngMode->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "Preview with dvipng", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Preview with dvipng --follow (parallel)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Preview with dvips/ghostscript", 0, QApplication::UnicodeUTF8)
        );
        label_32->setText(QApplication::translate("ConfigDialog", "Display Mode:", 0, QApplication::UnicodeUTF8));
        comboBoxPreviewMode->clear();
        comboBoxPreviewMode->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "Show preview as tooltip if panel is hidden", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Always show preview in preview panel", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Always show preview as tool tip", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Always show both", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Inline", 0, QApplication::UnicodeUTF8)
        );
        label_35->setText(QApplication::translate("ConfigDialog", "Auto Preview:", 0, QApplication::UnicodeUTF8));
        comboBoxAutoPreview->clear();
        comboBoxAutoPreview->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "Never", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Previously previewed text", 0, QApplication::UnicodeUTF8)
        );
        label_36->setText(QApplication::translate("ConfigDialog", "Auto Preview Delay:", 0, QApplication::UnicodeUTF8));
        checkBoxReplaceBeamer->setText(QApplication::translate("ConfigDialog", "Replace beamer class by article", 0, QApplication::UnicodeUTF8));
        checkBoxPrecompilePreamble->setText(QApplication::translate("ConfigDialog", "Precompile Preamble", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("ConfigDialog", "Full Page PDF Preview", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("ConfigDialog", "Scale Option:", 0, QApplication::UnicodeUTF8));
        comboBoxPreviewScale->clear();
        comboBoxPreviewScale->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "Original Size", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Fit to Window Width", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Fit to Window Size", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Scaled Size", 0, QApplication::UnicodeUTF8)
        );
        label_29->setText(QApplication::translate("ConfigDialog", "Scaling:", 0, QApplication::UnicodeUTF8));
        spinBoxPreviewScale->setSuffix(QApplication::translate("ConfigDialog", "%", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("ConfigDialog", "Screen Resolution:", 0, QApplication::UnicodeUTF8));
        spinBoxPreviewDPI->setSuffix(QApplication::translate("ConfigDialog", "dpi", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("ConfigDialog", "Magnifier Shape:", 0, QApplication::UnicodeUTF8));
        comboBoxPreviewMagnifierShape->clear();
        comboBoxPreviewMagnifierShape->insertItems(0, QStringList()
         << QApplication::translate("ConfigDialog", "Square", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ConfigDialog", "Circle", 0, QApplication::UnicodeUTF8)
        );
        label_25->setText(QApplication::translate("ConfigDialog", "Magnifier Size:", 0, QApplication::UnicodeUTF8));
        spinBoxPreviewMagnifierSize->setSuffix(QApplication::translate("ConfigDialog", "px", 0, QApplication::UnicodeUTF8));
        spinBoxPreviewMagnifierSize->setPrefix(QString());
        checkBoxPreviewMagnifierBorder->setText(QApplication::translate("ConfigDialog", "Border", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("ConfigDialog", "Synchronized Files Types:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("ConfigDialog", "Cache Size:", 0, QApplication::UnicodeUTF8));
        spinBoxCacheSizeMB->setSuffix(QApplication::translate("ConfigDialog", " MB", 0, QApplication::UnicodeUTF8));
        cbAutoCheckin->setText(QApplication::translate("ConfigDialog", "Automatically check in after save", 0, QApplication::UnicodeUTF8));
        cbSVNUndo->setText(QApplication::translate("ConfigDialog", "Use SVN revisions to undo before last saved version", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbKeywordSubstitution->setToolTip(QApplication::translate("ConfigDialog", "on svn add executes svn propset svn:keywords \"Date Author Revision HeadURL\"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbKeywordSubstitution->setText(QApplication::translate("ConfigDialog", "Substitute Keywords with Properties (on svn add)", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ConfigDialog", "SVN Directory Search Depth: ", 0, QApplication::UnicodeUTF8));
        checkBoxShowAdvancedOptions->setText(QApplication::translate("ConfigDialog", "Show Advanced Options", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ConfigDialog", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ConfigDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H
