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
	People(const People& rgh)// �������캯����ǳ�����������:��Ҫ��Ϊ�˽���ڴ汻�ظ��ͷţ� ����  const �������Ͳ������޸�
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
People PrintPeople()//�����������Ϊ����
{
	People rgh;
	rgh.setage(10);
	return rgh;   //���ݵķ�ʽ������һ�������õķ�ʽ��һ���Ǵ�ֵ�ķ�ʽ
}
int main()
{
	People p;
	cout << p.getname() << endl;
	People p2(p);
	cout << p2.getname() << endl;
	return 0;
}
