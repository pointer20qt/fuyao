#include <iostream>
#include <string>
using namespace std;
class CFruit{
public:
	virtual ~CFruit();
};
CFruit::~CFruit(){
	cout << "调用CFruit类析构函数" << endl;
}
class CApple :public CFruit{
public:
	CApple(int size);
	virtual ~CApple();
private:
	char *pbuf;
};
CApple::CApple(int size){
	pbuf = new char[size];
}
CApple::~CApple(){
	delete[] pbuf;
	cout << "调用CApple类的析构函数" << endl;
}
void func(CFruit *pa){
	delete pa;
}
int main(){
	CApple *p = new CApple(20);
	func(p);
}