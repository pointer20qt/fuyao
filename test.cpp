#include <iostream>
#include <string>
using namespace std;
//当是对象的时候a.operator=(b)    b.operator=(tem)这个是浅拷贝叫做复制赋值函数
template<class T>void Fswap(T& a, T&b){
	//tem 里自己的p   a里自己的p  b里自己的p
	T tem = move(a);  //这出现新的对象会出现浅拷贝的问题 走拷贝构造函数
	//复制赋值函数
	a = move(b);   //a.operator=(b)
	//b里是tem的p
	b = move(tem);  //b和tem 的地址是相同的 当tem析构后 b再析构就会出现问题
}
class tool{
public:
	tool(){
		cout << "创建了tool对象" << endl;
	}
	~tool(){
		cout << "析构了tool对象" << endl;
	}
};
class A{
public:
	int value = 0;
	tool* t;
	A(int v){
		t = new tool;
		value = v;
	}
	//浅拷贝解决方案
	A(const A& other){
		t = new tool;
		value = other.value;
		cout << "拷贝构造A" << endl;
	}

	A(A&& other){
		t = other.t;
		other.t = nullptr;
		value = other.value;
		cout << "移动构造A" << endl;
	}
	//复制赋值运算符
	A& operator=(const A& other){
		delete t;
		t = new tool;
		value = other.value;
		return *this;
	}
	//移动赋值运算符
	A& operator=(A&& other){
		t = other.t;
		other.t = nullptr;
		value = other.value;
		cout << "移动赋值A" << endl;
		return *this;
	}
	~A(){
		delete t;
	}
	//重载一个类型  目的是可以Fswap(a1.value, a2.value);写成Fswap(a1, a2);
	operator int(){      //为什么不用写返回值因为你要转成int类型
		cout << "A转换为int类型" << endl;
		return value;
	}
};
int main()
{
	A a1(34), a2(12);
	Fswap(a1, a2);
	cout << a1 << "   " << a2 << endl;
}


