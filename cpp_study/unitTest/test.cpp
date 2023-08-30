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
	// 初始化 Google Test 框架
	testing::InitGoogleTest(&argc, argv);
	// 运行所有测试用例
	return RUN_ALL_TESTS();
}