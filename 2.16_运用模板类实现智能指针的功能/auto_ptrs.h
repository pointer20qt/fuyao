#pragma once
//成员函数
//构造函数创建新的auto_ptr
//析构函数销毁auto_ptr 和被管理的对象
//operator=从另一auto_ptr 转移所有权
//观察器
//get 返回指向被管理对象的指针
//operator*  operator->访问被管理对象
//reset 销毁被管理对象
//release 释放被管理对象的所有权
//被管理对象obj是L_autoptr的对象
template<class T>
class L_autoptr{
	T*obj = nullptr;
public:
	//被管理对象的地址传进来
	L_autoptr(T *p) :obj(p){

	}
	~L_autoptr(){
		delete obj;
	}
	L_autoptr() = default;
	L_autoptr(L_autoptr<T>&ptr){
		obj = ptr.obj;
		ptr.obj = nullptr;
	}
	L_autoptr& operator=(L_autoptr<T>&ptr)
	{
		delete obj;
		obj = ptr.obj;
		ptr.obj = nullptr;
		return *this;
	}
	void reset(T* newobj){
		delete obj;
		obj = newobj;
	}
	T* release(){
		auto temp = obj;
		obj = nullptr;
		return temp;
	}
	T& operator*(){
		return *obj;
	}
	T* operator->(){
		return obj;
	}
	T* get(){
		return obj;
	}
};

