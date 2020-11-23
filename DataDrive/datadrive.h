#ifndef DATADRIVE_H
#define DATADRIVE_H

#include "datadrive_global.h"
#include <QString>
#include <QVector>
#include <vector>
#include <QPair>
#include<utility>
using namespace std;
class DATADRIVE_EXPORT CDataDrive
{
public:
	CDataDrive();
	~CDataDrive();

	void loadFile(QString filename, int &pntNum, vector<pair<int, int>> &vLink);
private:

};

#endif // DATADRIVE_H
