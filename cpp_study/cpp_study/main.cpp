
#include <iostream>
#include <string>
#include "FileReader.h"
#include "File.h"
using namespace std;
string menu = "\
1.The average wind speed and sample standard deviation for this wind speed given a specified month and year\r\n\r\n\
2.Average ambient air temperature and sample standard deviation for each month of a specified year\r\n\r\n\
3.Total solar radiation in kWh/m2 for each month of a specified year.\r\n\r\n\
4.Average wind speed (km/h), average ambient air temperature and total solar radiation in kWh/m2 for each month of a specified year. The standard deviation is printed in ( ) next to the average";


int main()
{
	std::cout << menu << std::endl;
	int menu_number;

	//std::cin >> menu_number;
	//std::cout<< "You have chosen " << menu_number << std::endl;
	File file("xxxx");
	FileReader reader;
	reader.ReadData(R"(D:\git\converters\CPP_Study\resource\Assignment1-everything\data\MetData-31-3a.csv)", file);


}