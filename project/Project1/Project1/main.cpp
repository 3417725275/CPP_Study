//#include <iostream>
//#include <string>
//
//using std::string;
////��׼��������� 
//using std::cin; //�󶨵������豸
//using std::cout; //�󶨵Ŀ���̨(����豸)
//
//using std::endl;
//using std::getline;
////��һ��
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		cout << s << endl;
//	}
//	return 0;
//}




//��һ��
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string s;

	//����

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

