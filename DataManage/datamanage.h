#ifndef DATAMANAGE_H
#define DATAMANAGE_H

#include "datamanage_global.h"
#include "NodeData.h"

#include <QVector>
#include <vector>
#include <QPair>
using namespace std;
class DATAMANAGE_EXPORT CDataManage
{
public:
	CDataManage();
	~CDataManage();
	

	void setNodes(int pntNum, const vector<pair<int, int>> &vLink);

	vector<CNodeData *> getNodes()
	{
		return m_nodes;
	}

private:
	vector<CNodeData *> m_nodes;
};

#endif // DATAMANAGE_H
