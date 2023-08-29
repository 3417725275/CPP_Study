#pragma once



class WindData
{

public:
	//返回成员的引用相当于同时实现了get和set
	//同时能避免set带来不必要的拷贝和效率问题
	double& average_speed() { return _average_speed; }

private:
	double _average_speed; //平均风速
	double _std_devi_speed; //标准差
};