#pragma once
#include "MyVector.h"
#include "FileData.h"
#include "AllData.h"
/// <summary>
/// �����������
/// </summary>
class Computor
{

public:
	/// <summary>
	/// ����ƽ�����ٺͱ�׼��
	/// </summary>
	WindData compute_wind_speed(const MyVector<FileData>& fileData) { return WindData(); };


	/// <summary>
   /// ����ƽ���¶ȡ���׼��
   /// </summary>
	Temperature compute_temperature(const MyVector<FileData>& fileData) { return Temperature(); };


	/// <summary>
	/// ����ƽ��̫�����䡢��׼��
	/// </summary>
	SolarData compute_solar(const MyVector<FileData>& fileData) { return SolarData(); };


	/// <summary>
	/// ��������ֵ
	/// </summary>
	AllData compute_all_data(const MyVector<FileData>& fileData) { return AllData(); };
};