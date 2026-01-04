//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class AllDrinking
//{
//public:
//	virtual void boil() = 0;
//	virtual  void Brew() = 0;
//	virtual void PourInCup() = 0;
//	virtual void PutSomething() = 0;
//	void makeDrink()
//	{
//		boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Coffee : public AllDrinking
//{
//public:
//	virtual void boil()
//	{
//		cout << "hotwater" << endl;
//	}
//		
//	virtual  void Brew()
//	{
//		cout << "add coffee" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "put int cup" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "add sugar or milk" << endl;
//	}
//};
//class Tea :public AllDrinking
//{
//	virtual void boil()
//	{
//		cout << "hot water" << endl;
//	}
//	virtual  void Brew()
//	{
//		cout << "add black tea" << endl;
//	}
//	virtual void PourInCup()
//	{
//		cout << "put int cup" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "add something" << endl;
//	}
//};
//void doWaork(AllDrinking *abs)
//{
//	abs->makeDrink();
//}
//void test02()
//{
//	doWaork(new Coffee);
//	cout << "-------------------------" << endl;
//	doWaork(new Tea);
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}