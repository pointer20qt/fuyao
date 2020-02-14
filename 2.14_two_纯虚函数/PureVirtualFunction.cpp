#include <iostream>
#include <string>
using namespace std;
class CPoint {
public:
	CPoint(float w, float h);
	virtual float getArea() = 0;
private:
	float m_w, m_h;
};
CPoint::CPoint(float w, float h)
{
	m_w = w;
	m_h = h;
}
class CRect :public CPoint{
public:
	CRect(float w, float h);
	float getArea();
private:
	float m_w, m_h;
};
CRect::CRect(float w, float h) :CPoint(w, h){
	m_w = w;
	m_h = h;
}
float CRect::getArea(){
	cout << "调用CRect类的getArea的成员函数" << endl;
	return m_w*m_h;
}
class CTrigon :public CPoint
{
public:
	CTrigon(float f, float h);
	float getArea();
private:
	float m_f, m_h;
};
CTrigon::CTrigon(float f, float h) :CPoint(f, h){
	m_f = f;
	m_h = h;
}
float CTrigon::getArea(){
	cout << "调用CTrigon类的getArea的成员函数" << endl;
	return m_f*m_h/2;
}
void disp(CPoint *p){
	cout << "面积为：" << p->getArea() << endl;
}
int main(){
	CRect rect(20, 30);
	CTrigon trigon(30, 10);
	disp(&rect);
	disp(&trigon);
}