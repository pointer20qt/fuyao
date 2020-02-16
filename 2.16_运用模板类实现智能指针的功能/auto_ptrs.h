#pragma once
//��Ա����
//���캯�������µ�auto_ptr
//������������auto_ptr �ͱ�����Ķ���
//operator=����һauto_ptr ת������Ȩ
//�۲���
//get ����ָ�򱻹�������ָ��
//operator*  operator->���ʱ��������
//reset ���ٱ��������
//release �ͷű�������������Ȩ
//���������obj��L_autoptr�Ķ���
template<class T>
class L_autoptr{
	T*obj = nullptr;
public:
	//���������ĵ�ַ������
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

