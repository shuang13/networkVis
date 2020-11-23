#include "network.h"
#include <QtWidgets/QApplication>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CNetwork w;
	w.show();
	return a.exec();
}
