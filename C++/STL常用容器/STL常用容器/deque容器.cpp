//#include <iostream>
//#include <vector>
//#include <deque>
//#include <algorithm>
//#include <string>
//using namespace std;

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
////deque构造
//void test01() {
//
//	deque<int> d1; //无参构造函数
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	deque<int>d4 = d3;
//	printDeque(d4);
//
//	deque<int>d5(d3);
//	printDeque(d5);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


//void myprint(const deque<int> &d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	deque<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	myprint(v);
//
//	if (v.empty())
//	{
//		cout << "v为空" << endl;
//	}
//	else {
//		cout << "v不为空" << endl;
//	}
//	v.resize(15);
//	myprint(v);
//
//	v.resize(20,1);
//	myprint(v);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

//void myprint(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	deque<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	myprint(v);
//
//	deque<int> u;
//	for (int i = 0; i < 3; i++)
//	{
//		u.push_back(i);
//	}
//
//	v.insert(v.begin() + 8, u.begin(), u.end());
//	myprint(v);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//
////数据存取
//void test01()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < d.size(); i++) {
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//	cout << "front:" << d.front() << endl;
//	cout << "back:" << d.back() << endl;
//	d[0] = 1;
//	printDeque(d);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_front(100);
//	d.push_front(200);
//	printDeque(d);
//	sort(d.begin(), d.end());
//	printDeque(d);
//}
//
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}