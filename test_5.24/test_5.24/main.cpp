#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>//���������
using namespace std;//�����ռ�


//1.�������
//int main()
//{
//	int a;
//	char b;
//	double c ;
//
//	cout << "��ֱ�����a b c ��ֵ:"<< endl;
//	//����
//	cin >> a;//cout:�����
//	cin >> b;
//	cin >> c;
//
//	//���
//	cout << "a=" << a << endl;//��ȡ��
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//	return 0;
//}
//

//2.�����ռ�
//namespace A
//{
//	void fun()
//	{
//		cout << "123";
//	}
//};
//namespace B
//{
//	void fun()
//	{
//		cout << "456";
//	}
//};
//
//using namespace A;//�����ĸ��͵����ĸ�
//int main()
//{
//	fun();
//}

//3.ȫȱʡ����
//void TestFunc(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//
//int main()
//{
//	TestFunc();
//}



//4.��������

//int Max(int a, int b)//������������Ϊ��?Max@@YAHHH@Z 
//{
//	return a>b?a:b;
//}
//char Max(char a,char b)//������������Ϊ��?Max@@YADDD@Z  
//{
//	return a>b ? a : b;
//}
//double Max(double a, double b)
//{
//	return a>b ? a : b;
//}
//int main()
//{
//	Max(5,8);
//	Max('a', 'h');
//	Max(1.45, 3.45);
//	return 0;
//}


//5.����
//int main()
//{
//	int a = 10;
//	int &b = a;//��aȡ�������һ������b,b��a����ͬһ���ڴ�ռ䣬��û�и�b���ٿռ�
//	//a=100;�� b=100;�ȼۣ�a��b�����Ըı���ڴ���е�����
//}

//�÷���������������������ֵ
////C����ʵ�ַ���
//void Exchange(int *a, int* b)
//{
//	int m = *a;
//	*a = *b;
//	*b = m;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Exchange(&a,&b);
//}
//���ñ���ʵ�ַ���
//void Exchange(int &a, int &b)
//{
//	int m = a;
//	a = b;
//	b = m;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Exchange(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b<< endl;
//}


//������ const
//int main()
//{
//	const int a = 10;
//
//}

//
//struct student
//{
//	char name[10];
//	int age;
//};
//
//int main()
//{
//	int a = 10;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//ָ�������
//	int *p = &a;
//	int* &q = p;
//
//	//���������
//	int(&brr)[10] = arr;//&brrҪ�����ţ���Ϊ&���ȼ�û��[]�ߡ�
//
//	//�ṹ������
//	student s;
//	student &rs = s;
//
//}

//��������
//inline void Exchange(int *a, int* b)
//{
//	int m = *a;
//	*a = *b;
//	*b = m;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Exchange(&a,&b);
//}

//auto�ؼ���
int main()
{
	int a = 10;
	auto b = a;//��ʱbҲΪint��

	auto p = &a;//�ȼ���  auto *p = &a;
	auto& c = a;//����

	int s[] = {0,1,2,3,4,5,6,7,8,9};

	for (const auto &b:s)
	{
		cout << b << " ";
	}
	cout << endl;
}