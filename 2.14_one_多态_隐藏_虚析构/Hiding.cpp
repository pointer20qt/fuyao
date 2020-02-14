#include <iostream>
#include <string>
using namespace std;
class CAnimal{
public:
	CAnimal(int n);
private:
	int a;
};
CAnimal::CAnimal(int n)
{
	a = n;
	cout << "调用CAnimal类构造函数" << endl;
}
class CMammal :virtual public CAnimal{
public:
	CMammal(int x, int y);
private:
	int b;
};
CMammal::CMammal(int x, int y) :CAnimal(x)
{
	b = y;
	cout << "调用CMammal类构造函数" << endl;
}
class CCattle :virtual public CAnimal{
public:
	CCattle(int x, int y);
private:
	int c;
};
CCattle::CCattle(int x, int y) :CAnimal(x)
{
	c = y;
	cout << "调用CCattle类构造函数" << endl;
}
class CBull :public CMammal, public CCattle
{
public:
	CBull(int x, int y, int z);
private:
	int d;
};
CBull::CBull(int x, int y, int z) :CMammal(x, y), CCattle(x, y), CAnimal(x){
	d = z;
	cout << "调用CBll类构造函数" << endl;
}
int main(){
	CBull bull(10, 20, 30);
}



