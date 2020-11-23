#ifndef ALGORITHM_H
#define ALGORITHM_H
#include "algorithm_global.h"
#include <vector>
#include <QPointF>
#include <QPoint>
using namespace std;

typedef struct _tagParameterInfo
{
	//最大迭代次数
	int   MaxIterNum;

	//迭代误差
	float  IterErr;

	//迭代步长（最大值和最小值，默认值）
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
