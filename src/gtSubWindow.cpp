#include "gtSubWindow.h"

GtSubWindow::GtSubWindow(QWidget* parent) : QWidget(parent)
{
	setWindowTitle(tr("GTerm"));
	setWindowIcon(QIcon(":/gtres/resources/logo/java.ico"));
	resize(QSize(1024, 768));
	gtCentralWidget = new QWidget(this);
	gtCentralWidget->resize(QSize(1024, 768));
	gtCentralWidget->setMaximumSize(QSize(1024, 768));

	gtTable = nullptr;
	gtFont =  new QFont(QString("Arial"), 10, 1, false);
	gtGroupBox = nullptr;
	x = 0;
	y = 0;
}

GtSubWindow::~GtSubWindow()
{
	delete gtFont;
}

void GtSubWindow::showHelp()
{
	QMessageBox::about(this, tr("Show Help"),
		tr("GTerm version 2021.03.01 by Gayan Wijesinghe\nhttps://jupiter.csit.rmit.edu.au/~e58140/GTerm/"));
	QDesktopServices::openUrl(QUrl("https://jupiter.csit.rmit.edu.au/~e58140/GTerm/"));
}

void GtSubWindow::getInputString()
{
	showMessageDialog();
}

void GtSubWindow::showMessageDialog()
{
	QString userInput = QInputDialog::getText(this, QString("GTerm Input Dialog"), QString("Please enter a String"));
	if (userInput.isEmpty())
		userInput = QString("Null");

	(void)QMessageBox::information(this, QString("Show Message Dialog"), userInput, QMessageBox::Ok);
}

void GtSubWindow::showErrorDialog()
{
	(void)QMessageBox::critical(this, QString("Show Error Dialog"), "Error!", QMessageBox::Ok);
}

void GtSubWindow::addImageIcon()
{
	QString imageIconPath = QFileDialog::getOpenFileName(this, tr("Select a image icon"), 
		QStandardPaths::writableLocation(QStandardPaths::DesktopLocation), tr("Image Icon (*.png *.xpm *.jpg)"));

	if (imageIconPath.isNull())
		return;
	
}

void GtSubWindow::addTable()
{
}

void GtSubWindow::addRowToTable()
{
}

void GtSubWindow::getSelectRowFromTable()
{
}

void GtSubWindow::getRowIndexFromSelectTable()
{
}

void GtSubWindow::addButton()
{
}

void GtSubWindow::print()
{
}

void GtSubWindow::println()
{
}

void GtSubWindow::setFont()
{
}

void GtSubWindow::setFontSize()
{
}

void GtSubWindow::setBackgroundColor()
{
}

void GtSubWindow::setXY()
{

}

void GtSubWindow::setFilePath()
{
	(void)QFileDialog::getSaveFileName(this);
}

void GtSubWindow::clear()
{
}

void GtSubWindow::addTextArea()
{
}

void GtSubWindow::addTextField()
{
}

void GtSubWindow::clearRowsOfTable()
{
}

void GtSubWindow::getColorFromDialog()
{
}

void GtSubWindow::getPasswordFromDialog()
{
}

void GtSubWindow::getTextFromEntry()
{
}

void GtSubWindow::setTextInEntry()
{
}

void GtSubWindow::showWarningDialog()
{
}

QString GtSubWindow::getFilePath()
{
	return QFileDialog::getOpenFileName(this);
}

void GtSubWindow::retranslateUi()
{
}

inline void GtSubWindow::setupUi()
{
}

void GtSubWindow::showDialog()
{
}
