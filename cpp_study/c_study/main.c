#include <stdio.h>
#include <string.h>
#include <xkeycheck.h>


//���ܷ��ؾֲ�������ָ��
//��Ϊ����������ʱ����ͷžֲ��������ڴ棬���س�ȥ��ָ���޷��ڸ��ڴ��϶�ȡ������
//�ֲ������洢��ջ�ϣ�ջ�ϵ��ڴ��ں�����������Զ��ͷ�
//new�Ķ���洢�ڶ��ϣ����������󲻻��Զ��ͷţ���Ҫ�ֶ�delete
char* fun1()
{
	char* str = new char[1000]; //"Hello World\0"  
	printf("������һ���ı�\n");
	fgets(str, sizeof(str), stdin);//�ӿ���̨���ڽ���������ַ������洢��str�ַ���������


	return str;



	//strlen��ϵͳ�����������жϵ�ǰ�ַ������ж��ٸ��ַ�
	//strlen��һ������������һ���ַ���ָ��Ĳ���
	//int n = strlen(str); //�жϵ�ǰ�ַ��������а������ٸ��ַ� 

	////������� ����̨���������  
	//for (int i = n - 1; i >= 0; --i)
	//{
	//	printf("%c", str[i]);
	//}

}

void WriteToFile(File* file, const char* fileContent)
{
	if (file == NULL)
	{
		//stdin stdout stderr ��׼����/���/������Ϣ��
		//prinf()��ͬ��fprintf(stdout,char*)
		fprintf(stderr,"�޷���/�����ļ�\n");
		return;
	}

	fprintf(file, "����Ҫ������ļ����� %s\n", fileContent);

	fclose(file);
}

void fun3()
{
	int day = 8;
	char* month = "August";
	int year = 2020;
	//printf(const char* char str,...)��ʽ���������
	//...��ʾ���Խ��������������������Ĳ�����
	//%04d��ռλ��������ʵ��ֵ�Ǻ��洫��Ĳ���
	//%d��ʾ���յ������β���
	//%s��ʾ���յ����ַ�������
	printf("Today is %04d, %s %d\n", day, month, year);
	//Today is 0008, August 2020;
}

int main()
{
	char filename[] = "test.txt";

	File* file = NULL;
	//fopen���ڴ�һ���ļ�������ļ������ھʹ���
	file = fopen(filename, "w+");

	char* str = fun1();
	WriteToFile(file, str);

	delete str;
	return;
}

