#include <iostream>
#include <string>
using namespace std;

class principal{
	string name;
public:
	principal(string sname)
	{
		this->name = sname;
	}
	~principal(){
		cout << "����ʦ�°���" << endl;
	}
};

class school{
public:
	string schoolName;
	string schoolType;
	string address;
	principal *master;
	~school(){
		cout << schoolName << "ѧУ�ż���" << endl;
		delete master;
	}
	school(string schoolName, string schoolType, string address)
	{
		cout << "��ͨ���캯��" << endl;
		this->schoolName = schoolName;
		this->schoolType = schoolName;
		this->address = address;
		master = new principal("����ʦ");
	}
	school(const school&p) :schoolName(p.schoolName), schoolType(p.schoolType), address(p.address){
		cout << this->schoolName << "������" << endl;
		//master = new principal(*(p.master));
	}
	//Ĭ�ϵ��ƶ����죬��Ĭ�ϵĿ�������Ч��һ��
	school(school&& other):schoolName(other.schoolName), schoolType(other.schoolType), address(other.address)
	{
		cout << "�ƶ����캯��" << endl;
		master = other.master;
		other.master = NULL;
	}
};
school getschool(){
	school s2("����ʯ�ʹ�ѧ", "��ѧ", "����");
	return s2;
}
int main()
{
	school s1(getschool());//getschool()���ص���һ����ʱ����  ����53�н���֮��  ���̱�������
	return 0;
}
