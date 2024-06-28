//#include <iostream>
//#include <vector>
//#include <deque>
//#include <algorithm>
//#include <string>
//#include<time.h>
//#include <stack>
//#include <queue>
//#include<list>
//#include<set>
//using namespace std;

//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////构造和赋值
//void test01()
//{
//	set<int> s1;
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(10);
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


////set和multiset区别
//void test01()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool>  ret = s.insert(10);
//	if (ret.second) {
//		cout << "第一次插入成功!" << endl;
//	}
//	else {
//		cout << "第一次插入失败!" << endl;
//	}
//	ret = s.insert(10);
//	if (ret.second) {
//		cout << "第二次插入成功!" << endl;
//	}
//	else {
//		cout << "第二次插入失败!" << endl;
//	}
//	//multiset
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////对组创建
//void test01()
//{
//	pair<string, int> p("Tom", 20);
//	cout << "姓名： " << p.first << " 年龄： " << p.second << endl;
//	pair<string, int> p2 = make_pair("Jerry", 10);
//	cout << "姓名： " << p2.first << " 年龄： " << p2.second << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) {
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(50);
//	//默认从小到大
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	//指定排序规则
//	set<int, MyCompare> s2;
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(30);
//	s2.insert(50);
//	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}