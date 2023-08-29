#pragma once


//struct的默认访问权限是public
//class的默认访问权限是private

//如果的类是纯数据类，建议是用struct，否则使用class
class FileData
{

public:
	double QFE;//Barometric Pressure							
	double QFF;//Barometric Pressure (QFE*Kqff)			
	double QNH;	//Barometric Pressure (Aviation Standard)	
	double DP;	//Dew Point Temperature						
	double EV;	//Evaporation (Year to Date)				
	int RF;	//Rainfall (Year to Date)					
	double RH;	//Relative Humidity							
	double ST1;	//Soil Temperature (125mm depth)			
	double ST2;	//Soil Temperature (250mm depth)			
	double ST3;	//Soil Temperature (500mm depth)			
	double ST4;	//Soil Temperature (1000mm depth)			
	int SR;	//Solar Radiation (Average)					
	double T;	//Temperature (Air)							
	int S;	//Wind Speed								
	int Dta;	//Wind Direction (10min Avg)				
	int Dts;	//Wind Direction (10min SD)					
	int Sx;	//Wind Speed (max wind gust)				
};