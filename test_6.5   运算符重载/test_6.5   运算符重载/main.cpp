
#include<iostream>
#include<stdbool.h>
using namespace std;

//class date
//{
//public:
//	date()
//	{
//	}
//
//	date(int year, int month, int day) 
//		:
//		m_year(year), 
//		m_month(month),
//		m_day(day)           //��ʼ���б�
//	{
//	}
//
//private:
//	int m_year;
//	int m_month;
//	int m_day;
//};

//
//int main()
//{
//	date d0;
//	date d1(2020, 6, 5);
//    return 0;
//}



//static ���εľ�̬��Ա

//class test
//{
//public:
//	test()
//	{
//	}
//
//	int  gettest()
//	{
//		return m_a;
//	}
//
//private:
//	static int m_a;//��ͬһ����ʵ�����˲�ͬ�Ķ���ʱ����̬�����������κζ���ֻ��һ�ݣ������Ա��κζ�����
//	               //��̬��������Ҫʵ��������Ϳ��Ե���
//	               //��̬����ֻ�ܵ��þ�̬���������ܵ�����ͨ��������̬����û��thisָ��
//
//
//};
//int test::m_a = 10;//��̬��Ա������������г�ʼ��
//
//int main()
//{
//	 test t1;
//	 cout << "a:" << t1.gettest() << endl;
//
//	 return 0;
//} 




//�����������

//class test;
//test operator+(int a, test& t);
//
//
//class test
//{
//	friend test operator+(int a, test& t);
//public:
//	test()
//	{
//		cout << "���ù��캯��" << this << endl;
//	}
//
//	test(int a = 0, int b=0 ):m_a(a),m_b(b)
//	{
//		cout << "���ù��캯��" << this << endl;
//	}
//	test(test &t)
//	{
//		cout << "���ÿ������캯��" << this << endl;
//		m_a = t.m_a;
//		m_b = t.m_b;
//	}
//
//	~test()
//	{
//		cout << "������������" << this << endl;
//	}
//
//public://���������
//
//	//��=������
//	test& operator=(const test &t)
//	{
//		cout << "���ø�ֵ����" << this << endl;
//		if (&t != this)
//		{
//			m_a = t.m_a;
//			m_b = t.m_b;
//		}
//		return *this;
//	}
//
//	//��+������  ��+��
//	test operator+(test &t)
//	{
//		cout << "���üӷ����غ���" << this << endl;
//		return test(m_a + t.m_a, m_b + t.m_b);
//	}
//	//��+������  ��+����
//	test operator+(int a)
//	{
//		cout << "���üӷ����غ���" << this << endl;
//		return test(m_a + a, m_b + 0);
//	}
//
//
//
//
//public:
//	void gettest()const
//	{
//		cout << m_a << "  " << m_b << endl;
//	}
//private:
//	int m_a;
//	int m_b;
//
//};
//
////��+������  ����+��
//test operator+(int a, test& t)
//{
//	cout << "���üӷ����غ���" << &t << endl;
//	return test(t.m_a+a,t.m_b+0);
//}
//
//
//
//int main()
//{
//	test t1(10, 20);
//	test t2(5,25);
//
//	cout << "t1= "; t1.gettest();
//	cout << "t2= "; t2.gettest();
//
//	//test t3 = t2 + t1;
//	//test t3 = t2 + 10;
//	test t3 = 10 + t2;
//	cout << "t3= "; t3.gettest();
//
//	
//	return 0;
//}
//
//class Int;
//ostream& operator<<(ostream &out, const Int &i);
//istream& operator>>(istream &in, const Int &i);
//
//class Int
//{
//public:
//
//	friend ostream& operator<<(ostream &out, const Int &i);
//	friend istream& operator>>(istream &out, Int &i);
//	Int(int a = 0) : m_a(a)
//	{}
//	~Int()
//	{}
//
//private:
//	int m_a;
//};
//
//ostream& operator<<(ostream &out, const Int &i)
//{
//	cout << i.m_a;
//	return out;
//}
//
//istream& operator>>(istream &in,  Int &i)
//{
//	cin >> i.m_a;
//	return in;
//}
//
//int main()
//{
//
//	Int a = 10;
//	Int b;
//
//	//������������
//	cout << "a="<<a <<endl;
//	//�������������
//
//	
//	cin >> b;
//	cout << "b=" << b << endl;
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
//�ܽ�

////�������ʵ��
//class date
//{
////6��Ĭ�ϳ�Ա����
//public:
//	date()
//	{}
//	date(int year, int month, int day)
//		:
//		m_year(year),
//		m_month(month),
//		m_day(day)
//	{}
//	~date()
//	{
//	}
//	date(const date &d)
//	{
//		m_year = d.m_year;
//		m_month = d.m_month;
//		m_day = d.m_day;
//	}
//	date& operator=(const date d)
//	{
//		m_year = d.m_year;
//		m_month = d.m_month;
//		m_day = d.m_day;
//		return *this;
//	}
//
//	date* operator&()
//	{
//		return this;
//	}
//	const date* operator&()const
//	{
//		return this;
//	}
//
////////////////////////////////////////////////////////////////////////////////////
////���������
//
//public:
//	// ����+���� 
//	date operator+(int day)
//	{
//		return date(m_year, m_month, m_day + day);
//	}
//
//	// ����-����  
//	date operator-(int day)
//	{
//		return date(m_year, m_month, m_day - day);
//	}
//
//	// ����+=����    
//	date& operator+=(int day)
//	{
//		m_day = m_day + day;
//		return *this;
//	}
//
//	// ����-=���� 
//	date& operator-=(int day)
//	{
//		m_day = m_day - day;
//		return *this;
//	}
//
//	
//	// ǰ��++ 
//	date& operator++()
//	{
//		m_day++;
//		return *this;
//	}
//
//	// ����++    
//	date operator++(int)
//	{
//		date th = *this;
//		++*this;
//		return th;
//	}
//	// ǰ��--    
//	date& operator--()
//	{
//		m_day--;
//		return *this;
//	}
//
//	// ����--
//	date operator--(int)
//	{
//		date th = *this;
//		--*this;
//		return th;
//	}
//	
//	// >��������� 
//	bool operator>(date &d)
//	{
//		return m_day > d.m_day;
//	}
//
//	// <���������   
//	bool operator < (date &d)
//	{
//		return !(*this>d);
//	}
//
//	// ==���������  
//	bool operator ==(date &d)
//	{
//		return m_day ==d.m_day;
//	}
//
//	// !=���������     
//	bool operator !=(date &d)
//	{
//		return !(*this == d);
//	}
//
//
//	// >=���������         
//	bool operator>=(date &d)
//	{
//		return m_day >= d.m_day;
//	}
//
//	// <=���������   
//	bool operator<=(date &d)
//	{
//		return m_day <= d.m_day;
//	}
//
//
//public:
//	void getdate()const
//	{
//		cout << m_year << "-" << m_month << "-" << m_day << endl;
//	}
//
//private:
//	int m_year;
//	int m_month;
//	int m_day;
//
//};
//
//int main()
//{
//	date d1(2020, 6, 11);
//	d1.getdate();
//	date d2(2020, 6, 10);
//	d2.getdate();
//
//	if (d1!=d2)
//	{
//		cout << "d1!=d2" << endl;
//	}
//	else 
//		cout << "d1==d2" << endl;
//	return 0;
//}