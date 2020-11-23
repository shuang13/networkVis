#include "datamanage.h"

#include<iostream>  
#include<ctime>
#include<cassert> 
#include "algorithm.h"
CDataManage::CDataManage()
{

}

CDataManage::~CDataManage()
{
	for(int i = 0; i < m_nodes.size(); i++)
	{
		if(m_nodes[i] != NULL) 
		{
			delete m_nodes[i];
			m_nodes[i] = NULL;
		}
	}
	
	
}
void CDataManage::setNodes(int pntNum, const vector<pair<int, int>> &vLink)
{
	vector<CNodeData *> nodesList;
	srand((unsigned)time(NULL));
	for(int i = 0; i < pntNum; i++)
	{
		CNodeData* node = new CNodeData();
		node->setPosition(rand()*1.0/100, rand()*1.0/100);
		node->setClusterID(i);
		node->setId(i);
		nodesList.push_back(node);
	}
	for(int i = 0; i < vLink.size(); i++) 
	{
		int parent = vLink[i].first;
		int child = vLink[i].second;

		nodesList[parent]->addChild(child);
	}
	m_nodes = nodesList;
}