#ifndef NETWORK_H
#define NETWORK_H

#include <QtWidgets/QMainWindow>
#include "ui_network.h"
#include <QString>
#include <QFileDialog>
#include "datamanage.h"
#include "interaction.h"
#include "visualization.h"
using namespace std;

class CNetwork : public QMainWindow
{
	Q_OBJECT

public:
	CNetwork(QWidget *parent = 0);
	~CNetwork();
	

public slots:
	void LoadSourceFile();


private:
	Ui::CNetworkClass ui;

	CDataManage* m_dataManage;
	CVisualization *  m_visualization;
	// ��ʼ����Դ
	void InitResource();
	// ��ʼ������
	void InitUI();
};

#endif // NETWORK_H
