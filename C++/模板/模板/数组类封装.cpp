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
//		//利用尾插法向数组中插入数据
//		arr1.Push_back(i);
//	}
//	cout << "arr1的打印输出为：" << endl;
//	printIntArray(arr1);
//	cout << "arr1的大小：" << arr1.getSize() << endl;
//	cout << "arr1的容量：" << arr1.getCapacity() << endl;
//	cout << "--------------------------" << endl;
//	MyArray<int> arr2(arr1);
//	arr2.Pop_back();
//	cout << "arr2打印输出：" << endl;
//	printIntArray(arr2);
//	cout << "arr2尾删后：" << endl;
//	cout << "arr2的大小：" << arr2.getSize() << endl;
//	cout << "arr2的容量：" << arr2.getCapacity() << endl;
//}
////测试自定义数据类型
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
//		cout << "姓名：" << personArr[i].m_Name << " 年龄： " << personArr[i].m_Age << endl;
//	}
//}
//void test2()
//{
//	//创建数组
//	MyArray<Person> pArray(10);
//	Person p1("孙悟空", 30);
//	Person p2("韩信", 20);
//	Person p3("妲己", 18);
//	Person p4("王昭君", 15);
//	Person p5("赵云", 24);
//	//插入数据
//	pArray.Push_back(p1);
//	pArray.Push_back(p2);
//	pArray.Push_back(p3);
//	pArray.Push_back(p4);
//	pArray.Push_back(p5);
//	printPersonArray(pArray);
//	cout << "pArray的大小：" << pArray.getSize() << endl;
//	cout << "pArray的容量：" << pArray.getCapacity() << endl;
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}