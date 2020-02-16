#include <iostream>
#include <string>
#include <vector>
using namespace std;
//ģ��ʵ��ջ��������  push pop top size empty
//ģ������һ���ô����ǿ�����ͷ�ļ��ж���
template<class T> class L_stack{
	std::vector<T> arr;
public:

	void push(T&& obj){
		arr.push_back(obj);//�ŵ�ʱ�������һ����
	}
	void pop(){
		arr.pop_back();//���������һ��
	}
	T& top(){
		return arr.back;//��������Ԫ��  end �����һ������һ��
	}
	size_t size(){
		return arr.size();
	}
	bool empty(T&){
		return arr.empty();
	}
};
int main(){
	L_stack<int> l;
	l.push(5);//�ǳ������õĳ�ʼֵ��������ֵ�������T&& obj
	l.push(6);
	l.push(7);
	cout << l.size() << endl;
}

