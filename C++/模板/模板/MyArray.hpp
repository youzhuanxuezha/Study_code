#pragma once
#include <iostream>
using namespace std;
template<class T>
class MyArray
{
public:
	//�вι���
	MyArray(int cap)
	{
		cout << "�вκ�������" << endl;
		this->mcap = cap;
		this->msize = 0;
		this->pAddress = new T[this->mcap];
	}
	//��������
	MyArray(const MyArray& arr)
	{
		cout << "������������" << endl;
		this->mcap = arr.mcap;
		this->msize = arr.msize;
		this->pAddress = new T[arr.mcap];//���
		//��arr�е����ݶ���������
		for (int i = 0; i < this->msize; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//����=����������ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		cout << "operator=" << endl;
		if (this->pAddress != NULL)//�ж�ԭ�������Ƿ������ݣ���������ͷ�
		{
			delete[] this->pAddress;
			this->mcap = 0;
			this->msize = 0;
		}
		this->mcap = arr.mcap;
		this->msize = arr.msize;
		this->pAddress = new T[arr.mcap];//���
		for (int i = 0; i < this->msize; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//β�巨
	void Push_back(const T& val)
	{
		if (this->mcap == this ->msize)
		{
			return;
		}
		this->pAddress[this->msize] = val;
		this->msize++;
	}
	//βɾ��(ԭ�������û����ʲ������һ��Ԫ�أ�����ɾ��)
	void Pop_back()
	{
		if (this->msize == 0)
		{
			return;
		}
		this->msize--;
	}
	//����[] ������  ʹ�����ͨ��[]���������е�Ԫ��
	T& operator [](int index)
	{
		return this->pAddress[index]; //������Խ�磬�û��Լ�ȥ����
	}
	//��ȡ��������
	int getCapacity()
	{
		return this->mcap;
	}

	//��ȡ�����С
	int getSize()
	{
		return this->msize;
	}
	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			cout << "������������" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->mcap = 0;
			this->msize = 0;
		}
	}
private:
	T* pAddress;
	int mcap;
	int msize;
};