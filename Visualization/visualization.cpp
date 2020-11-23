#include "visualization.h"
#include "viswidget.h"
#include <QVector>

CVisualization::CVisualization()
{
	m_widget = new CVisWidget;
}

CVisualization::~CVisualization()
{

}
void CVisualization::SetData(vector<CNodeData *> &nodes)
{
	m_nodes = nodes;
	m_widget->SetData(m_nodes);

}