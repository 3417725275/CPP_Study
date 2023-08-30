#pragma once
#include "MyVector.h"
#include "FileData.h"
#include "AllData.h"
/// <summary>
/// 计算相关数据
/// </summary>
class Computor
{

public:
	/// <summary>
	/// 计算平均风速和标准差
	/// </summary>
	WindData compute_wind_speed(const MyVector<FileData>& fileData) { return WindData(); };


	/// <summary>
   /// 计算平均温度、标准差
   /// </summary>
	Temperature compute_temperature(const MyVector<FileData>& fileData) { return Temperature(); };


	/// <summary>
	/// 计算平均太阳辐射、标准差
	/// </summary>
	SolarData compute_solar(const MyVector<FileData>& fileData) { return SolarData(); };


	/// <summary>
	/// 计算所有值
	/// </summary>
	AllData compute_all_data(const MyVector<FileData>& fileData) { return AllData(); };
};