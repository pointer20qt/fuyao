#include <iostream>
#include <string>
using namespace std;
//���Ƕ����ʱ��a.operator=(b)    b.operator=(tem)�����ǳ�����������Ƹ�ֵ����
template<class T>void Fswap(T& a, T&b){
	//tem ���Լ���p   a���Լ���p  b���Լ���p
	T tem = move(a);  //������µĶ�������ǳ���������� �߿������캯��
	//���Ƹ�ֵ����
	a = move(b);   //a.operator=(b)
	//b����tem��p
	b = move(tem);  //b��tem �ĵ�ַ����ͬ�� ��tem������ b�������ͻ��������
}
class tool{
public:
	tool(){
		cout << "������tool����" << endl;
	}
	~tool(){
		cout << "������tool����" << endl;
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
	//ǳ�����������
	A(const A& other){
		t = new tool;
		value = other.value;
		cout << "��������A" << endl;
	}

	A(A&& other){
		t = other.t;
		other.t = nullptr;
		value = other.value;
		cout << "�ƶ�����A" << endl;
	}
	//���Ƹ�ֵ�����
	A& operator=(const A& other){
		delete t;
		t = new tool;
		value = other.value;
		return *this;
	}
	//�ƶ���ֵ�����
	A& operator=(A&& other){
		t = other.t;
		other.t = nullptr;
		value = other.value;
		cout << "�ƶ���ֵA" << endl;
		return *this;
	}
	~A(){
		delete t;
	}
	//����һ������  Ŀ���ǿ���Fswap(a1.value, a2.value);д��Fswap(a1, a2);
	operator int(){      //Ϊʲô����д����ֵ��Ϊ��Ҫת��int����
		cout << "Aת��Ϊint����" << endl;
		return value;
	}
};
int main()
{
	A a1(34), a2(12);
	Fswap(a1, a2);
	cout << a1 << "   " << a2 << endl;
}


