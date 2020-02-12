#include<iostream>
using namespace std;
class People
{
	int age;
	char* name;
public:
	void setage(int age)
	{
		this->age = age;
	}
	int getage()
	{
		return age;
	}
	People()
	{
		name = (char*)malloc(20);
		strcpy(name, "zhong");
	}
	char* getname()
	{
		return name;
	}
	People(int a)
	{

	}
	People(const People& rgh)// 拷贝构造函数（浅拷贝）（深拷贝:主要是为了解决内存被重复释放） 引用  const 常量类型不允许修改
	{
		this->age = rgh.age;
		this->name = (char*)malloc(20);
		strcpy(this->name, rgh.name);
	}
	~People()
	{
		//cout << "give over" << endl;
		free(name);
	}
};
People PrintPeople()//以类的类型作为参数
{
	People rgh;
	rgh.setage(10);
	return rgh;   //传递的方式有两种一种是引用的方式，一种是传值的方式
}
int main()
{
	People p;
	cout << p.getname() << endl;
	People p2(p);
	cout << p2.getname() << endl;
	return 0;
}
