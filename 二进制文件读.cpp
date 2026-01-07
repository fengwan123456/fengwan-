#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Person
{
public:
	char m_Name[64];
	int m_Age;
};
void test01()
{
	//包含头文件  创建流对象 打开文件 写文件   关闭文件
	ifstream ifs;
	ifs.open("person.txt", ios::out | ios::binary);
	if (!ifs.is_open())

	{
		cout << "文件打开失败" << endl;
		return;
	}
	Person p = { "zhangsan",18 };
	ifs.read(( char*)&p, sizeof(Person));
	cout << p.m_Name << p.m_Age << endl;
	ifs.close();

}

int main()
{
	test01();
	return 0;
}