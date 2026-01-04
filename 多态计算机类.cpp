#include<iostream>
#include<string>

using namespace std;

//º∆À„∆˜¿‡
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		else
//		{
//			return m_Num1 / m_Num2;
//		}
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//∂‡Ã¨
class AbstractCalculator
{
public:
	virtual int getResult() 
	{
		return 0;
	 }

	int m_A;
	int m_B;
};
class AddCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_A + m_B;
	}
};
class SubCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_A - m_B;
	}
};
class MulCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_A * m_B;
	}
};

//
//void test01()
//{
//	Calculator c;
//	c.m_Num1 = 20;
//	c.m_Num2 = 10;
//	cout << c.getResult("+") << endl;
//	cout << c.getResult("-") << endl;
//	cout << c.getResult("*") << endl;
//	cout << c.getResult("/") << endl;
//}
void test02()
{
	AbstractCalculator* abc = new AddCalculator;
	abc->m_A = 10;
	abc->m_B = 10;
	cout << abc->getResult() << endl;
	delete abc;
	abc = nullptr;

	abc = new SubCalculator;
	cout << abc->getResult() << endl;
	delete abc;
	abc = nullptr;


	abc = new MulCalculator;
	cout << abc->getResult() << endl;
	delete abc;


}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}