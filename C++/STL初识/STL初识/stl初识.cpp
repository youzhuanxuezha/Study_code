#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


//void myprint(int val)
//{
//	cout << val << endl;
//}
//void test1()
//{
//	//创建一个vector容器，数组
//	vector<int> v;
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//通过迭代器访问容器中数据
//	vector<int>::iterator itBegin = v.begin();//起始迭代器，指向容器中第一个元素
//	vector<int>::iterator itEnd = v.end();//起始迭代器，指向容器中最后一个元素的下一个位置
//	//第一种遍历方式：
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//	//第二种遍历方式：
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//	cout << endl;
//
//	//第三种遍历方式：
//	//使用STL提供标准遍历算法  头文件 algorithm
//	for_each(v.begin(), v.end(), myprint);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


////自定义数据类型
//class Person {
//public:
//	Person(string name, int age) {
//		mName = name;
//		mAge = age;
//	}
//public:
//	string mName;
//	int mAge;
//};
////存放对象
//void test01() {
//
//	vector<Person> v;
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "Name:" << (*it).mName << " Age:" << (*it).mAge << endl;
//
//	}
//}
////放对象指针
//void test02() {
//	vector<Person*> v;
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
//		Person* p = (*it);
//		cout << "Name:" << p->mName << " Age:" << (*it)->mAge << endl;
//	}
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}


void test1()
{
	vector<vector<int>> v;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	//向小容器中添加数据
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
	//将小容器插入到大容器中
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}
}
int main()
{
	test1();
	system("pause");
	return 0;
}