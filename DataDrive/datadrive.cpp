#include "datadrive.h"
#include <QFile>
#include <QTextStream>
using namespace std;
CDataDrive::CDataDrive()
{

}

CDataDrive::~CDataDrive()
{

}

void CDataDrive::loadFile(QString filename, int &pntNum, vector<pair<int, int>> &vLink) 
{
	QFile t_file(filename);
	QTextStream t_stream(&t_file);
	
    t_file.open(QIODevice::ReadOnly | QIODevice::Text);
        
	pntNum = 0;
	vLink.clear();
    while (!t_stream.atEnd()) {
        QString s_line = t_stream.readLine();
		QStringList s_list = s_line.split(" ", QString::SkipEmptyParts);
		if(s_list.count() != 2) continue;
		int first = s_list.at(0).toInt();
		int second = s_list.at(1).toInt();
		pntNum = max(pntNum, first);
		pntNum = max(pntNum, second);
		pair<int, int> l = make_pair(first - 1, second - 1);
		vLink.push_back(l);
        
    }
	t_file.close();
}