#include <iostream>
#include <string>
using namespace std;
class CFruit{
public:
	virtual ~CFruit();
};
CFruit::~CFruit(){
	cout << "����CFruit����������" << endl;
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
	cout << "����CApple�����������" << endl;
}
void func(CFruit *pa){
	delete pa;
}
int main(){
	CApple *p = new CApple(20);
	func(p);
}