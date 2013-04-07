/********************************************************************************
** Form generated from reading UI file 'textanalysis.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTANALYSIS_H
#define UI_TEXTANALYSIS_H

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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TextAnalysisDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QPushButton *countButton;
    QPushButton *searchSelectionButton;
    QPushButton *closeButton;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QLabel *totalLinesLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *textLinesLabel;
    QLabel *commentLinesLabel;
    QLabel *displayedWordLabel;
    QLabel *label;
    QLabel *differentWordLabel;
    QLabel *label_6;
    QLabel *characterInWordsLabel;
    QFrame *line;
    QTableView *resultView;
    QGroupBox *groupBox_2;
    QGridLayout *_2;
    QCheckBox *normalTextCheck;
    QCheckBox *commentsCheck;
    QCheckBox *commandsCheck;
    QComboBox *minimumLengthMeaning;
    QSpinBox *minimumLengthSpin;
    QLabel *label_9;
    QSpinBox *minimumCountSpin;
    QSpinBox *sentenceLengthSpin;
    QLabel *label_7;
    QLineEdit *sentenceEndChars;
    QCheckBox *respectEndCharsCheck;
    QComboBox *wordsPerPhraseMeaning;
    QComboBox *filter;
    QLabel *label_8;
    QComboBox *comboBox;

    void setupUi(QDialog *TextAnalysisDialog)
    {
        if (TextAnalysisDialog->objectName().isEmpty())
            TextAnalysisDialog->setObjectName(QString::fromUtf8("TextAnalysisDialog"));
        TextAnalysisDialog->resize(560, 664);
        gridLayout = new QGridLayout(TextAnalysisDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(TextAnalysisDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        countButton = new QPushButton(groupBox);
        countButton->setObjectName(QString::fromUtf8("countButton"));

        vboxLayout->addWidget(countButton);

        searchSelectionButton = new QPushButton(groupBox);
        searchSelectionButton->setObjectName(QString::fromUtf8("searchSelectionButton"));

        vboxLayout->addWidget(searchSelectionButton);

        closeButton = new QPushButton(groupBox);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        vboxLayout->addWidget(closeButton);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(TextAnalysisDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout1 = new QGridLayout(groupBox_3);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        totalLinesLabel = new QLabel(groupBox_3);
        totalLinesLabel->setObjectName(QString::fromUtf8("totalLinesLabel"));

        gridLayout1->addWidget(totalLinesLabel, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 2, 0, 1, 1);

        textLinesLabel = new QLabel(groupBox_3);
        textLinesLabel->setObjectName(QString::fromUtf8("textLinesLabel"));

        gridLayout1->addWidget(textLinesLabel, 1, 1, 1, 1);

        commentLinesLabel = new QLabel(groupBox_3);
        commentLinesLabel->setObjectName(QString::fromUtf8("commentLinesLabel"));

        gridLayout1->addWidget(commentLinesLabel, 2, 1, 1, 1);

        displayedWordLabel = new QLabel(groupBox_3);
        displayedWordLabel->setObjectName(QString::fromUtf8("displayedWordLabel"));

        gridLayout1->addWidget(displayedWordLabel, 4, 1, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 5, 0, 1, 1);

        differentWordLabel = new QLabel(groupBox_3);
        differentWordLabel->setObjectName(QString::fromUtf8("differentWordLabel"));

        gridLayout1->addWidget(differentWordLabel, 5, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout1->addWidget(label_6, 6, 0, 1, 1);

        characterInWordsLabel = new QLabel(groupBox_3);
        characterInWordsLabel->setObjectName(QString::fromUtf8("characterInWordsLabel"));

        gridLayout1->addWidget(characterInWordsLabel, 6, 1, 1, 1);

        line = new QFrame(groupBox_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout1->addWidget(line, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

        resultView = new QTableView(TextAnalysisDialog);
        resultView->setObjectName(QString::fromUtf8("resultView"));

        gridLayout->addWidget(resultView, 0, 1, 3, 3);

        groupBox_2 = new QGroupBox(TextAnalysisDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        _2 = new QGridLayout(groupBox_2);
        _2->setObjectName(QString::fromUtf8("_2"));
        normalTextCheck = new QCheckBox(groupBox_2);
        normalTextCheck->setObjectName(QString::fromUtf8("normalTextCheck"));
        normalTextCheck->setChecked(true);

        _2->addWidget(normalTextCheck, 0, 0, 1, 2);

        commentsCheck = new QCheckBox(groupBox_2);
        commentsCheck->setObjectName(QString::fromUtf8("commentsCheck"));

        _2->addWidget(commentsCheck, 1, 0, 1, 2);

        commandsCheck = new QCheckBox(groupBox_2);
        commandsCheck->setObjectName(QString::fromUtf8("commandsCheck"));

        _2->addWidget(commandsCheck, 2, 0, 1, 2);

        minimumLengthMeaning = new QComboBox(groupBox_2);
        minimumLengthMeaning->setObjectName(QString::fromUtf8("minimumLengthMeaning"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(minimumLengthMeaning->sizePolicy().hasHeightForWidth());
        minimumLengthMeaning->setSizePolicy(sizePolicy1);

        _2->addWidget(minimumLengthMeaning, 3, 0, 1, 2);

        minimumLengthSpin = new QSpinBox(groupBox_2);
        minimumLengthSpin->setObjectName(QString::fromUtf8("minimumLengthSpin"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(minimumLengthSpin->sizePolicy().hasHeightForWidth());
        minimumLengthSpin->setSizePolicy(sizePolicy2);
        minimumLengthSpin->setMinimumSize(QSize(40, 0));
        minimumLengthSpin->setValue(4);

        _2->addWidget(minimumLengthSpin, 3, 2, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        _2->addWidget(label_9, 4, 0, 1, 2);

        minimumCountSpin = new QSpinBox(groupBox_2);
        minimumCountSpin->setObjectName(QString::fromUtf8("minimumCountSpin"));
        sizePolicy2.setHeightForWidth(minimumCountSpin->sizePolicy().hasHeightForWidth());
        minimumCountSpin->setSizePolicy(sizePolicy2);
        minimumCountSpin->setMinimumSize(QSize(40, 0));

        _2->addWidget(minimumCountSpin, 4, 2, 1, 1);

        sentenceLengthSpin = new QSpinBox(groupBox_2);
        sentenceLengthSpin->setObjectName(QString::fromUtf8("sentenceLengthSpin"));
        sizePolicy2.setHeightForWidth(sentenceLengthSpin->sizePolicy().hasHeightForWidth());
        sentenceLengthSpin->setSizePolicy(sizePolicy2);
        sentenceLengthSpin->setMinimumSize(QSize(40, 0));
        sentenceLengthSpin->setMinimum(1);
        sentenceLengthSpin->setValue(1);

        _2->addWidget(sentenceLengthSpin, 5, 2, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        _2->addWidget(label_7, 8, 0, 1, 1);

        sentenceEndChars = new QLineEdit(groupBox_2);
        sentenceEndChars->setObjectName(QString::fromUtf8("sentenceEndChars"));
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sentenceEndChars->sizePolicy().hasHeightForWidth());
        sentenceEndChars->setSizePolicy(sizePolicy3);
        sentenceEndChars->setMinimumSize(QSize(40, 0));

        _2->addWidget(sentenceEndChars, 6, 2, 1, 1);

        respectEndCharsCheck = new QCheckBox(groupBox_2);
        respectEndCharsCheck->setObjectName(QString::fromUtf8("respectEndCharsCheck"));

        _2->addWidget(respectEndCharsCheck, 6, 0, 1, 2);

        wordsPerPhraseMeaning = new QComboBox(groupBox_2);
        wordsPerPhraseMeaning->setObjectName(QString::fromUtf8("wordsPerPhraseMeaning"));

        _2->addWidget(wordsPerPhraseMeaning, 5, 0, 1, 2);

        filter = new QComboBox(groupBox_2);
        filter->setObjectName(QString::fromUtf8("filter"));
        filter->setEditable(true);
        filter->setInsertPolicy(QComboBox::NoInsert);

        _2->addWidget(filter, 7, 1, 1, 2);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        _2->addWidget(label_8, 7, 0, 1, 1);

        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setLayoutDirection(Qt::LeftToRight);

        _2->addWidget(comboBox, 8, 1, 1, 2);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);


        retranslateUi(TextAnalysisDialog);

        minimumLengthMeaning->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TextAnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *TextAnalysisDialog)
    {
        TextAnalysisDialog->setWindowTitle(QApplication::translate("TextAnalysisDialog", "Text Analysis", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TextAnalysisDialog", "Actions", 0, QApplication::UnicodeUTF8));
        countButton->setText(QApplication::translate("TextAnalysisDialog", "Count", 0, QApplication::UnicodeUTF8));
        searchSelectionButton->setText(QApplication::translate("TextAnalysisDialog", "Search selection in the document", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("TextAnalysisDialog", "Close", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("TextAnalysisDialog", "Info", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TextAnalysisDialog", "Total lines", 0, QApplication::UnicodeUTF8));
        totalLinesLabel->setText(QApplication::translate("TextAnalysisDialog", "?", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("TextAnalysisDialog", "Text lines", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("TextAnalysisDialog", "Total shown phrases", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("TextAnalysisDialog", "Comment lines", 0, QApplication::UnicodeUTF8));
        textLinesLabel->setText(QApplication::translate("TextAnalysisDialog", "?", 0, QApplication::UnicodeUTF8));
        commentLinesLabel->setText(QApplication::translate("TextAnalysisDialog", "?", 0, QApplication::UnicodeUTF8));
        displayedWordLabel->setText(QApplication::translate("TextAnalysisDialog", "?", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TextAnalysisDialog", "Different phrases", 0, QApplication::UnicodeUTF8));
        differentWordLabel->setText(QApplication::translate("TextAnalysisDialog", "?", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("TextAnalysisDialog", "Characters in phrases", 0, QApplication::UnicodeUTF8));
        characterInWordsLabel->setText(QApplication::translate("TextAnalysisDialog", "?", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("TextAnalysisDialog", "Options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        normalTextCheck->setToolTip(QApplication::translate("TextAnalysisDialog", "If this is enabled, words/phrases in the normal text (which aren't in comments) are counted", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        normalTextCheck->setText(QApplication::translate("TextAnalysisDialog", "Analyse normal text", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        commentsCheck->setToolTip(QApplication::translate("TextAnalysisDialog", "If this is enabled, words/phrases in the comments are counted.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        commentsCheck->setText(QApplication::translate("TextAnalysisDialog", "Analyse comments", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        commandsCheck->setToolTip(QApplication::translate("TextAnalysisDialog", "If this is enabled, \\commands are counted.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        commandsCheck->setText(QApplication::translate("TextAnalysisDialog", "Analyse commands", 0, QApplication::UnicodeUTF8));
        minimumLengthMeaning->clear();
        minimumLengthMeaning->insertItems(0, QStringList()
         << QApplication::translate("TextAnalysisDialog", "Show all phrases", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TextAnalysisDialog", "Minimum phrase length:", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TextAnalysisDialog", "Minimum word length (one):", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TextAnalysisDialog", "Minimum word length (all):", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TextAnalysisDialog", "Fully ignore shorter words:", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        minimumLengthMeaning->setToolTip(QApplication::translate("TextAnalysisDialog", "Possible Options:\n"
"\"Show all\": All phrases are shown.\n"
"\"Minimum phrase length\": A phrase is only shown, if it has at least this many characters. (e.g. \"a test\" has 6 characters)\n"
"\"Minimum word length (one)\": A phrase is only shown, if it contains a word with at least this many characters. (e.g. \"a test\" has 4 characters)\n"
"\"Minimum word length (all)\": A phrase is only shown, if all of its words have at least this many characters. (e.g. \"a test\" has 1 character)\n"
"\"Completely ignore\": Shorter words are completely ignored.\n"
"(e.g. with length 3, the sentence \"this is a test\" is equally to \"this test\", while the other options would separate it in \"this is\", \"is a\", \"a test\", even if non of this phrases would be shown.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        minimumLengthSpin->setToolTip(QApplication::translate("TextAnalysisDialog", "If \"show all\" is selected, all phrases are shown.\n"
"If \"minimum phrase length\" is selected, a phrase is only shown if it has at least so many characters. (e.g. \"a test\" has 6 characters)\n"
"If \"minimum word length (one)\" is selected, a phrase is only shown if a word of it has at least so many characters. (e.g. \"a test\" has 4 characters)\n"
"If \"minimum word length (all)\" is selected, a phrase is only shown if all words of it has at least so many characters. (e.g. \"a test\" has 1 character)\n"
"If \"completely ignore\" is selected, shorter words are completely ignore.\n"
"(e.g. with length 3, the sentence \"this is a test\" is equally to \"this test\", while the other options would separate it in \"this is\", \"is a\", \"a test\", even if non of this phrases would be shown)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("TextAnalysisDialog", "Minimum occurence count:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        minimumCountSpin->setToolTip(QApplication::translate("TextAnalysisDialog", "Only phrase are shown which appears at least so many times in the document.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        sentenceLengthSpin->setToolTip(QApplication::translate("TextAnalysisDialog", "The controls in this row determine how many consecuting words are treated as a single phrase.\n"
"If minimum and maximum are selected, exactly so many words are taken. (e.g. with 2,  in the sentence above: \"the controls\", \"controls in\",...)\n"
"If only maximum is selected, words at the beginning are also taken. (e.g.  \"the\", \"the controls\", \"controls in\",...)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("TextAnalysisDialog", "Source:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sentenceEndChars->setToolTip(QApplication::translate("TextAnalysisDialog", "If \"respect phrase end chars\" is checked, words before and after a given character are always treated at words of different phrases.\n"
"If not, end characters are ignored.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sentenceEndChars->setText(QApplication::translate("TextAnalysisDialog", ".;:?!", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        respectEndCharsCheck->setToolTip(QApplication::translate("TextAnalysisDialog", "If \"respect phrase end chars\" is checked, words before and after a given character are always treated as words of different phrases.\n"
"If not, end characters are ignored.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        respectEndCharsCheck->setText(QApplication::translate("TextAnalysisDialog", "Respect phrase end chars:", 0, QApplication::UnicodeUTF8));
        wordsPerPhraseMeaning->clear();
        wordsPerPhraseMeaning->insertItems(0, QStringList()
         << QApplication::translate("TextAnalysisDialog", "Maximum words per phrase:", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TextAnalysisDialog", "Min&max words per phrase:", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        wordsPerPhraseMeaning->setToolTip(QApplication::translate("TextAnalysisDialog", "The controls in this row determine how many consecuting words are treated as a single phrase.\n"
"If minimum and maximum are selected, exactly so many words are taken. (e.g. with 2,  in the sentence above: \"the controls\", \"controls in\",...)\n"
"If only maximum is selected, words at the beginning are also taken. (e.g.  \"the\", \"the controls\", \"controls in\",...)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        filter->clear();
        filter->insertItems(0, QStringList()
         << QApplication::translate("TextAnalysisDialog", "None (.*)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TextAnalysisDialog", "No Numbers (.*[^0-9].*)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TextAnalysisDialog", "No Digits ([^0-9]*)", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("TextAnalysisDialog", "Filter", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("TextAnalysisDialog", "Whole document", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TextAnalysisDialog", "Selection", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        comboBox->setToolTip(QApplication::translate("TextAnalysisDialog", "Determines if the whole document, only the selection, or only a certain chapter are analysed.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class TextAnalysisDialog: public Ui_TextAnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTANALYSIS_H
