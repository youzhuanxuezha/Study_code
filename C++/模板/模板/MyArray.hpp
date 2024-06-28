#pragma once
#include <iostream>
using namespace std;
template<class T>
class MyArray
{
public:
	//有参构造
	MyArray(int cap)
	{
		cout << "有参函数构造" << endl;
		this->mcap = cap;
		this->msize = 0;
		this->pAddress = new T[this->mcap];
	}
	//拷贝构造
	MyArray(const MyArray& arr)
	{
		cout << "拷贝函数构造" << endl;
		this->mcap = arr.mcap;
		this->msize = arr.msize;
		this->pAddress = new T[arr.mcap];//深拷贝
		//把arr中的数据都拷贝过来
		for (int i = 0; i < this->msize; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//重载=操作符，防止浅拷贝问题
	MyArray& operator=(const MyArray& arr)
	{
		cout << "operator=" << endl;
		if (this->pAddress != NULL)//判断原来堆区是否有数据，如果有先释放
		{
			delete[] this->pAddress;
			this->mcap = 0;
			this->msize = 0;
		}
		this->mcap = arr.mcap;
		this->msize = arr.msize;
		this->pAddress = new T[arr.mcap];//深拷贝
		for (int i = 0; i < this->msize; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//尾插法
	void Push_back(const T& val)
	{
		if (this->mcap == this ->msize)
		{
			return;
		}
		this->pAddress[this->msize] = val;
		this->msize++;
	}
	//尾删法(原理是让用户访问不到最后一个元素，而非删除)
	void Pop_back()
	{
		if (this->msize == 0)
		{
			return;
		}
		this->msize--;
	}
	//重载[] 操作符  使其可以通过[]访问数组中的元素
	T& operator [](int index)
	{
		return this->pAddress[index]; //不考虑越界，用户自己去处理
	}
	//获取数组容量
	int getCapacity()
	{
		return this->mcap;
	}

	//获取数组大小
	int getSize()
	{
		return this->msize;
	}
	//析构函数
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			cout << "析构函数构造" << endl;
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