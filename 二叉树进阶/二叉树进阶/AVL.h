#ifndef _AVL_H
#define _AVL_H
#include<stack>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////BST���߶�ƽ�⻯�Ķ���������

////AVL����
template <typename Type>
class AVL;

////�ڵ���
template <typename Type>
class AVLNode
{
public:
	friend class AVL<Type>;
public:
	////���캯��
	AVLNode(Type d = Type(), AVLNode<Type> *lf=nullptr, AVLNode<Type> *rg=nullptr)
		:data(d), left(lf), right(rg), bf(0)
	{}

	////��������
	~AVLNode()
	{}
private:
	Type data;
	AVLNode<Type> *left;
	AVLNode<Type> *right;
	int bf;//ƽ������

};

////AVL����
template <typename Type>
class AVL
{
public:
	////���캯��
	AVL() :root(nullptr)
	{}

public:
	/////////////////////////////////////
	////��������

	bool Insert(const Type& x);//����



protected: 
	void RotateR(AVLNode<Type>*& ptr);////����ת
	void RotateL(AVLNode<Type>*& ptr);////����ת
	void RotateLR(AVLNode<Type>*& ptr);////���������ת
	void RotateRL(AVLNode<Type>*& ptr);////���Һ�����ת
	bool _Insert(AVLNode<Type> *&t, const Type& x);


private:
	AVLNode<Type>* root;
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////����ʵ�ֽӿ�



//////////////////////////////////////////////////////////////
////����ת
template <typename Type>
void AVL<Type>::RotateR(AVLNode<Type>*& ptr)
{
	AVLNode<Type>* R = ptr;
	ptr = R->left;
	R->left = ptr->right;
	ptr->right = R;
	ptr->bf = R->bf = 0;


}


//////////////////////////////////////////////////////////////
////����ת
template <typename Type>
void AVL<Type>::RotateL(AVLNode<Type>*& ptr)
{
	AVLNode<Type>* L = ptr;
	ptr = L->right;
	L->right = ptr->left;
	ptr->left = L;
	ptr->bf = L->bf = 0;
}

//////////////////////////////////////////////////////////////
////���������ת
template <typename Type>
void AVL<Type>::RotateLR(AVLNode<Type>*& ptr)
{
	//����ڵ�
	AVLNode<Type>* L = ptr->left;
	AVLNode<Type>* R = ptr;
	ptr = L->right;

	//��ת
	L->right=ptr->left;
	ptr->left = L;

	//��ת
	R->left = ptr->right;
	ptr->right = R;

	//����ƽ������
	//����
	if (ptr->bf == 1)
		L->bf = -1;
	else
		L->bf = 0;

	//����
	if (ptr->bf == -1)
		R->bf = 1;
	else
		R->bf = 0;

	//��
	ptr->bf = 0;

}



//////////////////////////////////////////////////////////////
////���Һ�����ת
template <typename Type>
void AVL<Type>::RotateRL(AVLNode<Type>*& ptr)
{
	//����ڵ�
	AVLNode<Type>* R= ptr->right;
	AVLNode<Type>* L = ptr;
	ptr = R->left;

	//��ת
	R->left = ptr->right;
	ptr->right = R;

	//��ת
	L->right = ptr->left;
	ptr->left= L;

	//����ƽ������
	//����
	if (ptr->bf == -1)
		R->bf = 1;
	else
		R->bf = 0;

	//����
	if (ptr->bf == 1)
		L->bf = -1;
	else
		L->bf = 0;

	//��
	ptr->bf = 0;
}


//////////////////////////////////////////////////////////////
//����
template <typename Type>
bool AVL<Type>:: Insert(const Type& x)
{
	return _Insert(root, x);
}

template <typename Type>
bool AVL<Type>:: _Insert(AVLNode<Type> *&t, const Type& x)
{
	////////////////////////////////
	//1������BST�������
	AVLNode<Type> *pr = nullptr;//���ڵ�
	AVLNode<Type> *p = t;

	stack<AVLNode<Type>*> st;

	while (p != nullptr)
	{
		////���ڲ���x�Ĳ���λ��
		if (x == p->data)
			return false;

		pr = p;
		st.push(pr);

		if (x < p->data)
			p = p->left;
		else
			p = p->right;
		
	}

	p = new AVLNode<Type>(x);
	if (pr == nullptr)
	{
		t = p;
		return true;
	}
	////�ڵ�����
	else if (x < pr->data)
	{
		pr->left = p;
	}
	else
		pr->right = p;
	
	////////////////////////////////
	////////////////////////////////
	//2�������ƽ�⣬����е���
	while (!st.empty())
	{
		pr = st.top();
		st.pop();
		if (p == pr->left)
			pr->bf--;
		else
			pr->bf++;
		if (pr->bf == 0)
			break;
		if (pr->bf == 1 || pr->bf == -1)////  |bf|==1,���ϻ���
			p = pr;
		else
		{
			////   |bf|==2   �����˲�ƽ�⣬������
			if (p == pr->left)////���֧
			{
				if (p->bf < 0)
				{
					////����ת
					RotateR(pr);
				}
				else
				{
					////���������ת
					RotateLR(pr);
				}

			}

			else//�ҷ�֧
			{
				if (p->bf > 0)
				{
					////����ת
					RotateL(pr);
				}
				else
				{
					////���Һ�����ת
					RotateRL(pr);
				}
				
			}
			break;
		}
		
	}
	if (st.empty())
		t = pr;
	else
	{
		AVLNode<Type>* ppr = st.top();
		if (ppr->data > pr->data)
			ppr->left = pr;
		else
			ppr->right = pr;

	}
	
	return true;
}

//////////////////////////////////////////////////////////////
//template <typename Type>
//template <typename Type>

//////////////////////////////////////////////////////////////
//template <typename Type>
//template <typename Type>


//////////////////////////////////////////////////////////////
//template <typename Type>
//template <typename Type>
//template <typename Type>



#endif /*_AVL_H*/