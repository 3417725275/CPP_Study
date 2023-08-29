#include "WindData.h"


void test_fun()
{
	WindData wind_data;
	double& avg_speed = wind_data.average_speed();
	avg_speed = 1.0;//改变(set)avg_speed相当于改变的是 wind_data对的_average_speed成员的值
	double temp = wind_data.average_speed();//相当于获取（get）wind_data的_average_speed成员的值

	wind_data.average_speed() = 1.0;//这样写是错误的，因为average_speed()返回的是一个临时变量，不能改变临时变量的值 //这里涉及到一个左值和右值的概念
}
