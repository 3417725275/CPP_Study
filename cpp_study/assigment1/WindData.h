#pragma once



class WindData
{

public:
	//���س�Ա�������൱��ͬʱʵ����get��set
	//ͬʱ�ܱ���set��������Ҫ�Ŀ�����Ч������
	double& average_speed() { return _average_speed; }

private:
	double _average_speed; //ƽ������
	double _std_devi_speed; //��׼��
};