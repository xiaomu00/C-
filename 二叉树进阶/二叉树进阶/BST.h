#ifndef _BST_H
#define _BST_H
#include<iostream>
#include<vld.h>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////BST������������




template <typename Type>
class BST;

//////////////////////////////////////////////////////////////
////�������ڵ���
template <class Type>
class BSTNode
{

	friend class BST<Type>;
public:
	BSTNode(Type d = Type(), BSTNode<Type>* _left = nullptr, BSTNode<Type>* _right = nullptr)
		:data(d), left(_left), right(_right)
	{}
	~BSTNode()
	{}
private:
	Type data;
	BSTNode<Type>* left;
	BSTNode<Type>* right;
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////����������������
template <typename Type>
class BST
{
public:
	////���캯��
	BST() :root(nullptr)
	{}
	BST(Type a[], int n) :root(nullptr)
	{
		for (int i = 0; i < n; ++i)
		{
			Insert(a[i]);
		}
	}

	////��������
	~BST()
	{
		_EakeEmpty(root);
	}
public:
	/////////////////////////////////////
	////��������

	bool Insert(const Type& x);//����
	void sort();//����
	int min_SBT();//����Сֵ
	int max_SBT();//�����ֵ
	BSTNode<Type>* Search(const Type &key);	//����ĳ��ֵ
	bool erase(const Type x);	//ɾ��ĳ��ֵ
	void EakeEmpty();//�ͷŶ�����
	
protected:
	bool _Insert(BSTNode<Type>*& t, const Type& x);
	void _sort(BSTNode<Type>*& t);
	int min_SBT(BSTNode<Type>* t);
	int max_SBT(BSTNode<Type>* t);
	void _EakeEmpty(BSTNode<Type>* t);
	BSTNode<Type>* _Search(BSTNode<Type>* t, const Type &k);
	bool _erase(BSTNode<Type>*& t, const Type &k);

private:
	BSTNode<Type>* root;

};



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////����ʵ�ֽӿ�


////////////////////////////////////////////////////////////
////����
template <typename Type>
bool BST<Type>:: Insert(const Type& x)
{
	return _Insert(root, x);
}

template <typename Type>
bool BST<Type>::_Insert(BSTNode<Type>*& t, const Type& x)
{
	if (t == nullptr)
	{
		t = new BSTNode<Type>(x);
		return true;
	}
	else if (x < t->data)
		_Insert(t->left, x);
	else if (x>t->data)
		_Insert(t->right, x);
	return false;
}


////////////////////////////////////////////////////////////
////����
template <typename Type>
void BST<Type>::sort()
{
	_sort(root);
}

template <typename Type>
void BST<Type>::_sort(BSTNode<Type>*& t)
{
	if (t != nullptr)
	{
		_sort(t->left);
		cout << t->data << " ";
		_sort(t->right);
	}

}


////////////////////////////////////////////////////////////
//����Сֵ
template <typename Type>
int BST<Type>:: min_SBT()
{
	return min_SBT(root);
}

template <typename Type>
int BST<Type>::min_SBT(BSTNode<Type>* t)
{
	while (t->left != nullptr)
		t = t->left;
	return t->data;
}

////////////////////////////////////////////////////////////
//�����ֵ
template <typename Type>
int BST<Type>::max_SBT()
{
	return max_SBT(root);
}

template <typename Type>
int BST<Type>::max_SBT(BSTNode<Type>* t)
{
	while (t->right != nullptr)
		t = t->right;
	return t->data;
}

////////////////////////////////////////////////////////////
//����ĳ��ֵ
template <typename Type>
BSTNode<Type>* BST<Type>::Search(const Type &key)
{
	return _Search(root, key);
}

template <typename Type>
BSTNode<Type>* BST<Type>::_Search(BSTNode<Type>* t, const Type &k)
{
	if (t == nullptr)
		return nullptr;
	else if (t->data == k)
		return t;
	else if (t->data > k)
		return _Search(t->left, k);
	else if (t->data < k)
		return _Search(t->right, k);
}


////////////////////////////////////////////////////////////
//ɾ��ĳ��ֵ
template <typename Type>
bool BST<Type>::erase(const Type x)
{
	return _erase(root, x);
}


template <typename Type>
////����һ
bool BST<Type>::_erase(BSTNode<Type>*& t, const Type &k)
{
	if (t != nullptr)
	{
		BSTNode<Type>* p;
		if (k < t->data)
			_erase(t->left, k);
		else if (k>t->data)
			_erase(t->right, k);
		else if (t->left == nullptr&&t->right != nullptr)//ɾ�������������Ľڵ�
		{
			p = t->left;
			while (p->right != nullptr)
				p = p->right;
			t->data = p->data;
			_erase(t->left, p->data);
		}
		else//ɾ�������һ�������Ľڵ�
		{
			p = t;
			if (t->left != nullptr)
				t = p->left;
			else
				t = p->right;
			delete p;
			return true;
		}
	}
	return false;

}

////������
//template <typename Type>
//bool BST<Type>::  _erase(BSTNode<Type>*& t, const Type &k)
//{
//	if (t != nullptr)
//	{
//		if (k < t->data)
//			_erase(t->left,k);
//		else if (k>t->data)
//			_erase(t->right, k);
//		else
//		{
//			if (t->left == nullptr&&t->right == nullptr)
//			{
//				//ɾ��Ҷ�ӽ��
//				delete t;
//				t = nullptr;
//			}
//			else if (t->left != nullptr&&t->right == nullptr)
//			{
//				//ɾ�����������Ľڵ�
//				BSTNode<Type>* p = t;
//				t = p->left;
//				delete p;
//				
//			}
//			else if (t->left == nullptr&&t->right != nullptr)
//			{
//				//ɾ�����������Ľڵ�
//				BSTNode<Type>* p = t;
//				t = p->right;
//				delete p;
//			}
//			
//			else
//			{
//				//ɾ�������������Ľڵ�
//				BSTNode<Type>* p = t->left; 
//				while (p->right != nullptr)
//					p = p->left;
//				t->data = p->data;
//				_erase(t->left, p->data);
//			}
//			return true;
//		}
//	}
//	return false;
//
//}




////////////////////////////////////////////////////////////
//�ͷŶ�����
template <typename Type>
void BST<Type>:: EakeEmpty()
{
	_EakeEmpty(root);
}

template <typename Type>
void BST<Type>::_EakeEmpty(BSTNode<Type>* t)
{
	if (t != nullptr)
	{
		_EakeEmpty(t->left);
		_EakeEmpty(t->right);
		delete t;
	}
}


#endif /*_BST_H*/