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
//#include<map>
//using namespace std;


//void printmap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << it->first << " value=" << it->second << endl;
//	}
//	cout << endl;
//}
//void test1()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	printmap(m);
//
//	map<int, int> m2(m);
//	printmap(m2);
//
//	map<int, int> m3;
//	m3 = m2;
//	printmap(m3);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


////map的大小和交换
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//	}
//	else
//	{
//		cout << "m不为空" << endl;
//		cout << "m的大小为： " << m.size() << endl;
//	}
//}
////交换
//void test02()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(4, 100));
//	m2.insert(pair<int, int>(5, 200));
//	m2.insert(pair<int, int>(6, 300));
//
//	cout << "交换前" << endl;
//	printMap(m);
//	printMap(m2);
//
//	cout << "交换后" << endl;
//	m.swap(m2);
//	printMap(m);
//	printMap(m2);
//}
//
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

////map的插入和删除
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//void test01()
//{
//	//插入
//	map<int, int> m;
//	//第一种插入方式
//	m.insert(pair<int, int>(1, 10));
//	//第二种插入方式
//	m.insert(make_pair(2, 20));
//	//第三种插入方式
//	m.insert(map<int, int>::value_type(3, 30));
//	//第四种插入方式
//	m[4] = 40;
//	printMap(m);
//
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);
//	printMap(m);
//
//	//清空
//	m.erase(m.begin(), m.end());
//	m.clear();
//	printMap(m);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


////查找和统计
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(3, 40));
//
//	//查找
//	map<int, int>::iterator pos = m.find(3);
//
//	if (pos != m.end())
//	{
//		cout << "找到了元素 key = " << (*pos).first << " value = " << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//
//	//统计
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}