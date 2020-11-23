#include "interaction.h"
#include "datadrive.h"
CInteraction::CInteraction(CDataManage* datamanage)
{
	m_datamanage = datamanage;
}

CInteraction::~CInteraction()
{

}
char CInteraction::LoadDataSourceFile(QString filename)
{
	CDataDrive* t_drv = new CDataDrive();
	
	int PntNum;
	vector<pair<int, int>> vLink;
	t_drv->loadFile(filename, PntNum, vLink);

	QVector<CNodeData *> vNodes;
	m_datamanage->setNodes(PntNum, vLink);
	
	return true;
}