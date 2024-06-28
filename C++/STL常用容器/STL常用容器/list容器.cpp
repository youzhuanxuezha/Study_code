#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>
#include<time.h>
#include <stack>
#include <queue>
#include<list>
using namespace std;


//void printlist(list<int>& L)
//{
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printlist(L1);
//	
//	list<int>L2(L1.begin(), L1.end());
//	printlist(L2);
//
//	list<int>L3(L2);
//	printlist(L3);
//
//	list<int>L4(10, 100);
//	printlist(L4);
//
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


//void printList(const list<int>& L) {
//
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////大小操作
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	if (L1.empty())
//	{
//		cout << "L1为空" << endl;
//	}
//	else
//	{
//		cout << "L1不为空" << endl;
//		cout << "L1的大小为： " << L1.size() << endl;
//	}
//
//	//重新指定大小
//	L1.resize(10);
//	printList(L1);
//
//	L1.resize(2);
//	printList(L1);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//void printlist(list<int>& L)
//{
//	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	list<int>L;
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//	printlist(L);
//
//	L.pop_back();
//	printlist(L);
//	L.pop_front();
//	printlist(L);
//
//	list<int>::iterator it = L.begin();
//	L.insert(it, 1000);
//	printlist(L);
//
//	it = L.begin();
//	L.erase(it);
//	printlist(L);
//
//	//移除
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printlist(L);
//	L.remove(10000);
//	printlist(L);
//
//	//清空
//	L.clear();
//	printlist(L);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

//
////数据存取
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//cout << L1.at(0) << endl;//错误 不支持at访问数据
//	//cout << L1[0] << endl; //错误  不支持[]方式访问数据
//	cout << "第一个元素为： " << L1.front() << endl;
//	cout << "最后一个元素为： " << L1.back() << endl;
//
//	//list容器的迭代器是双向迭代器，不支持随机访问
//	list<int>::iterator it = L1.begin();
//	//it = it + 1;//错误，不可以跳跃访问，即使是+1
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////反转和排序
//void printList(const list<int>& L) {
//
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//bool myCompare(int val1, int val2)
//{
//	return val1 > val2;
//}
//
//bool myCompare1(int val1, int val2)
//{
//	return val1 < val2;
//}
//void test01()
//{
//	list<int> L;
//	L.push_back(90);
//	L.push_back(30);
//	L.push_back(20);
//	L.push_back(70);
//	printList(L);
//
//	//反转容器的元素
//	L.reverse();
//	printList(L);
//
//	//排序
//	L.sort(myCompare1); //默认的排序规则 从小到大
//	printList(L);
//
//	L.sort(myCompare); //指定规则，从大到小
//	printList(L);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


//class Person {
//public:
//	Person(string name, int age, int high)
//	{
//		myname = name;
//		myage = age;
//		myhigh = high;
//	}
//	string myname;
//	int myage, myhigh;
//};
//bool mycompare(Person &v1, Person &v2)
//{
//	if (v1.myage == v2.myage)
//	{
//		return v1.myhigh > v2.myhigh;
//	}
//	else
//	{
//		return v1.myage < v2.myage;
//	}
//}
//void test1()
//{
//	list<Person>L;
//
//	Person p1("刘备", 35, 175);
//	Person p2("曹操", 45, 180);
//	Person p3("孙权", 40, 170);
//	Person p4("赵云", 25, 190);
//	Person p5("张飞", 35, 160);
//	Person p6("关羽", 35, 200);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名：" << it->myname << " 年龄：" << it->myage << " 身高：" << it->myhigh << "cm" << endl;
//	}
//	cout << "排序后：" << endl;
//	L.sort(mycompare);
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名：" << it->myname << " 年龄：" << it->myage << " 身高：" << it->myhigh << "cm" << endl;
//	}
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}