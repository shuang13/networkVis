#include "algorithm.h"
#include "time.h"
CAlgorithm::CAlgorithm()
{

}

CAlgorithm::~CAlgorithm()
{

}char CAlgorithm::NetworkLayout(vector<QPointF> &vPoint, vector<vector<int> > &vLink, SParameterInfo para)
{
	//1. 初始化
	 srand((unsigned)time(NULL));
	 for(int i = 0; i < vPoint.size(); i ++)
	 {
		 vPoint[i].setX(rand()*1.0/RAND_MAX);
		 vPoint[i].setY(rand()*1.0/RAND_MAX);
	 }

	 //2. 布局
	 float E_prev = 0;
	 for(int iter = 0; iter < para.MaxIterNum; iter ++)
	 {
		 float E = 0.0;
		 vector<QPointF>  vEnerge;
		 vEnerge.resize(vPoint.size());

		 //2.1 计算能量
		 for(int i = 0; i < vPoint.size(); i ++)
		 {
			 QPointF & tp = vPoint[i];

			 //计算斥力
			 QPointF CF;
			 for(int j = 0; j < vPoint.size(); j ++)
			 {
				 if( j == i) continue;
				 QPointF & sp = vPoint[j];

				 QPointF tF;
				 float d = (tp.x() - sp.x()) * (tp.x() - sp.x()) + 
					       (tp.y() - sp.y()) * (tp.y() - sp.y());
				 if(d < 0.00000001) d = 0.000001;
				 tF.setX(0.1 * (tp.x() - sp.x())/d);
				 tF.setY(0.1* (tp.y() - sp.y())/d);

				 CF.setX(CF.x() + tF.x());
				 CF.setY(CF.y() + tF.y());
			 }

			 //边力

		 }		 

		 if(E < para.IterErr) break;
		 if(fabs(E - E_prev) < para.IterErr) break;
		 E_prev = E;

		 //2.2 调整坐标

		 for(int i = 0; i < vPoint.size(); i ++)
		 {
			 QPointF & tp = vPoint[i];
			 QPointF & ep = vEnerge[i];
			 tp.setX(tp.x() + ep.x() * para.step);
			 tp.setY(tp.y() + ep.y() * para.step);
			 if(tp.x() > 1) tp.setX(1.0);
			 if(tp.x() < 0) tp.setX(0.0);
			 if(tp.y() > 1) tp.setY(1.0);
			 if(tp.y() < 0) tp.setY(0.0);
		 }
	 }

	 return 0;
}