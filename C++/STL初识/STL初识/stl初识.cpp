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
//	//����һ��vector����������
//	vector<int> v;
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//ͨ����������������������
//	vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ�������е�һ��Ԫ��
//	vector<int>::iterator itEnd = v.end();//��ʼ��������ָ�����������һ��Ԫ�ص���һ��λ��
//	//��һ�ֱ�����ʽ��
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//	//�ڶ��ֱ�����ʽ��
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//	cout << endl;
//
//	//�����ֱ�����ʽ��
//	//ʹ��STL�ṩ��׼�����㷨  ͷ�ļ� algorithm
//	for_each(v.begin(), v.end(), myprint);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


////�Զ�����������
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
////��Ŷ���
//void test01() {
//
//	vector<Person> v;
//	//��������
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
////�Ŷ���ָ��
//void test02() {
//	vector<Person*> v;
//	//��������
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
	//��С�������������
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
	//��С�������뵽��������
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