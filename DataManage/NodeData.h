#pragma once
#include <QVector>
#include "NodeData.h"
using namespace std;
class CNodeData
{
private: 
	// ����
	float m_x;
	float m_y;
	// �������id
	int m_clusterID;

	// �����
	int m_id;

	// �ڱ߽��
	vector<int> m_connect;
public:
	CNodeData(void);
	~CNodeData(void);
	void setX(int x) {m_x = x;}
	void setY(int y) {m_y = y;}
	void setPosition(int x, int y) {m_x = x; m_y = y;}
	void setId(int id) {m_id = id;};
	void setClusterID(int clusterID) {m_clusterID = clusterID;}
	void addChild(int child) {m_connect.push_back(child);}

	int getX() {return m_x;};
	int getY() {return m_y;};
	pair<int, int> getPosition() 
	{ 
		pair<int, int> position(m_x, m_y);
		return position;
	};
	int getId() {return m_id;}
	int getClusterID() {return m_clusterID;}
	vector<int> getConnect() {return m_connect;}
};

