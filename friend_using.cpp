#include <iostream>
#include <string>
using namespace std;
//������Ԫ��
class a{
public:
	void run(S s){
		s.schoolName;
	}
};
using S = school;
class school{
	friend class a;
	string schoolName;
	string schoolType;
	string address;
};

//������Ԫ����
void test(S1 s ){
	s.schoolName;
}
using S1 = school1;
class school1{
	friend void test(school1 s);
	string schoolName;
	string schoolType;
	string address;
};

