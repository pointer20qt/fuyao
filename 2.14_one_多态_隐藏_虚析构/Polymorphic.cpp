#include <iostream>
#include <string>
using namespace std;
class CPoint{
public:
	CPoint(float w, float h);
	virtual float getArea();
private:
	float m_w, m_h;
};
CPoint::CPoint(float w, float h)
{
	m_w = w;
	m_h = h;
}
float CPoint::getArea()
{
	return 0;
}
class CRect :public CPoint{
public:
	CRect(float w, float h);
	virtual float getArea();
private:
	float m_w, m_h;
};
CRect::CRect(float w, float h) :CPoint(w, h){
	m_w = w;
	m_h = h;
}
float CRect::getArea()
{
	return m_w*m_h;
}
void disp(CPoint &p){
	cout << "Ãæ»ýÎª£º" << p.getArea() << endl;
}

void main()
{
	CRect rt(10.0, 5.0);
	disp(rt);
}

