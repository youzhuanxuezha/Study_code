//#include <iostream>
//#include <vector>
//#include <deque>
//#include <algorithm>
//#include <string>
//#include<time.h>
//#include <stack>
//#include <queue>
//using namespace std; 

////ջ�������ýӿ�
//void test01()
//{
//	//����ջ���� ջ������������Ƚ����
//	stack<int> s;
//
//	//��ջ�����Ԫ�أ����� ѹջ ��ջ
//	s.push(10);
//	s.push(20);
//	s.push(30);
//
//	while (!s.empty()) {
//		//���ջ��Ԫ��
//		cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;
//		//����ջ��Ԫ��
//		s.pop();
//	}
//	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;
//
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////queue����
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01() {
//
//	//��������
//	queue<Person> q;
//
//	//׼������
//	Person p1("��ɮ", 30);
//	Person p2("�����", 1000);
//	Person p3("��˽�", 900);
//	Person p4("ɳɮ", 800);
//
//	//����������Ԫ��  ��Ӳ���
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	//���в��ṩ������������֧���������	
//	while (!q.empty()) {
//		//�����ͷԪ��
//		cout << "��ͷԪ��-- ������ " << q.front().m_Name
//			<< " ���䣺 " << q.front().m_Age << endl;
//
//		cout << "��βԪ��-- ������ " << q.back().m_Name
//			<< " ���䣺 " << q.back().m_Age << endl;
//		cout << endl;
//		//������ͷԪ��
//		q.pop();
//	}
//	cout << "���д�СΪ��" << q.size() << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}