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
		cout << "杨老师下班了" << endl;
	}
};

class school{
public:
	string schoolName;
	string schoolType;
	string address;
	principal *master;
	~school(){
		cout << schoolName << "学校放假了" << endl;
		delete master;
	}
	school(string schoolName, string schoolType, string address)
	{
		cout << "普通构造函数" << endl;
		this->schoolName = schoolName;
		this->schoolType = schoolName;
		this->address = address;
		master = new principal("杨老师");
	}
	school(const school&p) :schoolName(p.schoolName), schoolType(p.schoolType), address(p.address){
		cout << this->schoolName << "建立了" << endl;
		//master = new principal(*(p.master));
	}
	//默认的移动构造，和默认的拷贝构造效果一样
	school(school&& other):schoolName(other.schoolName), schoolType(other.schoolType), address(other.address)
	{
		cout << "移动构造函数" << endl;
		master = other.master;
		other.master = NULL;
	}
};
school getschool(){
	school s2("东北石油大学", "大学", "大庆");
	return s2;
}
int main()
{
	school s1(getschool());//getschool()返回的是一个临时对象  会在53行结束之后  立刻被析构掉
	return 0;
}
