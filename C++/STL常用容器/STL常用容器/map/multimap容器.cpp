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


////map�Ĵ�С�ͽ���
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
//		cout << "mΪ��" << endl;
//	}
//	else
//	{
//		cout << "m��Ϊ��" << endl;
//		cout << "m�Ĵ�СΪ�� " << m.size() << endl;
//	}
//}
////����
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
//	cout << "����ǰ" << endl;
//	printMap(m);
//	printMap(m2);
//
//	cout << "������" << endl;
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

////map�Ĳ����ɾ��
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
//	//����
//	map<int, int> m;
//	//��һ�ֲ��뷽ʽ
//	m.insert(pair<int, int>(1, 10));
//	//�ڶ��ֲ��뷽ʽ
//	m.insert(make_pair(2, 20));
//	//�����ֲ��뷽ʽ
//	m.insert(map<int, int>::value_type(3, 30));
//	//�����ֲ��뷽ʽ
//	m[4] = 40;
//	printMap(m);
//
//	//ɾ��
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(3);
//	printMap(m);
//
//	//���
//	m.erase(m.begin(), m.end());
//	m.clear();
//	printMap(m);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


////���Һ�ͳ��
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(3, 40));
//
//	//����
//	map<int, int>::iterator pos = m.find(3);
//
//	if (pos != m.end())
//	{
//		cout << "�ҵ���Ԫ�� key = " << (*pos).first << " value = " << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//	//ͳ��
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//int main() {
//
//	test01();
//	system("pause");
//	return 0;
//}