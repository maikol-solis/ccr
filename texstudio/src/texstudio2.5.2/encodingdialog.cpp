#include "encodingdialog.h"
EncodingDialog::EncodingDialog(QWidget *parent, QEditor *editor) :
		QDialog(parent), edit(editor) {
	setupUi(this);
	foreach(const int mib, QTextCodec::availableMibs()) {
		QString name = QTextCodec::codecForMib(mib)->name();
		foreach(const QByteArray ba, QTextCodec::codecForMib(mib)->aliases())
		    name+=" / " + ba;
		QListWidgetItem* it = new QListWidgetItem(name, encodings);
		it->setData(Qt::UserRole, mib);
		if (mib==edit->getFileCodec()->mibEnum()) encodings->setCurrentItem(it);
		if (mib==0 || mib==4 /*latin1*/ || mib==106 /*utf-8*/ || mib==1013 || mib==1014 /*utf16be+le*/) {
			QFont font=QApplication::font();
			font.setBold(true);
			it->setFont(font);
		}
	}
	label->setText(tr("Select Encoding for")+" \""+edit->fileName()+"\"");
	if (!QFileInfo(edit->fileName()).exists()) reload->setEnabled(false);
}

void EncodingDialog::changeEvent(QEvent *e) {
	switch (e->type()) {
	case QEvent::LanguageChange:
		retranslateUi(this);
		break;
	default:
		break;
	}
}

void EncodingDialog::on_view_clicked() {
	if (!txsConfirmWarning(tr("If the new and old encodings are incompatible, some characters may be destroyed.\nAre you sure you want accept data loss?"))) {
		reject();
		return;
	}
	edit->viewWithCodec(QTextCodec::codecForMib(encodings->currentItem()->data(Qt::UserRole).toInt()));
	accept();
}
void EncodingDialog::on_change_clicked() {
	edit->setFileCodec(QTextCodec::codecForMib(encodings->currentItem()->data(Qt::UserRole).toInt()));
	accept();
}
void EncodingDialog::on_reload_clicked() {
	if (edit->isContentModified())
		if (!txsConfirmWarning(tr("The document has been changed.\nThese changes will be lost, if you reload it with the new encoding.\nAre you sure you want to undo all changes?"))){
			reject();
			return;
		}
	LatexDocument *doc=qobject_cast<LatexDocument*>(edit->document());
	doc->initClearStructure();
	edit->load(edit->fileName(),QTextCodec::codecForMib(encodings->currentItem()->data(Qt::UserRole).toInt()));
	accept();
}
void EncodingDialog::on_cancel_clicked() {
	reject();
}