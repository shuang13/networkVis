#include "network.h"
#include <QMenu>
#include <QFileDialog>


CNetwork::CNetwork(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	InitResource();
	InitUI();
}

CNetwork::~CNetwork()
{

}
void CNetwork::InitResource()
{
	m_visualization = new CVisualization();
	m_dataManage = new CDataManage();
}
void CNetwork::InitUI()
{



	QMenuBar * t_menubar = menuBar();	
	QMenu  * t_menu = new QMenu("project");
	t_menubar->addMenu(t_menu);
	QAction  * t_action = new QAction("open",this);
	t_menu->addAction(t_action);

	QMenu * t_menu_data = new QMenu("Data");
	t_menubar->addMenu(t_menu_data);
	QAction  * t_action_load = new QAction("Load Data",this);
	t_menu_data->addAction(t_action_load);

	connect(t_action_load, SIGNAL(triggered()),this, SLOT(LoadSourceFile()));	
	
}

void CNetwork::LoadSourceFile() 
{
	CInteraction* t_lib = new CInteraction(m_dataManage);
	QStringList filename;
	QFileDialog *fileDialog = new QFileDialog(this);
	
    fileDialog->setGeometry(10,30,300,200);//设置文件对话框的显示位置
    fileDialog->setDirectory(".");//设置文件对话框打开时初始打开的位置
    if(fileDialog->exec()) 
	{
		filename = fileDialog->selectedFiles();
		if(t_lib->LoadDataSourceFile(filename.at(0)))
		{
			vector<CNodeData *> vNodes = m_dataManage->getNodes();
			

			m_visualization->SetData(vNodes);
			setCentralWidget((QWidget *)m_visualization->GetWidget());
		}
		
	}
}