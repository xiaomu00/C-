#define _CRT_SECURE_NO_WARNINGS 1

//��������£�

#include<iostream>
#include<stdlib.h>
using namespace std;



//
//class test
//{
//public:
//
//	//���캯��
//	test()//���ֱ����������ͬ
//	{
//		cout << "Create test Obj:" << this << endl;
//	}
//	test(int data)//���ֱ����������ͬ
//	{
//		m_data = data;
//		cout << "Create test Obj:" << this << endl;
//	}
//	//������������
//	test(const test &t)//�﷨Ҫ�󣬱���Ҫ���� 
//	{
//		m_data = t.m_data;
//		cout << "copy   test Obj:" << this << endl;
//	}//�÷���
//	 //�ö����ʼ������ʱ
//	//��������Ϊ���󴫵�ʱ
//	//�Զ�����Ϊ����ֵʱ
//
//
//
//	//��������
//	~test()
//	{
//		cout << "Free test Obj:" << this << endl;
//	}
//
//
//
//	int getdata()
//	{
//		return m_data;
//	}
//
//	void print()
//	{
//		cout << m_data << endl;
//	}
//private:
//	int m_data;
//
//};
//
//
//
//
//
//test fun(test t)
//{
//	int m = t.getdata();
//	//cout <<"m="<<m << endl;
//	test n(m);
//	return n;
//}
//
//int main()
//{
//    test t0;
//    test t1(100);
//	test t2(t1);
//	/*
//	test t2 = t1;  �ȼ��� test t2(t1);   ��t1 ��ʼ��t2
//	
//	test t2;
//	t2 = t1;//��ֵ
//	*/
//
//	//fun(t1);
//
//   return 0;
//}




//
//class test
//{
//public:
//	explicit test(int d = 0) :m_data(d)//����explicit��(ֻ�����ڹ��캯���Ϳ������캯��)����������ʽת��������t=200����Ҫ�븳��ͬ���͵�ֵ��������ʽת����t=(test)200��
//	{
//		cout << "Create tset Obj : " << this << endl;
//	}
//
//	test(const test &t)
//	{
//		m_data = t.m_data;
//		cout << "Copy   tset Obj : " << this << endl;
//	}
//
//	//��ֵ�����Ⱥ�����
//	test& operator=( const test &t)
//	{
//		cout << "Assign : " << this <<"="<< &t << endl;
//		if (this != &t)
//		{
//			m_data = t.m_data;
//		}
//		return *this;
//	}
//
//
//	~test()
//	{ 
//		cout << "Free   test Obj : " << this << endl;
//	}
//private:
//	int m_data;
//};
//
//int main()
//{
//	test t1(10);//���캯����ʼ������t
//
//	//test t2(t1);//��������
//
//	//t1 = (test)200;//���� explicit��ֻ������ʽת����
//
//	//test t3;
//	//t3 = t1;  //��t��t3��ֵ���ȼ���  t3.operator=(t);
//
//	test t3, t4;
//	t4 = t3 = t1;//���ȸ�ֵ����Ҫ��ֵ�������������(��ǰ����)����
//	
//	return 0;
//}










class data
{
public:
	//�޲ι��캯��
	data()
	{
		m_year = 2000;
		m_month = 00;
		m_day = 00;
	}
	//���ι��캯��
	data(int year,int month,int day)
	{
		m_year = year;
		m_month = month;
		m_day = day;
	}

	void Show()const
	{
		cout << m_year << "-" << m_month << "-" << m_day << endl;
	}

private:
	int m_year;
	int m_month;
	int m_day;
};

int main()
{
	data d1;//�����޲ι��캯����ע�⣺���ܼ�����
	data d2(2020, 6, 4);//���ô��ι��캯��
	
	d1.Show();
	d2.Show();
}
