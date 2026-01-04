//#include<iostream>
//#include<string>
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void speak() = 0;
//};
//class Cat :public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		m_Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *m_Name<<"cat speak" << endl;
//}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("TOm");
//	animal->speak();
//	delete animal;
//}
//
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//利用虚析构可以解决父类指针释放子类对象不干净的问题