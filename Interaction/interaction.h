#ifndef INTERACTION_H
#define INTERACTION_H

#include "interaction_global.h"
#include "datamanage.h"

using namespace std;
class INTERACTION_EXPORT CInteraction
{
public:
	CInteraction(CDataManage* datamanage);
	~CInteraction();

	char LoadDataSourceFile(QString filename);
	void SavePorject(QString filename);
	void LoadPorject(QString filename);
	void LayoutNetWork();
	
private:
	CDataManage* m_datamanage;
};

#endif // INTERACTION_H
