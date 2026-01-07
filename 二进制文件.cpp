//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//void test01()
//{
//	//包含头文件  创建流对象 打开文件 写文件   关闭文件
//	ofstream ofs;
//	ofs.open("person.txt", ios::out | ios::binary);
//
//	Person p = { "zhangsan",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//	ofs.close();
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}