//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<functional>
//using namespace std;

//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end())
//	{
//		cout << "û����" << endl;
//	}
//	else {
//		cout << "������" << endl;
//	}
//}
//class Person {
//public:
//	Person(string name, int age)
//	{
//		mname == name;
//		mage = age;
//	}
//	bool operator==(const Person& p)
//	{
//		if (this->mage == p.mage && this->mage == p.mage) {
//			return true;
//		}
//		return false;
//	}
//	string mname;
//	int mage;
//};
//void test2()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//	if (it == v.end())
//	{
//		cout << "û����" << endl;
//	}
//	else {
//		cout << "������" << endl;
//	}
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}

////������������
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01() {
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i + 1);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	if (it == v.end()) {
//		cout << "û���ҵ�!" << endl;
//	}
//	else {
//		cout << "�ҵ�����5������:" << *it << endl;
//	}
//}
//
////�Զ�����������
//class Person {
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//class Greater20
//{
//public:
//	bool operator()(Person& p)
//	{
//		return p.m_Age > 20;
//	}
//
//};
//void test02() {
//
//	vector<Person> v;
//	//��������
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
//	if (it == v.end())
//	{
//		cout << "û���ҵ�!" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�����:" << it->m_Name << " ����: " << it->m_Age << endl;
//	}
//}
//int main() {
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

////countͳ��Ԫ�ظ���
////������������
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(4);
//
//	int num = count(v.begin(), v.end(), 4);
//
//	cout << "4�ĸ���Ϊ�� " << num << endl;
//}
//
////�Զ�����������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator==(const Person& p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test02()
//{
//	vector<Person> v;
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 30);
//	Person p5("�ܲ�", 25);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	Person p("�����", 35);
//	int num = count(v.begin(), v.end(), p);
//	cout << "num = " << num << endl;
//}
//int main() {
//
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}


////count_ifͳ������������Ԫ�ظ���
//class Greater4
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 4;
//	}
//};
////������������
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(4);
//
//	int num = count_if(v.begin(), v.end(), Greater4());
//
//	cout << "����4�ĸ���Ϊ�� " << num << endl;
//}
////�Զ�����������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//class AgeLess35
//{
//public:
//	bool operator()(const Person& p)
//	{
//		return p.m_Age < 35;
//	}
//};
//void test02()
//{
//	vector<Person> v;
//
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 30);
//	Person p5("�ܲ�", 25);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	int num = count_if(v.begin(), v.end(), AgeLess35());
//	cout << "С��35��ĸ�����" << num << endl;
//}
//int main() {
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}