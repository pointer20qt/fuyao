#include <iostream>
#include <string>
#include <vector>
using namespace std;
//模拟实现栈，先入后出  push pop top size empty
//模板类有一个好处就是可以再头文件中定义
template<class T> class L_stack{
	std::vector<T> arr;
public:

	void push(T&& obj){
		arr.push_back(obj);//放的时候往最后一个放
	}
	void pop(){
		arr.pop_back();//弹出往最后一个
	}
	T& top(){
		return arr.back;//返回最后的元素  end 是最后一个的下一个
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
	l.push(5);//非常量引用的初始值必须是左值解决方法T&& obj
	l.push(6);
	l.push(7);
	cout << l.size() << endl;
}

