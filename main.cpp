#include<iostream>
using namespace std;

//ģ�������  �ݹ���
//print�Ĺ��ܣ�����������������ȫ�������Ļ��

/*void Lprint(const char* f){
cout << f << endl;
Lprint();
}
void Lprint(int f,const char* d){
cout << f << endl;
Lprint(d);
}
void  Lprint(double f, int d1, const char* d2){
cout << f << endl;
Lprint(d1,d2);
}
void Lprint(int f,double d1,int d2,const char* d3){
cout << f << endl;
Lprint(d1,d2,d3);
}*/
void Lprint(){
	cout << "�ݹ����ս�" << endl;
}
template<class T, class... args> void Lprint(T f, args... d){
	cout << f << endl;
	Lprint(d...);
}
template<class T, class T2, class T3, class... args> void Lprint_3(T f, T2 f2, T3 f3, args... d){
	cout << "��һ��" << f << "�ڶ���" << f2 << "������" << f3 << endl;
	Lprint_3(d...);
}

