#include<iostream>
using namespace std;

//ͨ����������ʵ�����Ͳ�ͬ��������ͬ�ĺ���
//int Max(int a, int b)
//{
//	return a > b ? a : b;
//}
//char Max(char a, char b)
//{
//	return a > b ? a : b;
//}
//double Max(double a, double b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	cout << Max(20,436) << endl;
//	cout << Max('F', 'V') << endl;
//	cout << Max(20.434, 436.545) << endl;
//		return 0;
//}
//ȱ�㣺��������̶�̫��



//��ģ����ʵ��

//template <class type>
template<typename type>

type Max(type a, type b)
{
	cout << typeid(type).name() << endl;//���type������
	return a > b ? a : b;
}


class student
{
public:
	student(char* name, int age)
	{
		strcpy(m_name, name);
		m_age = age;
	}
public:
	friend ostream& operator<<(ostream& out, const student& s);

	bool operator>(const student& s)
	{
		return m_age > s.m_age;
	}

private:
	char m_name[20];
	int m_age;
};

 ostream& operator<<(ostream& out, const student& s)
{
	 cout <<s.m_name << "��" << s.m_age << endl;
	 return out;
}

int main()
{
	cout << Max(20, 436) << endl;
	cout << Max('F', 'V') << endl;
	cout << Max(20.434, 436.545) << endl;
	cout<<Max(student("����",18),student("����",20))<<endl ;
	return 0;
}