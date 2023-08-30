#include "gtest/gtest.h"
#include "../cpp_study/File.h"
#include "../cpp_study/FileReader.h"


TEST(FileReader, ReadData) 
{
	File file("123");
	FileReader reader;
	EXPECT_TRUE(reader.ReadData("XXXX", file));
}



int main(int argc, char** argv) {
	// ��ʼ�� Google Test ���
	testing::InitGoogleTest(&argc, argv);
	// �������в�������
	return RUN_ALL_TESTS();
}