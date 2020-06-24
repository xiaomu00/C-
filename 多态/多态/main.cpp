#include<iostream>
using namespace std;


////��������
//class Point
//{
//public:
//	friend ostream& operator<<(ostream&out, Point &p);
//public:
//	Point(float x = 0, float y = 0) :_x(x), _y(y)
//	{}
//	void setPoint(float a, float b)//��������ֵ
//	{
//		_x = a;
//		_y = b;
//	}
//	float getx()
//	{ return _x; }
//	float gety()
//	{return _y;}
//private:
//	float _x, _y;
//};
//ostream& operator<<(ostream&out, Point &p)
//{
//	cout << "[" << p._x << "," << p._y << "]";
//	return out;
//}
//
//
////Բ��
//class Circle :public Point
//{
//public:
//	friend ostream& operator<<(ostream&out, Circle c);
//public:
//	Circle(float x, float y, float r) :Point(x, y), _r(r)
//	{}
//	Circle(Point& p, float r) :Point(p.getx(),p.gety()), _r(r)
//	{}
//	void setC(float x, float y, float r)
//	{
//		setPoint(x,y);
//		_r = r;
//	}
//	float getr()
//	{return _r;}
//	float S()//����Բ���
//	{return  3.14 * _r*_r;}
//private:
//	float _r;
//};
//ostream& operator<<(ostream&out, Circle c)
//{
//	cout << "O��" << c.getx()<<" "<<c.gety()<<endl;
//	cout << "H��" << c._r << endl;
//	return out;
//}
//
//
//
////Բ������
//class Cylinder :public Circle
//{
//public:
//	friend ostream& operator<<(ostream&out, Cylinder cy);
//public:
//	Cylinder(float x, float y, float r, float h) :Circle(x, y, r), _h(h)
//	{}
//	Cylinder(Circle c, float h) :Circle(c.getx(), c.gety(), c.getr()), _h(h)
//	{}
//
//	void setCy(float x, float y, float r, float h)
//	{
//		setC(x,y,r);
//		_h = h;
//	}
//	float geth()
//	{
//		return _h;
//	}
//	float S()//��������
//	{
//		return 2 * 3.14*getr()*getr() + 2 * 3.14*getr()*_h;
//	}
//private:
//	float _h;
//};
//ostream& operator<<(ostream&out, Cylinder cy)
//{
//	cout << "O��" << cy.getx() << " " << cy.gety() << endl;
//	cout << "R��" << cy.getr() << endl;
//	cout << "H��" << cy._h << endl;
//	return out;
//}
//int main()
//{
//	Cylinder cy(1.1,2.2,3.3,4.4);
//	cout << cy.getx() << " " << cy.gety() << " " << cy.getr() << " " << cy.geth() << endl;
//	cy.setCy(5.5,6.6,7.7,8.8);
//	cout << cy << endl;
//	Point p(1.3, 2.4);
//	Circle c(p,6.8);
//	Cylinder cy1(c, 9.9);
//
//	cout << "��Բ�����" << cy.Circle::S() << endl;
//	cout << cy1 << endl;
//	cout << "�������" << cy.S() << endl;//ע�⣺�˴���S()����������S()�����������أ����ǵĺ���������������ͬ���ڲ�ͬ�����У�����ͬ�����ǡ�
//	return 0;
//}



//��̬������
//class A
//{
//public:
//	A(int a = 0) :_a(a)
//	{}
//	void show()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//class B:public A
//{
//public:
//	B(int a,int b = 0) :A(a),_b(b)
//	{}
//	void show()
//	{
//		cout << _b << endl;
//	}
//private:
//	int _b;
//};
//int main()
//{
//	A a(10);
//	A *p;
//	p = &a;
//	p->show();
//
//	B b(20,30);
//	p = &b;
//	p->show();//ͨ�����������Է��֣�����pָ��B��ʱ�򣬲�û��ȥ����B�����show()����
//}

class A
{
public:
	A(int a = 0) :_a(a)
	{}
	virtual void show()//�����ຯ���������麯��
	{
		cout << _a << endl;
	}
private:
	int _a;
};
class B :public A
{
public:
	B(int a, int b = 0) :A(a), _b(b)
	{}
	void show()
	{
		cout << _b << endl;
	}
private:
	int _b;
};
int main()
{
	A a(10);
	A *p;
	p = &a;
	p->show();

	B b(20, 30);
	p = &b;
	p->show();//ͨ�����������Է��֣������ຯ���������麯����ʱ������pָ��B��ʱ�򣬻�ȥ����B�����show()������
	          //һ������£������ָ��ֻ�ܵ��û���ĺ��������ڻ����ж������麯���󣬿���ͨ�������ָ��ȥ����������ĺ�����
	          //������ͨ��ͬһ�ַ���ȥ����ͬһ�����в�ͬ����麯����ʵ�ֲ�ͬ�Ĺ��ܣ�����Ƕ�̬�ԡ�     
}