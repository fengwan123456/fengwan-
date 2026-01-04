#include<iostream>
#include<string>
using namespace std;



class  CPU
{
public:
	virtual void calulate() = 0;
};

class  VideoCard
{
public:
	virtual void display() = 0;
};

class  Memory
{
public:
	virtual void storage() = 0;
};



class Computer
{
public:
	Computer(CPU*cpu,VideoCard*vc,Memory*memory)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_memory = memory;
	}
	void work()
	{
		m_cpu->calulate();
		m_vc->display();
		m_memory->storage();
	}
	//提供析构函数释放3个电脑零件
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_memory != NULL)
		{
			delete m_memory;
			m_memory = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
	}

private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_memory;




};
class IntelCPU :public CPU
{
public:
	virtual void calulate()
	{
		cout << "因特尔cpu计算了" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "因特尔显卡开始显示了" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "因特尔内存条开始存储了" << endl;
	}
};


//联想
class LenovoCPU :public CPU
{
public:
	virtual void calulate()
	{
		cout << "Lenovocpu计算了" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo显卡开始显示了" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo内存条开始存储了" << endl;
	}
};

void test01()
{
	CPU *intelCpu= new IntelCPU;
	VideoCard* intelcard = new IntelVideoCard;
	Memory* intelmem = new IntelMemory;

	Computer* computer1 = new Computer(intelCpu, intelcard, intelmem);
	computer1->work();
	delete computer1;

}

int main()
{
	test01();
	system("pause");
	return 0;
}