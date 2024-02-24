//#include <iostream>
//#include <string>
//
//using std::string;
////标准输入输出流 
//using std::cin; //绑定的输入设备
//using std::cout; //绑定的控制台(输出设备)
//
//using std::endl;
//using std::getline;
////读一行
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		cout << s << endl;
//	}
//	return 0;
//}




//读一个
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s;

	//操作

	while (getline(cin, s))
	{
		cout << s << endl;
	}
	return 0;

	while (operator>>(cin, s))
	{
		cout << s << endl;
	}


	return 0;
}

