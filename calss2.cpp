#include<iostream>
#include<string>
using namespace std;
//继承 减少重复代码
//语法：class 子类，继承方式 父类
// 子类也叫派生类
// 父类也叫 基类
// 

////普通页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登入，注册...." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++,C" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登入，注册...." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++,C" << endl;
//	}
//};
//class Cjj
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登入，注册...." << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++,C" << endl;
//	}
//};
//void test01()
//{
//	cout << "Java下载视频页面" <<endl;
//	Java ja;
//	ja.footer();
//	ja.header();
//	ja.left();
//
//}
//void test02()
//{
//	cout << "Python下载视频页面" << endl;
//	Python py;
//	
//	py.header();
//	py.footer();
//	py.left();
//
//
//}
// void test03()
//{
//	 Cjj cjj;
//	 cjj.header();
//	 cjj.footer();
//	 cjj.left();
//}


//继承  减少重复的代码
//class BasePage
//{
//public:
//	void header()
//			{
//				cout << "首页，公开课，登入，注册...." << endl;
//			}
//			void footer()
//			{
//				cout << "帮助中心，交流合作，站内地图" << endl;
//			}
//			void left()
//			{
//				cout << "Java,Python,C++,C" << endl;
//			}
//		
//};
////Java
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
////python
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////Cpp
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPP学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java下载视频页面" <<endl;
//	Java ja;
//	ja.footer();
//	ja.header();
//	ja.left();
//	cout << "------------------------------" << endl;
//
//}
//void test02()
//{
//	cout << "Python下载视频页面" << endl;
//	Python py;
//	
//	py.header();
//	py.footer();
//	py.left();
//	cout << "------------------------------" << endl;
//
//}
// void test03()
//{
//	 CPP cpp;
//	 cpp.header();
//	 cpp.footer();
//	 cpp.left();
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}



//继承方式


//公共继承
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 : public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中公共权限成员到子类中依然是公共权限
//
//		m_B = 20;//父类中的保护权限成员到子类中依然是保护权限
//		//m_C = 10;//父类中私有权限成员到子类访问不到
//	}
//};
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;
//
//}
////保护继承
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类中公共成员到子类中变为保护权限
//		m_B = 100;//
//		//m_C = 100;//子类访问不到    父类中私有成员访问不到
//
//	}
//};
//
//void test03()
//{
//	Son2 s2;
//	//s2.m_A = 1000;   在Son2中变为保护权限，因此类外访问不到
//
//
//}
//
////私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 : private Base3
//{
//public:
//	void func()
//	{
//		m_A = 100;
//		m_B = 100;
//		//m_C = 100;
//	}
//};
//void test03()
//{
//	Son3 s3;
//	//s3.m_A = 1000;  类内变成私有权限，类外访问不到
//}


//继承中的对象模型
//
//class  Base {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
//void test01()
//{
//	cout << sizeof(Son) << endl;
//	//父类中所有非静态成员属性都会被子类继承
//	//父类中私有成员属性，是被编译器隐藏起来，访问不到，但是确实是被继承下去了+
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
////利用开发人员命令提示符工具查看对象模型
////跳转盘符，跳转路径
////查看命令  cl /d1 reportSingleClassLayout类名  文件名



////继承中构造和析构顺序
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "Base析构函数" << endl;
//	}
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "son的构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "son析构函数" << endl;
//	}
//};
//
////继承中的构造函数与析构函数顺序如下
////先构造父类再构造子类     析构顺序与构造相反相反
//void test01()
//{
//	//Base b;
//	Son s;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
//

//继承中同名成员处理方式
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func(int n)
//	{
//		cout << "Base--func(int)函数调用" << endl;
//	}
//	int m_A;
//};
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "Son--func()函数调用" << endl;
//	}
//	int m_A;
//};
//
//
//void test01()
//{
//	Son s;
//	cout << s.m_A << endl;
//	//通过子类访问父类同名的成员，需要加作用域
//	cout << s.Base::m_A<< endl;
//}
////同名函数处理
////如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
////如果想访问到父类中被隐藏的童名成员函数，需要加作用域
//void test02()
//{
//	Son s;
//	s.Base::func(100);
//	//同上
//	//s.Base::func();
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}



//继承同名静态成员处理方式
//
//class Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Base--static的函数调用" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base--static int的函数调用" << endl;
//	}
//};
//
//
//int Base::m_A = 100;
//
//class Son : public Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Son--static的函数调用" << endl;
//	}
//};
//int Son::m_A = 200;
//
////如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
//////如果想访问到父类中被隐藏的童名成员函数，需要加作用域
//void test01()
//{
//	Son s;
//	//1.通过对象访问
//	cout << "通过对象访问" << endl;
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl;
//	//2.通过类名来访问
//	cout << "通过类名访问" << endl;
//	cout << Son::m_A << endl;
//	cout << Son::Base::m_A << endl;
//}
//void test02()
//{
//	//1,通过对象访问
//	Son s;
//	cout << "通过对象访问" << endl;
//	s.func();
//	s.Base::func();
//	//2.通过类名访问
//	cout << "通过类名访问" << endl;
//	//Son::func(100);
//	Son::func();
//	
//
//	Son::Base::func(100);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
//


//多继承语法
//
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A =100;
//	}
//	int m_A;
//};
//class Base2
//{
//public:
//	Base2()
//	{
//		m_B = 200;
//	}
//	int m_B;
//};
////继承语法
////当父类中出现同名成员，需要加作用域
//class Son : public Base1, Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	Son s;
//	cout << sizeof(Son) << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//棱形继承
//动物
class Animal{
public:
	int m_Age;

};
//yang
class Sheep :public Animal{};
//tuo
class Tuo: public Animal{};
//羊驼
class SheepTuo : public Sheep,public Tuo{};



void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//当棱形类继承，俩个父类拥有相同数据，需要加作用域区分
	cout << "st.Sheep::m_Age " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
}
int main()
{
	system("pause");
	return 0;
}







































































































































































































































































































































































































































































