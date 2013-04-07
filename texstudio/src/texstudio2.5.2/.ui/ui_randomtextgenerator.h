/********************************************************************************
** Form generated from reading UI file 'randomtextgenerator.ui'
**
** Created: Sat Apr 6 13:26:39 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOMTEXTGENERATOR_H
#define UI_RANDOMTEXTGENERATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_RandomTextGenerator
{
public:
    QHBoxLayout *hboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *wordOrder1RadioButton;
    QRadioButton *wordOrder2RadioButton;
    QRadioButton *wordOrder3RadioButton;
    QSpacerItem *spacerItem;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QPushButton *generateButton;
    QPushButton *closeButton;
    QSpinBox *lengthSpinBox;
    QRadioButton *wordOrderXRadioButton;
    QSpinBox *wordOrderSpinBox;
    QRadioButton *characterOrder1RadioButton;
    QRadioButton *characterOrder2RadioButton;
    QRadioButton *characterOrder3RadioButton;
    QRadioButton *characterOrderXRadioButton;
    QSpinBox *characterOrderSpinBox;
    QSpacerItem *spacerItem2;
    QCheckBox *upperCaseCheckBox;
    QSpacerItem *verticalSpacer;
    QCheckBox *punctationCheckBox;
    QCheckBox *latexInput;
    QCheckBox *exportCheckBox;
    QLineEdit *exportFileNameLineEdit;
    QTextEdit *outputEdit;

    void setupUi(QDialog *RandomTextGenerator)
    {
        if (RandomTextGenerator->objectName().isEmpty())
            RandomTextGenerator->setObjectName(QString::fromUtf8("RandomTextGenerator"));
        RandomTextGenerator->resize(534, 510);
        hboxLayout = new QHBoxLayout(RandomTextGenerator);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupBox = new QGroupBox(RandomTextGenerator);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        wordOrder1RadioButton = new QRadioButton(groupBox);
        wordOrder1RadioButton->setObjectName(QString::fromUtf8("wordOrder1RadioButton"));

        gridLayout->addWidget(wordOrder1RadioButton, 5, 0, 1, 3);

        wordOrder2RadioButton = new QRadioButton(groupBox);
        wordOrder2RadioButton->setObjectName(QString::fromUtf8("wordOrder2RadioButton"));
        wordOrder2RadioButton->setChecked(false);

        gridLayout->addWidget(wordOrder2RadioButton, 6, 0, 1, 3);

        wordOrder3RadioButton = new QRadioButton(groupBox);
        wordOrder3RadioButton->setObjectName(QString::fromUtf8("wordOrder3RadioButton"));
        wordOrder3RadioButton->setChecked(true);

        gridLayout->addWidget(wordOrder3RadioButton, 7, 0, 1, 3);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 18, 0, 1, 3);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 19, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 21, 0, 1, 3);

        generateButton = new QPushButton(groupBox);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));

        gridLayout->addWidget(generateButton, 22, 0, 1, 3);

        closeButton = new QPushButton(groupBox);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        gridLayout->addWidget(closeButton, 23, 0, 1, 3);

        lengthSpinBox = new QSpinBox(groupBox);
        lengthSpinBox->setObjectName(QString::fromUtf8("lengthSpinBox"));
        lengthSpinBox->setMinimum(1);
        lengthSpinBox->setMaximum(2147483647);
        lengthSpinBox->setValue(40);

        gridLayout->addWidget(lengthSpinBox, 19, 2, 1, 1);

        wordOrderXRadioButton = new QRadioButton(groupBox);
        wordOrderXRadioButton->setObjectName(QString::fromUtf8("wordOrderXRadioButton"));

        gridLayout->addWidget(wordOrderXRadioButton, 8, 0, 1, 1);

        wordOrderSpinBox = new QSpinBox(groupBox);
        wordOrderSpinBox->setObjectName(QString::fromUtf8("wordOrderSpinBox"));
        wordOrderSpinBox->setMinimum(1);
        wordOrderSpinBox->setValue(4);

        gridLayout->addWidget(wordOrderSpinBox, 8, 2, 1, 1);

        characterOrder1RadioButton = new QRadioButton(groupBox);
        characterOrder1RadioButton->setObjectName(QString::fromUtf8("characterOrder1RadioButton"));

        gridLayout->addWidget(characterOrder1RadioButton, 0, 0, 1, 3);

        characterOrder2RadioButton = new QRadioButton(groupBox);
        characterOrder2RadioButton->setObjectName(QString::fromUtf8("characterOrder2RadioButton"));

        gridLayout->addWidget(characterOrder2RadioButton, 1, 0, 1, 3);

        characterOrder3RadioButton = new QRadioButton(groupBox);
        characterOrder3RadioButton->setObjectName(QString::fromUtf8("characterOrder3RadioButton"));

        gridLayout->addWidget(characterOrder3RadioButton, 2, 0, 1, 3);

        characterOrderXRadioButton = new QRadioButton(groupBox);
        characterOrderXRadioButton->setObjectName(QString::fromUtf8("characterOrderXRadioButton"));

        gridLayout->addWidget(characterOrderXRadioButton, 3, 0, 1, 1);

        characterOrderSpinBox = new QSpinBox(groupBox);
        characterOrderSpinBox->setObjectName(QString::fromUtf8("characterOrderSpinBox"));
        characterOrderSpinBox->setMinimum(1);
        characterOrderSpinBox->setValue(4);

        gridLayout->addWidget(characterOrderSpinBox, 3, 2, 1, 1);

        spacerItem2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 4, 0, 1, 1);

        upperCaseCheckBox = new QCheckBox(groupBox);
        upperCaseCheckBox->setObjectName(QString::fromUtf8("upperCaseCheckBox"));

        gridLayout->addWidget(upperCaseCheckBox, 15, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 3);

        punctationCheckBox = new QCheckBox(groupBox);
        punctationCheckBox->setObjectName(QString::fromUtf8("punctationCheckBox"));

        gridLayout->addWidget(punctationCheckBox, 10, 0, 1, 3);

        latexInput = new QCheckBox(groupBox);
        latexInput->setObjectName(QString::fromUtf8("latexInput"));
        latexInput->setChecked(true);

        gridLayout->addWidget(latexInput, 16, 0, 1, 3);

        exportCheckBox = new QCheckBox(groupBox);
        exportCheckBox->setObjectName(QString::fromUtf8("exportCheckBox"));

        gridLayout->addWidget(exportCheckBox, 17, 0, 1, 1);

        exportFileNameLineEdit = new QLineEdit(groupBox);
        exportFileNameLineEdit->setObjectName(QString::fromUtf8("exportFileNameLineEdit"));

        gridLayout->addWidget(exportFileNameLineEdit, 17, 2, 1, 1);


        hboxLayout->addWidget(groupBox);

        outputEdit = new QTextEdit(RandomTextGenerator);
        outputEdit->setObjectName(QString::fromUtf8("outputEdit"));

        hboxLayout->addWidget(outputEdit);


        retranslateUi(RandomTextGenerator);
        QObject::connect(closeButton, SIGNAL(clicked()), RandomTextGenerator, SLOT(reject()));

        QMetaObject::connectSlotsByName(RandomTextGenerator);
    } // setupUi

    void retranslateUi(QDialog *RandomTextGenerator)
    {
        RandomTextGenerator->setWindowTitle(QApplication::translate("RandomTextGenerator", "Random Text Generator", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("RandomTextGenerator", "Options", 0, QApplication::UnicodeUTF8));
        wordOrder1RadioButton->setText(QApplication::translate("RandomTextGenerator", "First Order Word", 0, QApplication::UnicodeUTF8));
        wordOrder2RadioButton->setText(QApplication::translate("RandomTextGenerator", "Second Order Words", 0, QApplication::UnicodeUTF8));
        wordOrder3RadioButton->setText(QApplication::translate("RandomTextGenerator", "Third Order Words", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RandomTextGenerator", "Length:", 0, QApplication::UnicodeUTF8));
        generateButton->setText(QApplication::translate("RandomTextGenerator", "Generate", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("RandomTextGenerator", "Close", 0, QApplication::UnicodeUTF8));
        wordOrderXRadioButton->setText(QApplication::translate("RandomTextGenerator", "Higher Order:", 0, QApplication::UnicodeUTF8));
        characterOrder1RadioButton->setText(QApplication::translate("RandomTextGenerator", "First Order Characters", 0, QApplication::UnicodeUTF8));
        characterOrder2RadioButton->setText(QApplication::translate("RandomTextGenerator", "Second Order Characters", 0, QApplication::UnicodeUTF8));
        characterOrder3RadioButton->setText(QApplication::translate("RandomTextGenerator", "Third Order Characters", 0, QApplication::UnicodeUTF8));
        characterOrderXRadioButton->setText(QApplication::translate("RandomTextGenerator", "Higher Order:", 0, QApplication::UnicodeUTF8));
        upperCaseCheckBox->setText(QApplication::translate("RandomTextGenerator", "Ignore Case", 0, QApplication::UnicodeUTF8));
        punctationCheckBox->setText(QApplication::translate("RandomTextGenerator", "Punctation", 0, QApplication::UnicodeUTF8));
        latexInput->setText(QApplication::translate("RandomTextGenerator", "LaTeX Input", 0, QApplication::UnicodeUTF8));
        exportCheckBox->setText(QApplication::translate("RandomTextGenerator", "Save to:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RandomTextGenerator: public Ui_RandomTextGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOMTEXTGENERATOR_H
