#include<iostream>
#include<string>
using namespace std;


////利用模板提供通用的交换函数
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	double c = 1.1;
//	double d = 2.2;
//	//利用模板实现交换
//   //1、自动类型推导
//	mySwap(a, b);
//	mySwap(c, d);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//	//2、显示指定类型
//	mySwap<int>(a, b);
//	mySwap<double>(c, d);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


////利用模板提供通用的交换函数
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//// 1、自动类型推导，必须推导出一致的数据类型T,才可以使用
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b); // 正确，可以推导出一致的T
//	//mySwap(a, c); // 错误，推导不出一致的T类型
//}
//// 2、模板必须要确定出T的数据类型，才可以使用
//template<class T>
//void func()
//{
//	cout << "func 调用" << endl;
//}
//void test02()
//{
//		//func(); //错误，模板不能独立使用，必须确定出T的类型
//		func<int>(); //利用显示指定类型的方式，给T一个类型，才可以使用该模板
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//template<class T>
//void myswap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//template<class T>
//void mysort(T arr[], int len)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < len; i++)
//	{
//		int max = i;
//		for (j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			myswap(arr[max], arr[i]);
//		}
//	}
//}
//template<class T>
//void printarr(T arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	char carr[] = "badcfe";
//	int n = strlen(carr);
//	mysort(carr, n);
//	printarr(carr, n);
//
//}
//void test2()
//{
//	int iarr[] = { 3,5,1,8,9,8,4 };
//	int n = sizeof(iarr)/sizeof(iarr[0]);
//	mysort(iarr, n);
//	printarr(iarr, n);
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}


////普通函数
//int myAdd01(int a, int b)
//{
//    return a + b;
//}
////函数模板
//template<class T>
//T myAdd02(T a, T b)
//{
//    return a + b;
//}
////使用函数模板时，如果用自动类型推导，不会发生自动类型转换,即隐式类型转换
//void test01()
//{
//    int a = 10;
//    int b = 20;
//    char c = 'c';
//    cout << myAdd01(a, c) << endl; //正确，将char类型的'c'隐式转换为int类型  'c' 对应 ASCII码 99
//    //myAdd02(a, c); // 报错，使用自动类型推导时，不会发生隐式类型转换
//    cout << myAdd02<int>(a, c) << endl;//正确，如果用显示指定类型，可以发生隐式类型转换
//}
//int main() {
//
//    test01();
//    system("pause");
//    return 0;
//}


////类模板
//template<class NameType, class AgeType>
//class Person
//{
//public:
//    Person(NameType name, AgeType age)
//    {
//        this->mName = name;
//        this->mAge = age;
//    }
//    void showPerson()
//    {
//        cout << "name: " << this->mName << " age: " << this->mAge << endl;
//    }
//public:
//    NameType mName;
//    AgeType mAge;
//};
//void test01()
//{
//    // 指定NameType 为string类型，AgeType 为 int类型
//    Person<string, int>P1("孙悟空", 999);
//    P1.showPerson();
//}
//int main() {
//
//    test01();
//    system("pause");
//    return 0;
//}

// //类模板
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->mName = name;
//		this->mAge = age;
//	}
//	void showPerson()
//	{
//		cout << "name: " << this->mName << " age: " << this->mAge << endl;
//	}
//public:
//	NameType mName;
//	AgeType mAge;
//};
////1、类模板没有自动类型推导的使用方式
//void test01()
//{
//	// Person p("孙悟空", 1000); // 错误 类模板使用时候，不可以用自动类型推导
//	Person <string, int>p("孙悟空", 1000); //必须使用显示指定类型的方式，使用类模板
//	p.showPerson();
//}
////2、类模板在模板参数列表中可以有默认参数
//void test02()
//{
//	Person <string> p("猪八戒", 999); //类模板中的模板参数列表 可以指定默认参数
//	p.showPerson();
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//class Person1
//{
//	
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//	//类模板中的成员函数，并不是一开始就创建的，而是在模板调用时再生成
//	void fun1() { obj.showPerson1(); }
//	void fun2() { obj.showPerson2(); }
//};
//void test01()
//{
//	MyClass<Person1> m;
//	m.fun1();
//	m.fun2();//编译会出错，说明函数调用才会去创建成员函数
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


////类模板
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->mName = name;
//		this->mAge = age;
//	}
//	void showPerson()
//	{
//		cout << "name: " << this->mName << " age: " << this->mAge << endl;
//	}
//public:
//	NameType mName;
//	AgeType mAge;
//};
////1、指定传入的类型
//void printPerson1(Person<string, int>& p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person <string, int >p("孙悟空", 100);
//	printPerson1(p);
//}
////2、参数模板化
//template <class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1的类型为： " << typeid(T1).name() << endl;
//	cout << "T2的类型为： " << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person <string, int >p("猪八戒", 90);
//	printPerson2(p);
//}
////3、整个类模板化
//template<class T>
//void printPerson3(T& p)
//{
//	cout << "T的类型为： " << typeid(T).name() << endl;
//	p.showPerson();
//}
//void test03()
//{
//	Person <string, int >p("唐僧", 30);
//	printPerson3(p);
//}
//int main() {
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}

//// 先声明类模板
//template<class T1, class T2>
//class Person;
//
//// 声明函数模板
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p);
//
//// 定义类模板
//template<class T1, class T2>
//class Person {
//    // 友元函数
//    friend void printPerson(Person<T1, T2>& p) {
//        cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
//    }
//    // 友元函数的类外实现
//    friend void printPerson2<>(Person<T1, T2>& p);
//public:
//    Person(T1 name, T2 age) {
//        this->m_Name = name;
//        this->m_Age = age;
//    }
//
//private:
//    T1 m_Name;
//    T2 m_Age;
//};
//
//// 定义函数模板
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p) {
//    cout << "类外实现 ---- 姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
//}
//
//void test01() {
//    Person<string, int> p("Tom", 20);
//    printPerson(p);
//}
//
//void test02() {
//    Person<string, int> p("Jerry", 30);
//    printPerson2(p);
//}
//
//int main() {
//    test01();
//    test02();
//    system("pause");
//    return 0;
//}