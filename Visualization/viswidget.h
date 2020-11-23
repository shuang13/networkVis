#ifndef VISWIDGET_H
#define VISWIDGET_H

#include <QWidget>
#include "ui_viswidget.h"
#include <vector>
#include <QPointF>
#include <QPoint>
#include <QVector>
#include "NodeData.h"
using namespace std;

class CVisWidget : public QWidget
{
	Q_OBJECT

private:
	//µ„∂”¡–
	vector<QPointF>     m_vPoint;

	vector<QPoint>      m_vLink;

	vector<CNodeData *> m_nodes;
	Ui::CVisWidget ui;

public:
	void SetData(vector<CNodeData *> &nodes);
	void paintEvent(QPaintEvent * event);
	CVisWidget(QWidget *parent = 0);
	~CVisWidget();
};

#endif // VISWIDGET_H