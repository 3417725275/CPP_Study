#include "WindData.h"


void test_fun()
{
	WindData wind_data;
	double& avg_speed = wind_data.average_speed();
	avg_speed = 1.0;//�ı�(set)avg_speed�൱�ڸı���� wind_data�Ե�_average_speed��Ա��ֵ
	double temp = wind_data.average_speed();//�൱�ڻ�ȡ��get��wind_data��_average_speed��Ա��ֵ

	wind_data.average_speed() = 1.0;//����д�Ǵ���ģ���Ϊaverage_speed()���ص���һ����ʱ���������ܸı���ʱ������ֵ //�����漰��һ����ֵ����ֵ�ĸ���
}
