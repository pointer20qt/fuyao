#include "auto_ptrs.h"
#include <iostream>
using namespace std;
class tool{
public:
	tool(){
		cout << "tool��������" << endl;
	}
	~tool(){
		cout << "tool��������" << endl;
	}
	int value = 0;
};
int main(){
	L_autoptr<tool> ptr{ new tool };
	cout<<(*ptr).value;
}
