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


////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
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


////////////////////////////////////////////////////////////////////////////////////////////////////////////
//class A
//{
//public:
//	A(int a = 0) :_a(a)
//	{}
//	virtual void show()//�����ຯ���������麯��
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//class B :public A
//{
//public:
//	B(int a, int b = 0) :A(a), _b(b)
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
//	B b(20, 30);
//	p = &b;
//	p->show();//ͨ�����������Է��֣������ຯ���������麯����ʱ������pָ��B��ʱ�򣬻�ȥ����B�����show()������
//	          //һ������£������ָ��ֻ�ܵ��û���ĺ��������ڻ����ж������麯���󣬿���ͨ�������ָ��ȥ����������ĺ�����
//	          //������ͨ��ͬһ�ַ���ȥ����ͬһ�����в�ͬ����麯����ʵ�ֲ�ͬ�Ĺ��ܣ�����Ƕ�̬�ԡ�     
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ʵ��ԭ��
class A
{
public:
	A()
	{}
	virtual void fun()//�����ຯ���������麯�� ,��������麯��ʱ���ṹ��һ���麯��ָ�룬ֻ��һ��������������ŵ����麯���ĵ�ַ
	{
		cout << "A:��fun()" << endl;
	}
	virtual void show()
	{
		cout << "A::show()" << endl;
	}
	virtual void print()
	{
		cout << "A::print()" << endl;
	}
private:
	int _a;
};


class A1
{
public:
	A1()
	{}
	virtual void fun()
	{
		cout << "A1:��fun()" << endl;
	}
	virtual void show()
	{
		cout << "A1::show()" << endl;
	}
	virtual void print()
	{
		cout << "A1::print()" << endl;
	}
private:
	int _a1;
};



class B :public A,public A1
{
public:

	B()
	{}
	//void show()//�ڹ���������ʱ����������ĳ��������д�ˣ��ͻ�����д����������ĵ�ַȥ�滻����������Ӧ�����ĵ�ַ��
	//{
	//	cout << _b << endl;
	//}
	virtual void fun()
	{
		cout << "D:��fun()" << endl;
	}
	virtual void show()
	{
		cout << "D::show()" << endl;
	}
	virtual void print()
	{
		cout << "D::print()" << endl;
	}

private:
	int _b;
};


typedef void(*vfptr)();

void printvtable(vfptr vtable[])
{
	cout << "����ַ��" << vtable << endl;
	for (int i = 0; vtable[i]; ++i)
	{
		vtable[i]();
	}
}
int main()
{
	B b;
	vfptr* _vfptr = (vfptr*) *(int*)&b;
	printvtable(_vfptr);
}





////1��ʲô�Ƕ�̬��
///////////��̬�ǲ�ͬ�̳й�ϵ�������ȥ����ͬһ������������ͬ�������Ϊ��
////2��ʲô�����ء���д(����)���ض���(����)?
////////////���أ���һ�����У���������ͬ�������б�ͬ
////////////��д�����ǣ�����ͬһ���壬��ͬ��֮�䣬��vritual���������������б�����ֵ����ͬ����Э��������������⣩
////////////�ض��壨���أ�����ͬһ���壬��ͬ��֮�䣬��vritual����������ͬ�������б������ǡ�
////3����̬��ʵ��ԭ��
////////////�������еĺ�������Ϊ�麯��������������ʱ�ṹ���һ���麯��ָ�룬ָ��һ��������д�ŵ����麯���ĵ�ַ�������������ж�ĳ��
////////�麯��������дʱ��������д�ĺ�����ַȥ�滻�������Ӧ�����ĵ�ַ���Ӷ��ﵽ���Ե�����д��ĺ����Ĺ��ܡ�
////4��inline�����������麯����
////////////�𣺲��ܣ���Ϊinline����û�е�ַ���޷��ѵ�ַ�ŵ��麯�����С�
////5. ��̬��Ա�������麯����
////////////�𣺲��ܣ���Ϊ��̬��Ա����û��thisָ�룬ʹ������::��Ա�����ĵ��÷�ʽ�޷������麯�������Ծ�̬��Ա�����޷��Ž��麯����
////6. ���캯���������麯����
////////////�𣺲��ܣ���Ϊ�����е��麯����ָ�����ڹ��캯����ʼ���б�׶βų�ʼ����