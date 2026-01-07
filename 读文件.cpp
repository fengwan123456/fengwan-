//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//
////文本文件读
//
//void test01()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "打开失败" << endl;
//		return;
//	}
//
//	//读数据的四种方法
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//
//
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf))
//	{
//		cout << buf << endl;
//	}*/
//
//
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	/*char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c << endl;
//	}*/
//
//	ifs.close();
//}
//
//int  main()
//{
//	test01();
//	return 0;
//}