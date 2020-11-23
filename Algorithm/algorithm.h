#ifndef ALGORITHM_H
#define ALGORITHM_H
#include "algorithm_global.h"
#include <vector>
#include <QPointF>
#include <QPoint>
using namespace std;

typedef struct _tagParameterInfo
{
	//����������
	int   MaxIterNum;

	//�������
	float  IterErr;

	//�������������ֵ����Сֵ��Ĭ��ֵ��
	float  step;
}SParameterInfo;


class ALGORITHM_EXPORT CAlgorithm
{

public:

	char NetworkLayout(vector<QPointF> &vPoint,
					   vector<vector<int> > &vLink,
					   SParameterInfo para);

public:
	CAlgorithm();
	~CAlgorithm();

private:

};
#endif // ALGORITHM_H
