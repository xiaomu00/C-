#include<iostream>
#include<list>
#include <functional>  
#include<stdbool.h>
using namespace std;

//int main()
//{
//	list<int>  lt;
//	list<int>  lt2(10,5);
//	list<int>  lt3 = lt2;
//
//	int a[] = {1,2,3,4,5,6,7,8,9};
//	list<int>  lt4(a, a + 9);
//	list<int>  lt5={1,2,3,4,5,6,7,8,9};
//	list<int> lt6(lt4.begin(), lt4.end());
//
//
//	cout << "lt2: ";
//	for (const auto &e : lt2)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	cout << "lt3: ";
//	for (const auto &e : lt3)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	cout << "lt2: ";
//	for (const auto &e : lt4)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	cout << "lt3: ";
//	for (const auto &e : lt5)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//	return 0;
//}


//
//
//int main()
//{
//
//	list<int> lt = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//	/*for (const auto &e : lt)
//	{
//		cout << e << " ";
//	}*/
//
//	//�Լ����������
//	list<int>::iterator i = lt.begin();
//	while (i != lt.end())
//	{
//		cout << *i << " ";
//		i++;
//	}
//	cout << endl;
//
//
//	//�Զ��Ƶ�������
//
//	auto it = lt.begin();
//	while (it != lt.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//
//
//	//�������
//	auto it1 = lt.end();
//	while (it1 != lt.begin())
//	{
//		it1--;
//		cout << *it1 << " ";    //ע�⣺it1--������ŵ�	cout << *it1 << " ";ǰ�档��Ϊlist������end()ָ�����ͷ��㣨���һ��Ԫ�ص�ѡһ���ڵ㣩
//		
//	}
//	cout << endl;
//
//
//	//���������
//	list<int>::reverse_iterator ri = lt.rbegin();
//	while(ri!=lt.rend())
//	{
//		cout << *ri << " ";
//		ri++;
//	}
//	cout << endl;
//
//	 return 0;
//}
template <typename type>
void show(type lt)
{
	list<int>::iterator it = lt.begin();
	while (it != lt.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}



//����ɾ��
//bool my_if(const int& value)
//{
//	return   value > 5;
//}
//int main()
//{
//	list<int> lt{1,2,3,4,5,6,7,8,9};
//	show(lt);
//
//	/*cout << "������Ҫ�����ֵ,��-1����" << endl;
//	int x;
//	while (cin >> x, x != -1)
//	{
//		lt.push_front(x);
//	}
//*/
//
//	cout << "������Ҫɾ����ֵ��" << endl;
//	int x;
//	cin >> x;
//	//list<int>::iterator ir = find(lt.begin(), lt.end(), x);
//	lt.remove(x);
//	cout << "ɾ���������Ϊ��";
//	show(lt);
//
//	cout << "������Ҫ�����λ�ã��Լ�Ҫ�����ֵ��" << endl;
//	int i,m;
//	cin >> i>>m;
//	list<int>::iterator ir = find(lt.begin(), lt.end(), i);
//	lt.insert(ir, m);
//	cout << "����������Ϊ��";
//	show(lt);
//
//
//	//����ɾ��
//	
//
//	lt.remove_if(my_if);
//	cout << "ɾ���������Ϊ��";
//	show(lt);

//	return 0;
//}


//����  ƴ��  ����  ���
//int main()
//{
//	list<int> lt1{ 1, 2, 3, 4, 5 };
//	list<int> lt2{ 4,43,45,2,54,35,5767,234,35,134 };
//
//	cout << "lt1: ";
//	show(lt1);
//	cout << "lt2: ";
//	show(lt2);
//
//
//	//����
//	lt1.swap(lt2);
//	cout << "������" << endl;
//	cout << "lt1: ";
//	show(lt1);
//	cout << "lt2: ";
//	show(lt2);
//
//	///ƴ��
//	list<int> ::iterator i=lt1.begin();
//	lt1.splice(i, lt2);
//	cout << "ƴ�Ӻ�" << endl;
//	cout << "lt1: ";
//	show(lt1);
//	cout << "lt2: ";
//	show(lt2);
//
//
//	//����
//	lt1.sort();
//	cout << "��С���������" << endl;
//	cout << "lt1: ";
//	show(lt1);
//
//
//	lt1.sort(greater<int>());
//	cout << "�Ӵ�С�����" << endl;
//	cout << "lt1: ";
//	show(lt1);
//	
//
//	//���
//	lt1.clear();
//	lt2.clear();
//	cout << "�����" << endl;
//	cout << "lt1: ";
//	show(lt1);
//	cout << "lt2: ";
//	show(lt2);
//	return 0;
//}
//

//
//int main()
//{
//
//	return 0;
//}















//int main()
//{
//
//	return 0;
//}