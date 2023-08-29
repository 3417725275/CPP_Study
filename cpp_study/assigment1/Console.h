#include <string>

using std::string;
#ifndef _CONSOLE_H_ //宏变量
#define _CONSOLE_H_





/// <summary>
/// 控制台类，接受输入和打印输出
/// </summary>
class Console
{
public:
	void show_menu();
	int	get_params();

private:
	string _menu = "\
1.The average wind speed and sample standard deviation for this wind speed given a specified month and year\r\n\r\n\
2.Average ambient air temperature and sample standard deviation for each month of a specified year\r\n\r\n\
3.Total solar radiation in kWh/m2 for each month of a specified year.\r\n\r\n\
4.Average wind speed (km/h), average ambient air temperature and total solar radiation in kWh/m2 for each month of a specified year. The standard deviation is printed in ( ) next to the average";
};


#endif