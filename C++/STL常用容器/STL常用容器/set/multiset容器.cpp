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
////����͸�ֵ
//void test01()
//{
//	set<int> s1;
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(10);
//	printSet(s1);
//
//	//��������
//	set<int>s2(s1);
//	printSet(s2);
//
//	//��ֵ
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


////set��multiset����
//void test01()
//{
//	set<int> s;
//	pair<set<int>::iterator, bool>  ret = s.insert(10);
//	if (ret.second) {
//		cout << "��һ�β���ɹ�!" << endl;
//	}
//	else {
//		cout << "��һ�β���ʧ��!" << endl;
//	}
//	ret = s.insert(10);
//	if (ret.second) {
//		cout << "�ڶ��β���ɹ�!" << endl;
//	}
//	else {
//		cout << "�ڶ��β���ʧ��!" << endl;
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

////���鴴��
//void test01()
//{
//	pair<string, int> p("Tom", 20);
//	cout << "������ " << p.first << " ���䣺 " << p.second << endl;
//	pair<string, int> p2 = make_pair("Jerry", 10);
//	cout << "������ " << p2.first << " ���䣺 " << p2.second << endl;
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
//	//Ĭ�ϴ�С����
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	//ָ���������
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