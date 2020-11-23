#ifndef VISUALIZATION_H
#define VISUALIZATION_H

#include "visualization_global.h"
#include "datamanage.h"
#include "viswidget.h"

#include <QVector>
#include <vector>

using namespace std;


class VISUALIZATION_EXPORT CVisualization
{
private:

	vector<pair<float,float> >    m_vPoint;
	vector<pair<int,int> >     m_vLink;
	vector<CNodeData *> m_nodes;

	CVisWidget*               m_widget;

public:
	CVisualization();
	~CVisualization();
	void SetData(vector<CNodeData *> &nodes);

	CVisWidget*  GetWidget(){

		return m_widget;
	}

};

#endif // VISUALIZATION_H
