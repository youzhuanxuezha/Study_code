#include "MyArray.hpp"
#include<string>
//void printIntArray(MyArray<int>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	MyArray <int>arr1(5);
//	for (int i = 0; i < 5; i++)
//	{
//		//����β�巨�������в�������
//		arr1.Push_back(i);
//	}
//	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
//	printIntArray(arr1);
//	cout << "arr1�Ĵ�С��" << arr1.getSize() << endl;
//	cout << "arr1��������" << arr1.getCapacity() << endl;
//	cout << "--------------------------" << endl;
//	MyArray<int> arr2(arr1);
//	arr2.Pop_back();
//	cout << "arr2��ӡ�����" << endl;
//	printIntArray(arr2);
//	cout << "arr2βɾ��" << endl;
//	cout << "arr2�Ĵ�С��" << arr2.getSize() << endl;
//	cout << "arr2��������" << arr2.getCapacity() << endl;
//}
////�����Զ�����������
//class Person {
//public:
//	Person() {}
//	Person(string name, int age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//public:
//	string m_Name;
//	int m_Age;
//};
//void printPersonArray(MyArray<Person>& personArr)
//{
//	for (int i = 0; i < personArr.getSize(); i++) {
//		cout << "������" << personArr[i].m_Name << " ���䣺 " << personArr[i].m_Age << endl;
//	}
//}
//void test2()
//{
//	//��������
//	MyArray<Person> pArray(10);
//	Person p1("�����", 30);
//	Person p2("����", 20);
//	Person p3("槼�", 18);
//	Person p4("���Ѿ�", 15);
//	Person p5("����", 24);
//	//��������
//	pArray.Push_back(p1);
//	pArray.Push_back(p2);
//	pArray.Push_back(p3);
//	pArray.Push_back(p4);
//	pArray.Push_back(p5);
//	printPersonArray(pArray);
//	cout << "pArray�Ĵ�С��" << pArray.getSize() << endl;
//	cout << "pArray��������" << pArray.getCapacity() << endl;
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}