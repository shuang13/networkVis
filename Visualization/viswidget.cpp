#include "viswidget.h"

#include <QPainter>
#include <QPen>
CVisWidget::CVisWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

CVisWidget::~CVisWidget()
{

}

void CVisWidget::paintEvent(QPaintEvent * event)
{
	QPainter t_painter(this);
	QPen t_pen;
	t_pen.setColor(QColor(255,0,0));
	t_pen.setWidth(1);
	t_painter.setPen(t_pen);
	t_painter.setBrush(Qt::red);

	for(int i = 0; i < 10; i ++)
	{
		QPointF tp;
		tp.setX(m_nodes[i]->getX());
		tp.setY(m_nodes[i]->getY());
		vector<int> connect = m_nodes[i]->getConnect();
		for(int j = 0; j < connect.size(); j++)
		{
			QPointF sp;
			int k = connect[j];
			CNodeData * xx = m_nodes[k];
			sp.setX(m_nodes[connect[j]]->getX());
			sp.setY(m_nodes[connect[j]]->getY());
			t_painter.drawEllipse(tp,2,2);
			t_painter.drawEllipse(sp,2,2);
			t_painter.drawLine(tp,sp);
		}
	}
}

void CVisWidget::SetData(vector<CNodeData *> &nodes)
{
	m_nodes = nodes;
}