#include<iostream>
#include<string>
using namespace std;


////����ģ���ṩͨ�õĽ�������
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
//	//����ģ��ʵ�ֽ���
//   //1���Զ������Ƶ�
//	mySwap(a, b);
//	mySwap(c, d);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//	//2����ʾָ������
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


////����ģ���ṩͨ�õĽ�������
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//// 1���Զ������Ƶ��������Ƶ���һ�µ���������T,�ſ���ʹ��
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b); // ��ȷ�������Ƶ���һ�µ�T
//	//mySwap(a, c); // �����Ƶ�����һ�µ�T����
//}
//// 2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<class T>
//void func()
//{
//	cout << "func ����" << endl;
//}
//void test02()
//{
//		//func(); //����ģ�岻�ܶ���ʹ�ã�����ȷ����T������
//		func<int>(); //������ʾָ�����͵ķ�ʽ����Tһ�����ͣ��ſ���ʹ�ø�ģ��
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


////��ͨ����
//int myAdd01(int a, int b)
//{
//    return a + b;
//}
////����ģ��
//template<class T>
//T myAdd02(T a, T b)
//{
//    return a + b;
//}
////ʹ�ú���ģ��ʱ��������Զ������Ƶ������ᷢ���Զ�����ת��,����ʽ����ת��
//void test01()
//{
//    int a = 10;
//    int b = 20;
//    char c = 'c';
//    cout << myAdd01(a, c) << endl; //��ȷ����char���͵�'c'��ʽת��Ϊint����  'c' ��Ӧ ASCII�� 99
//    //myAdd02(a, c); // ����ʹ���Զ������Ƶ�ʱ�����ᷢ����ʽ����ת��
//    cout << myAdd02<int>(a, c) << endl;//��ȷ���������ʾָ�����ͣ����Է�����ʽ����ת��
//}
//int main() {
//
//    test01();
//    system("pause");
//    return 0;
//}


////��ģ��
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
//    // ָ��NameType Ϊstring���ͣ�AgeType Ϊ int����
//    Person<string, int>P1("�����", 999);
//    P1.showPerson();
//}
//int main() {
//
//    test01();
//    system("pause");
//    return 0;
//}

// //��ģ��
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
////1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//void test01()
//{
//	// Person p("�����", 1000); // ���� ��ģ��ʹ��ʱ�򣬲��������Զ������Ƶ�
//	Person <string, int>p("�����", 1000); //����ʹ����ʾָ�����͵ķ�ʽ��ʹ����ģ��
//	p.showPerson();
//}
////2����ģ����ģ������б��п�����Ĭ�ϲ���
//void test02()
//{
//	Person <string> p("��˽�", 999); //��ģ���е�ģ������б� ����ָ��Ĭ�ϲ���
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
//	//��ģ���еĳ�Ա������������һ��ʼ�ʹ����ģ�������ģ�����ʱ������
//	void fun1() { obj.showPerson1(); }
//	void fun2() { obj.showPerson2(); }
//};
//void test01()
//{
//	MyClass<Person1> m;
//	m.fun1();
//	m.fun2();//��������˵���������òŻ�ȥ������Ա����
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


////��ģ��
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
////1��ָ�����������
//void printPerson1(Person<string, int>& p)
//{
//	p.showPerson();
//}
//void test01()
//{
//	Person <string, int >p("�����", 100);
//	printPerson1(p);
//}
////2������ģ�廯
//template <class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1������Ϊ�� " << typeid(T1).name() << endl;
//	cout << "T2������Ϊ�� " << typeid(T2).name() << endl;
//}
//void test02()
//{
//	Person <string, int >p("��˽�", 90);
//	printPerson2(p);
//}
////3��������ģ�廯
//template<class T>
//void printPerson3(T& p)
//{
//	cout << "T������Ϊ�� " << typeid(T).name() << endl;
//	p.showPerson();
//}
//void test03()
//{
//	Person <string, int >p("��ɮ", 30);
//	printPerson3(p);
//}
//int main() {
//	test01();
//	test02();
//	test03();
//	system("pause");
//	return 0;
//}

//// ��������ģ��
//template<class T1, class T2>
//class Person;
//
//// ��������ģ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p);
//
//// ������ģ��
//template<class T1, class T2>
//class Person {
//    // ��Ԫ����
//    friend void printPerson(Person<T1, T2>& p) {
//        cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
//    }
//    // ��Ԫ����������ʵ��
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
//// ���庯��ģ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p) {
//    cout << "����ʵ�� ---- ������ " << p.m_Name << " ���䣺" << p.m_Age << endl;
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