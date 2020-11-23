#ifndef VISWIGET_H
#define VISWIGET_H

#include <QWidget>
#include "ui_viswiget.h"

class CVisWiget : public QWidget
{
	Q_OBJECT

public:
	CVisWiget(QWidget *parent = 0);
	~CVisWiget();

private:
	Ui::CVisWiget ui;
};

#endif // VISWIGET_H
