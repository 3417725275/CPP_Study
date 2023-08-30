#pragma once
#include <string>
using std::string;
class FileData
{
public:
	void assign_data(string key_name, string data)
	{
		if (key_name == "WAST")
		{
			WAST = data;
		}
		else if (key_name == "QFE")
		{
			QFE = std::stod(data);
		}
		else if (key_name == "QFF")
		{
			QFF = std::stod(data);
		}
		else if (key_name == "QNH")
		{
			QNH = std::stod(data);
		}
		else if (key_name == "DP")
		{
			DP = std::stod(data);
		}
		else if (key_name == "EV")
		{
			EV = std::stod(data);
		}
		else if (key_name == "RF")
		{
			RF = std::stoi(data);
		}
		else if (key_name == "RH")
		{
			RH = std::stod(data);
		}
		else if (key_name == "ST1")
		{
			ST1 = std::stod(data);
		}
		else if (key_name == "ST2")
		{
			ST2 = std::stod(data);
		}
		else if (key_name == "ST3")
		{
			ST3 = std::stod(data);
		}
		else if (key_name == "ST4")
		{
			ST4 = std::stod(data);
		}
		else if (key_name == "SR")
		{
			SR = std::stoi(data);
		}
		else if (key_name == "T")
		{
			T = std::stod(data);
		}
		else if (key_name == "S")
		{
			S = std::stoi(data);
		}
		else if (key_name == "Dta")
		{
			Dta = std::stoi(data);
		}
		else if (key_name == "Dts")
		{
			Dts = std::stoi(data);
		}
		else if (key_name == "Sx")
		{
			Sx = std::stoi(data);
		}
		else
		{
			throw std::exception("Invalid key name");
		}




	}


	string WAST;
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