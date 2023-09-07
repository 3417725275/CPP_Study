#include <stdio.h>
#include <string.h>
#include <xkeycheck.h>


//不能返回局部变量的指针
//因为函数结束的时候会释放局部变量的内存，返回出去的指针无法在该内存上读取到内容
//局部变量存储在栈上，栈上的内存在函数结束后会自动释放
//new的对象存储在堆上，函数结束后不会自动释放，需要手动delete
char* fun1()
{
	char* str = new char[1000]; //"Hello World\0"  
	printf("请输入一行文本\n");
	fgets(str, sizeof(str), stdin);//从控制台窗口接收输入的字符串，存储到str字符串数组中


	return str;



	//strlen是系统函数，用于判断当前字符串中有多少个字符
	//strlen是一个函数，接受一个字符串指针的参数
	//int n = strlen(str); //判断当前字符串数组中包含多少个字符 

	////倒序输出 控制台输入的内容  
	//for (int i = n - 1; i >= 0; --i)
	//{
	//	printf("%c", str[i]);
	//}

}

void WriteToFile(File* file, const char* fileContent)
{
	if (file == NULL)
	{
		//stdin stdout stderr 标准输入/输出/错误信息流
		//prinf()等同于fprintf(stdout,char*)
		fprintf(stderr,"无法打开/创建文件\n");
		return;
	}

	fprintf(file, "这是要输入的文件内容 %s\n", fileContent);

	fclose(file);
}

void fun3()
{
	int day = 8;
	char* month = "August";
	int year = 2020;
	//printf(const char* char str,...)格式化输出函数
	//...表示可以接收任意类型任意数量的参数，
	//%04d是占位符，它的实际值是后面传入的参数
	//%d表示接收的是整形参数
	//%s表示接收的是字符串参数
	printf("Today is %04d, %s %d\n", day, month, year);
	//Today is 0008, August 2020;
}

int main()
{
	char filename[] = "test.txt";

	File* file = NULL;
	//fopen用于打开一个文件，如果文件不存在就创建
	file = fopen(filename, "w+");

	char* str = fun1();
	WriteToFile(file, str);

	delete str;
	return;
}

