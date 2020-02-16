#include "auto_ptrs.h"
#include <iostream>
using namespace std;
class tool{
public:
	tool(){
		cout << "tool被构造了" << endl;
	}
	~tool(){
		cout << "tool被析构了" << endl;
	}
	int value = 0;
};
int main(){
	L_autoptr<tool> ptr{ new tool };
	cout<<(*ptr).value;
}
