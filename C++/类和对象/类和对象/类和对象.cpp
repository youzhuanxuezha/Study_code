#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include<fstream>
using namespace std;
const double pi = 3.14;

//1����װ������
//�����Ժ���Ϊ��Ϊһ�����壬�������������е�����
//��װһ��Բ�࣬��Բ���ܳ�
//class�������һ���࣬������ŵ�������

//class Circle
//{
//public://����Ȩ��Ϊ����
//	int c_r;//���ԣ��뾶
//	double calculatezc()//��Ϊ�����ܳ�
//	{
//		return 2 * pi * c_r;//��ȡԲ���ܳ�
//	}
//};
//int main()
//{
//	Circle c1;//����Բ�Ķ���
//	c1.c_r = 10;//����Բ�뾶
//	cout << "Բ���ܳ�Ϊ��" << c1.calculatezc() << endl;
//	system("pause");
//	return 0;
//}

//class Student {
//public:
//	//����
//	string name;
//	int id;
//	//��Ϊ
//	void showstudent()
//	{
//		cout << "����Ϊ��" << name<< " ѧ��Ϊ��" << id << endl;
//	}
//};
//int main()
//{
//	Student m1;
//	m1.name = "zhangsan";
//	m1.id = 123456;
//	m1.showstudent();
//	system("pause");
//	return 0;
//
//}

//class Student {
//public:
//	void setName(string name) {
//		m_name = name;
//	}
//	void setID(int id) {
//		m_id = id;
//	}
//	void showStudent() {
//		cout << "name:" << m_name << " ID:" << m_id << endl;
//	}
//public:
//	string m_name;
//	int m_id;
//};
//
//int main() {
//	Student stu;
//	stu.setName("��������");
//	stu.setID(250);
//	stu.showStudent();
//	system("pause");
//	return 0;
//}

//class Person
//{
//	//����  ����Ȩ��
//public:
//	string m_Name;
//	//����  ����Ȩ��
//protected:
//	string m_Car;
//	//���п�����  ˽��Ȩ��
//private:
//	int m_Password;
//public:
//	void func()
//	{
//		m_Name = "����";
//		m_Car = "������";
//		m_Password = 123456;
//	}
//};
//
//int main() {
//	Person p;
//	p.m_Name = "����";
//	//p.m_Car = "����";  //����Ȩ��������ʲ���
//	//p.m_Password = 123; //˽��Ȩ��������ʲ���
//	system("pause");
//	return 0;
//}

////��C++�� struct��classΨһ�����������Ĭ�ϵķ���Ȩ�޲�ͬ
//class C1
//{
//	int  m_A; //Ĭ����˽��Ȩ��
//};
//struct C2
//{
//	int m_A;  //Ĭ���ǹ���Ȩ��
//};
//int main() {
//
//	C1 c1;
//	c1.m_A = 10; //���󣬷���Ȩ����˽��
//	C2 c2;
//	c2.m_A = 10; //��ȷ������Ȩ���ǹ���
//	system("pause");
//	return 0;
//}

//class Person {
//public:
//
//	//�������ÿɶ���д
//	void setName(string name) {
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}
//	//��ȡ���� 
//	int getAge() {
//		return m_Age;
//	}
//	//��������
//	void setAge(int age) {
//		if (age < 0 || age > 150) {
//			cout << "���������!" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//��������Ϊֻд
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//private:
//	string m_Name; //�ɶ���д  ����
//	int m_Age; //�ɶ�����������д  ����
//	string m_Lover; //ֻд  ����
//};
//
//int main() {
//
//	Person p;
//	//��������
//	p.setName("����");
//	cout << "������ " << p.getName() << endl;
//	//��������
//	p.setAge(40);
//	cout << "���䣺 " << p.getAge() << endl;
//	//��������
//	p.setLover("�Ծ�");
//	//cout << "���ˣ� " << p.m_Lover << endl;  //ֻд���ԣ������Զ�ȡ
//	system("pause");
//	return 0;
//}


////�����������(Cube)
////������������������
////�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�
//class Strangle 
//{
//public:
//	void setlen(int l)
//	{
//		m_L = l;
//	}
//	int getlen()
//	{
//		return m_L;
//	}
//	void setw(int w)
//	{
//		m_L = w;
//	}
//	int getw()
//	{
//		return m_W;
//	}
//	void seth(int h)
//	{
//		m_H = h;
//	}
//	int geth()
//	{
//		return m_H;
//	}
//	int squar()
//	{
//		return  m_H * m_W * m_L;
//	}
//	int alllen()
//	{
//		return 4 * m_H + 4 * m_W + 4 * m_L;
//	}
//	int issame(Strangle& c)//��Ա�ڲ���ֵ����Ա�����ô�������ֱ�ӵ��ü���
//	{
//		if (m_H == c.geth() && m_L == c.getlen() && m_W == c.getw())
//		{
//			return 1;
//		}
//		return 0;
//	}
//private:
//	int m_H;
//	int m_W;
//	int m_L;
//};
//int issame(Strangle c1, Strangle c2)//ȫ�ֺ���
//{
//	if (c1.geth() == c2.geth() && c1.getlen() == c2.getlen() && c1.getw() == c2.getw())
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	Strangle c1;
//	c1.setlen(10);
//	c1.seth(10);
//	c1.setw(10);
//	Strangle c2;
//	c2.setlen(10);
//	c2.seth(10);
//	c2.setw(10);
//	int ret = issame(c1, c2);
//		if (ret)
//		{
//			cout << "ȫ�֣�same" << endl;
//		}
//		else {
//			cout << "ȫ�֣�diff" << endl;
//		}
//		 ret = c1.issame(c2);
//		if (ret)
//		{
//			cout << "��Ա��same" << endl;
//		}
//		else {
//			cout << "��Ա��diff" << endl;
//		}
//	system("pause");
//	return 0;
//}

////���캯������Ҫ�������ڴ�������ʱΪ����ĳ�Ա���Ը�ֵ�����캯���ɱ������Զ����ã������ֶ����á�
////������������Ҫ�������ڶ�������ǰϵͳ�Զ����ã�ִ��һЩ��������
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "Person�Ĺ��캯������" << endl;//û�е��ã����������Զ�����
//	}
//	//��������
//	~Person()
//	{
//		cout << "Person��������������" << endl;//
//	}
//};
//void test01()
//{
//	Person p;//�����������У��򲻻����������������Ϊ����û���پͽ���������
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}

////1�����캯������
//// ���ղ��������Ϊ �вκ��޲ι���   �޲��ֳ�ΪĬ�Ϲ��캯��
//// �������ͷ����Ϊ ��ͨ����Ϳ�������
//class Person {
//public:
//	//�޲Σ�Ĭ�ϣ����캯��
//	Person() {
//		cout << "�޲ι��캯��!" << endl;
//	}
//	//�вι��캯��
//	Person(int a) {
//		age = a;
//		cout << "�вι��캯��!" << endl;
//	}
//	//�������캯��
//	Person(const Person& p) //������������ϵ����ݴ�������
//	{
//		age = p.age;
//		cout << "�������캯��!" << endl;
//	}
//	//��������
//	~Person() {
//		cout << "��������!" << endl;
//	}
//public:
//	int age;
//};
//
//void test01() 
//{
//
//	//2.1  ���ŷ�������
//	Person p1;//Ĭ�Ϲ��캯������
//	Person p2(10);//�вι��캯��
//	Person p3(p2);//�������캯��
//	cout << "p2����Ϊ��" << p2.age << endl;
//	cout << "p3����Ϊ��" << p3.age << endl;
//	////ע��1�������޲ι��캯�����ܼ����ţ�������˱�������Ϊ����һ����������,������Ϊ�ڴ�������
//	//2.2 ��ʽ��
//	Person p4
//	Person p5 = Person(10);
//	Person p6 = Person(p5);
//	//Person(10)����д������������  ��ǰ�н���֮����������
//	// ��Ҫ���ÿ������캯������ʼ���������󣬱���������ΪPerson(p6)==Person p6,�ض�����
//	////2.3 ��ʽת����
//	//Person p6 = 10; // Person p4 = Person(10); 
//	//Person p7 = p4; // Person p5 = Person(p4); 
//	////ע��2���������� �������캯�� ��ʼ���������� ��������Ϊ�Ƕ�������
//	////Person p5(p4);
//}
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}

////C++�п������캯������ʱ��ͨ�����������
////ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
////ֵ���ݵķ�ʽ������������ֵ
////��ֵ��ʽ���ؾֲ�����
//class Person {
//public:
//	Person() {
//		cout << "�޲ι��캯��!" << endl;
//		mAge = 0;
//	}
//	Person(int age) {
//		cout << "�вι��캯��!" << endl;
//		mAge = age;
//	}
//	Person(const Person& p) {
//		cout << "�������캯��!" << endl;
//		mAge = p.mAge;
//	}
//	//�����������ͷ��ڴ�֮ǰ����
//	~Person() {
//		cout << "��������!" << endl;
//	}
//public:
//	int mAge;
//};
////1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01() {
//
//	Person man(100); //p�����Ѿ��������
//	Person newman(man); //���ÿ������캯��
//	Person newman2 = man; //��������
//	//Person newman3;
//	//newman3 = man; //���ǵ��ÿ������캯������ֵ����
//}
////2. ֵ���ݵķ�ʽ������������ֵ
////�൱��Person p1 = p;
//void doWork(Person p1) 
//{
//
//}
//void test02() {
//	Person p; //�޲ι��캯��
//	doWork(p);
//}
////3. ��ֵ��ʽ���ؾֲ�����
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}
//int main() {
//
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}

////1��Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
////2��Ĭ����������(�޲Σ�������Ϊ��)
////3��Ĭ�Ͽ������캯���������Խ���ֵ����
////
////���캯�����ù������£�
////1������û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
////2������û����忽�����캯����c++�������ṩ�������캯��
//class Person {
//public:
//	//�޲Σ�Ĭ�ϣ����캯��
//	Person() {
//		cout << "�޲ι��캯��!" << endl;
//	}
//	//�вι��캯��
//	Person(int a) {
//		age = a;
//		cout << "�вι��캯��!" << endl;
//	}
//	//�������캯��
//	Person(const Person& p) {
//		age = p.age;
//		cout << "�������캯��!" << endl;
//	}
//	//��������
//	~Person() {
//		cout << "��������!" << endl;
//	}
//public:
//	int age;
//};
//void test01()
//{
//	Person p1(18);
//	//�����д�������죬���������Զ���ӿ������죬������ǳ��������
//	/*�����������Person(const Person & p) {
//		age = p.age;
//		
//	}�ĺ���*/
//	Person p2(p1);
//
//	cout << "p2������Ϊ�� " << p2.age << endl;
//}
//void test02()
//{
//	//����û��ṩ�вι��죬�����������ṩĬ�Ϲ��죬���ṩ��������
//	Person p1; //��ʱ����û��Լ�û���ṩĬ�Ϲ��죬�����
//	Person p2(10); //�û��ṩ���в�
//	Person p3(p2); //��ʱ����û�û���ṩ�������죬���������ṩ
//
//	//����û��ṩ�������죬�����������ṩ�������캯��
//	Person p4; //��ʱ����û��Լ�û���ṩĬ�Ϲ��죬�����
//	Person p5(10); //��ʱ����û��Լ�û���ṩ�вΣ������
//	Person p6(p5); //�û��Լ��ṩ��������
//}
//int main() {
//
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

////�����ǳ����
//class Person {
//public:
//	Person()
//	{
//		cout << "Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age,int height)
//	{
//		myAge = age;
//		myHeight = new int(height);
//		cout << "�вι��캯������" << endl;
//	}
//	Person(const Person& p)
//	{
//		cout << "������������" << endl;
//		myAge = p.myAge;
//		myHeight = new int(*p.myHeight);//�ڶ�������һ���¿ռ䣬�����������
//	}
//	~Person()
//	{
//		//�������������������ٵ������ͷ�
//		if (myHeight != NULL)
//		{
//			delete myHeight;
//			myHeight = NULL;
//		}
//		cout << "������������" << endl;
//	}
//	int myAge;
//	int* myHeight;
//};
//void test1()
//{
//	Person p1(18,160);
//	cout << "p1����Ϊ��" << p1.myAge << "p1���Ϊ��" << *p1.myHeight << endl;
//	Person p2(p1);
//	cout << "p2����Ϊ��" << p2.myAge << " p2���Ϊ��" << *p2.myHeight << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


////��ʼ���б� 
//class Person {
//public:
//	//Person(int a, int b, int c)//��ͳ��ʼ������
//	//{
//	//	myA = a;
//	//	myB = b;
//	//	myC = c;
//	//}
//
//	//��ʼ���б�ʽ��ʼ��
//	Person(int a,int b,int c):myA(a),myB(b),myC(c)
//	{
//
//	}
//	int myA;
//	int myB;
//	int myC;
//};
//void test1()
//{
//	Person p(1, 2, 3);
//	cout << "myA=" << p.myA << endl;
//	cout << "myB=" << p.myB << endl;
//	cout << "myB=" << p.myB << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

//class Phone
//{
//public:
//	Phone(string name)
//	{
//		m_PhoneName = name;
//		cout << "Phone����" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone����" << endl;
//	}
//	string m_PhoneName;
//
//};
//class Person
//{
//public:
//	//��ʼ���б���Ը��߱�����������һ�����캯��
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person����" << endl;
//	}
//	~Person()
//	{
//		cout << "Person����" << endl;
//	}
//	void playGame()
//	{
//		cout << m_Name << " ʹ��" << m_Phone.m_PhoneName << " ���ֻ�! " << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//
//};
//void test01()
//{
//	//�����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
//	//�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
//	//����˳���빹���෴
//	Person p("����", "ƻ��X");
//	p.playGame();
//}
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}

//��̬��Ա����
//��̬��Ա�����ص㣺
	//1 �ڱ���׶η����ڴ�
	//2 ���������������ʼ��
	//3 ���ж�����ͬһ������
//class Person {
//public:
//	static int myA;
//private:
//	static int myB
//};
//int Person::myA = 100;//���ⲿ����myA����Person�������µľ�̬��Ա
//int Person::myB = 100;
//void test1()
//{
//	Person p;
//	cout << p.myA << endl;
//	Person p2;
//	p2.myA = 200;
//	cout << p2.myA << endl;//myA��Ϊ200��֤����̬��Ա���ж�����ͬһ������
//}
//void test2()
//{
//	//��̬��Ա�������ַ��ʷ�ʽ
//	//1��ͨ������
//	Person p1;
//	p1.myA = 100;
//	cout << "p1.myA = " << p1.myA << endl;
//	Person p2;
//	p2.myA = 200;
//	cout << "p1.myA = " << p1.myA << endl; //����ͬһ������
//	cout << "p2.myA = " << p2.myA << endl;
//
//	//2��ͨ������
//	cout << "myA = " << Person::myA << endl;
//	//��̬��Ա����Ҳ�з���Ȩ��   
//	//cout << "m_B = " << Person::m_B << endl; //˽��Ȩ�޷��ʲ���
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}

//class Person
//{
//public:
//	//��̬��Ա�����ص㣺
//	//1 ������һ������
//	//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//	static void func()
//	{
//		cout << "func����" << endl;
//		m_A = 100;
//		//m_B = 100; //���󣬲����Է��ʷǾ�̬��Ա�������޷����ֵ������ĸ������
//	}
//	static int m_A; //��̬��Ա����
//	int m_B; // 
//private:
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//	static void func2()
//	{
//		cout << "func2����" << endl;
//	}
//};
//int Person::m_A = 10;
//void test01()
//{
//	//��̬��Ա�������ַ��ʷ�ʽ
//	//1��ͨ������
//	Person p1;
//	p1.func();
//	//2��ͨ������
//	Person::func();
//	//Person::func2(); //˽��Ȩ�޷��ʲ��� 
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////���ڵĳ�Ա�����ͳ�Ա�����ֿ��洢
////ֻ�зǾ�̬��Ա������������Ķ�����
//class Person {
//public:
//	Person() {
//		mA = 0;
//	}
//	//�Ǿ�̬��Ա����ռ����ռ�,������Ķ�����
//	int mA;
//	//��̬��Ա������ռ����ռ䣬��������Ķ�����
//	static int mB;
//	//����Ҳ��ռ����ռ䣬���к�������һ������ʵ������������Ķ�����
//	void func() {
//		cout << "mA:" << this->mA << endl;
//	}
//	//��̬��Ա����Ҳ��ռ����ռ䣬��������Ķ�����
//	static void sfunc() {
//	}
//};
//int main() {
//	cout << sizeof(Person) << endl;
//	system("pause");
//	return 0;
//}

//class Person {
//public:
//	Person(int age)
//	{
//		this->age = age;//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//	}
//	/*void Addage(Person& p)
//	{
//		this->age += p.age;
//	}*/
//	Person& Addage(Person& p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
////1.������Ƴ�ͻ
//void test1()
//{
//	Person p1(18);
//	cout << "p1����Ϊ��" << p1.age << endl;
//}
////���ض�����
//void test2()
//{
//	Person p1(10);
//	Person p2(18);
//	/*p2.Addage(p1);*/
//	p2.Addage(p1).Addage(p1).Addage(p1);//��ʽ���˼��
//	cout << "p2����Ϊ��" << p2.age << endl;
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}


//class Person {
//public:
//	void Classname()
//	{
//		cout << "this is Person class" << endl;
//	}
//	void personage()
//	{
//		cout << "age=" <<myage<< endl;//myageǰĬ���и�thisָ��ָ�򣬶�thisΪ�գ����Ա���
//	}
//	int myage;
//};
//void test1()
//{
//	Person* p = NULL;
//	p->Classname();
//	p->personage();
//}
//int main() {
//	test1();
//	system("pause");
//	return 0;
//}

////ȫ�ֺ�������Ԫ
//class Building
//{
//	//���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
//	friend void goodGay(Building* building);
//public:
//	Building()
//	{
//		this->m_SittingRoom = "����";
//		this->m_BedRoom = "����";
//	}
//public:
//	string m_SittingRoom; //����
//private:
//	string m_BedRoom; //����
//};
//
//
//void goodGay(Building* building)
//{
//	cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
//	cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl;
//}
//void test01()
//{
//	Building b;
//	goodGay(&b);
//}
//int main() { 
//	test01();
//	system("pause");
//	return 0;
//}

////������Ԫ
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();
//private:
//	Building* building;
//};
//class Building
//{
//	//���߱����� goodGay����Building��ĺ����ѣ����Է��ʵ�Building����˽������
//	friend class GoodGay;
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //����
//private:
//	string m_BedRoom;//����
//};
//Building::Building()
//{
//	this->m_SittingRoom = "����";
//	this->m_BedRoom = "����";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
//	cout << "�û������ڷ���" << building->m_BedRoom << endl;
//}
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////��Ա��������Ԫ
//class Building;
//class goodGay
//{
//public:
//
//	goodGay();
//	void visit(); //ֻ��visit������ΪBuilding�ĺ����ѣ����Է�����Building��˽������
//	void visit2();//visit2�����Է�����Building��˽������
//private:
//	Building* building;
//};
//class Building
//{
//	//���߱�����  goodGay���е�visit��Ա���� ��Building�����ѣ����Է���˽������
//	friend void goodGay::visit();
//public:
//	Building();
//public:
//	string m_SittingRoom; //����
//private:
//	string m_BedRoom;//����
//};
//Building::Building()//����ʵ�ֳ�Ա����
//{
//	this->m_SittingRoom = "����";
//	this->m_BedRoom = "����";
//}
//goodGay::goodGay()
//{
//	building = new Building;
//}
//void goodGay::visit()
//{
//	cout << "�û������ڷ���" << building->m_SittingRoom << endl;
//	cout << "�û������ڷ���" << building->m_BedRoom << endl;
//}
//void goodGay::visit2()
//{
//	cout << "visit2���ڷ���" << building->m_SittingRoom << endl;
//	//cout << "visit2���ڷ���" << building->m_BedRoom << endl;
//}
//void test01()
//{
//	goodGay  gg;
//	gg.visit();
//}
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}


////�Ӻ����������
//class Person {
//public:
//
//	int mya;
//	int myb;
//	Person operator+ (Person& p)//ͨ����Ա�����������������
//	{
//		Person temp;
//		temp.mya = this->mya + p.mya;
//		temp.myb = this->myb + p.myb;
//		return temp;
//}
//};
////ͨ��ȫ�ֺ�������
////Person operator+(const Person& p1, const Person& p2) {
////	Person temp(0, 0);
////	temp.m_A = p1.m_A + p2.m_A;
////	temp.m_B = p1.m_B + p2.m_B;
////	return temp;
////}
//void test1()
//{
//	Person p1;
//	Person p2;
//	p1.mya = 10;
//	p1.myb = 20;
//	p2.mya = 20;
//	p2.myb = 10;
//	Person p3 = p1 + p2;//�൱��Person p3 = p1 + p1.operator+(p2);
//	cout << p3.mya << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

////�������������
//class Person {
//	friend ostream& operator<<(ostream& out, Person& p);
//
//public:
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//	//��Ա���� ʵ�ֲ���  p << cout ����������Ҫ��Ч��
//	//void operator<<(Person& p){
//	//}
//private:
//	int m_A;
//	int m_B;
//};
//
////ȫ�ֺ���ʵ����������
////ostream����ֻ����һ����Ϊcout�ķ�������
//ostream& operator<<(ostream& out, Person& p) {
//	out << "a:" << p.m_A << " b:" << p.m_B;
//	return out;
//}
//
//void test() {
//	Person p1(10, 20);
//	cout << p1 << "hello world" << endl; //��ʽ���
//}
//
//int main() {
//	test();
//	system("pause");
//	return 0;
//}

////�������������
//class MyInteger {
//	friend ostream& operator<<(ostream& out, MyInteger myint);
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//ǰ��++
//	MyInteger& operator++()//����������Ϊ��һֱ��һ�����ݽ��е�������
//	{
//		//��++
//		m_Num++;
//		//�ٷ���
//		return *this;
//	}
//	//����++
//	MyInteger& operator++(int) {
//		//�ȷ���
//		MyInteger temp = *this; //��¼��ǰ�����ֵ��Ȼ���ñ����ֵ��1�����Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++��
//		m_Num++;
//		return temp;
//	}
//private:
//	int m_Num;
//};
//ostream& operator<<(ostream& out, MyInteger myint) {
//	out << myint.m_Num;
//	return out;
//}
////ǰ��++ ��++ �ٷ���
//void test01() {
//	MyInteger myInt;
//	cout << ++myInt << endl;
//	cout << myInt << endl;
//}
////����++ �ȷ��� ��++
//void test02() {
//	MyInteger myInt;
//	cout << myInt++ << endl;
//	cout << myInt << endl;
//}
//int main() {
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//��ֵ���������
////1.�������������ظ��ͷţ���ǳ��������
//class Person {
//public:
//	Person(int age) {
//		myage = new int(age);
//	}
//	~Person() {
//		if (myage != NULL)
//		{
//			delete myage;
//			myage = NULL;
//		}
//	}
//	int *myage;
//};
//void test1() {
//	Person p1(18);
//	Person p2(20);
//	p2 = p1;//��ֵ����
//	cout << "p1������Ϊ��" << *p1.myage << endl;
//	cout << "p2������Ϊ��" << *p2.myage << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}
////2.��ȷ����
//class Person {
//public:
//	Person(int age) {
//		myage = new int(age);
//	} 
//	Person& operator=(Person& p)
//	{
//		if (myage != NULL)
//		{
//			delete myage;
//			myage = NULL;
//		}
//		myage = new int(*p.myage);
//		return *this;
//	}
//	~Person() {
//		if (myage != NULL)
//		{
//			delete myage;
//			myage = NULL;
//		}
//	}
//	int* myage;
//};
//void test1() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(60);
//	p3 = p2 = p1;//��ֵ����
//	cout << "p1������Ϊ��" << *p1.myage << endl;
//	cout << "p2������Ϊ��" << *p2.myage << endl;
//	cout << "p3������Ϊ��" << *p3.myage << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


//��ϵ���������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	};
//	bool operator==(Person& p)//������٣����ò�������
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	int operator!=(Person& p)
//	{
//		if (this->m_Name == p.m_Name &&  this->m_Age == p.m_Age)
//		{
//			return 0;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//void test01()
//{
//	//int a = 0;
//	//int b = 0;
//	Person a("�����", 18);
//	Person b("�����", 18);
//	if (a == b)
//	{
//		cout << "a��b���" << endl;
//	}
//	else
//	{
//		cout << "a��b�����" << endl;
//	}
//	if (a != b)
//	{
//		cout << "a��b�����" << endl;
//	}
//	else
//	{
//		cout << "a��b���" << endl;
//	}
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////�����������������
//class myPrint {
//public:
//	void operator()(string test) {
//		cout << test << endl;
//	}
//		
//};
//void myPrint2(string test)
//{
//	cout << test << endl;
//}
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//void test1()
//{
//	myPrint p1;
//	p1("hello world");//������α����
//	myPrint2("hello world");
//}
//void test2()
//{
//	MyAdd add;
//	int ret = add(10, 10);
//	cout << "ret = " << ret << endl;
//	cout << "MyAdd()(100,100) = " << MyAdd()(100,100) << endl;//�����������  
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}

////��ͨд��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "JAVAѧ����Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//void test01()
//{
//	//Javaҳ��
//	cout << "Java������Ƶҳ�����£� " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------" << endl;
//	//Pythonҳ��
//	cout << "Python������Ƶҳ�����£� " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "--------------------" << endl;
//	//C++ҳ��
//	cout << "C++������Ƶҳ�����£� " << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////�̳�ʵ��ҳ��
//class BasePage//����ҳ��
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(���������б�)" << endl;
//	}
//
//};
////Javaҳ��
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "JAVAѧ����Ƶ" << endl;
//	}
//};
////Pythonҳ��
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//class CPP : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//void test01()
//{
//	//Javaҳ��
//	cout << "Java������Ƶҳ�����£� " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------" << endl;
//	//Pythonҳ��
//	cout << "Python������Ƶҳ�����£� " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "--------------------" << endl;
//	//C++ҳ��
//	cout << "C++������Ƶҳ�����£� " << endl;
//	CPP cp;
//	cp.header();
//	cp.footer();
//	cp.left();
//	cp.content();
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C; //˽�г�Աֻ�Ǳ������ˣ����ǻ��ǻ�̳���ȥ
//};
////�����̳�
//class Son :public Base
//{
//public:
//	int m_D;
//};
//void test01()
//{
//	cout << "sizeof Son = " << sizeof(Son) << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base���캯��!" << endl;
//	}
//	~Base()
//	{
//		cout << "Base��������!" << endl;
//	}
//};
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son���캯��!" << endl;
//	}
//	~Son()
//	{
//		cout << "Son��������!" << endl;
//	}
//};
//void test01()
//{   //�̳��� �ȵ��ø��๹�캯�����ٵ������๹�캯��������˳���빹���෴
//	Son s;
//}
//int main() { 
//	test01();
//	system("pause");
//	return 0;
//}

////�̳�ͬ����Ա����ʽ
//class Base {
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base - func()����" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base - func(int a)����" << endl;
//	}
//public:
//	int m_A;
//};
//class Son : public Base {
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//	//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա����
//	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
//	void func()
//	{
//		cout << "Son - func()����" << endl;
//	}
//public:
//	int m_A;
//};
//void test01()
//{
//	Son s;
//	cout << "Son�µ�m_A = " << s.m_A << endl;
//	cout << "Base�µ�m_A = " << s.Base::m_A << endl;
//	s.func();
//	s.Base::func();
//	s.Base::func(10);
//}
//int main() {
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}

////�̳�ͬ����̬��Ա����ʽ
//class Base {
//public:
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//	static int m_A;
//};
//int Base::m_A = 100;
//class Son : public Base {
//public:
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//	static int m_A;
//};
//int Son::m_A = 200;
////ͬ����Ա����
//void test01()
//{
//	//ͨ���������
//	cout << "ͨ��������ʣ� " << endl;
//	Son s;
//	cout << "Son  �� m_A = " << s.m_A << endl;
//	cout << "Base �� m_A = " << s.Base::m_A << endl;
//	//ͨ����������
//	cout << "ͨ���������ʣ� " << endl;
//	cout << "Son  �� m_A = " << Son::m_A << endl;
//	cout << "Base �� m_A = " << Son::Base::m_A << endl;
//}
////ͬ����Ա����
//void test02()
//{
//	//ͨ���������
//	cout << "ͨ��������ʣ� " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	cout << "ͨ���������ʣ� " << endl;
//	Son::func();
//	Son::Base::func();
//	//����ͬ������������ص�����������ͬ����Ա��������Ҫ�������������
//	Son::Base::func(100);
//}
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}


//class Animal
//{
//public:
//	int m_Age;
//};
////�̳�ǰ��virtual�ؼ��ֺ󣬱�Ϊ��̳�
////��ʱ�����ĸ���Animal��Ϊ�����
//class Sheep : virtual public Animal {};
//class Tuo : virtual public Animal {};
//class SheepTuo : public Sheep, public Tuo {};
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 100;
//	st.Tuo::m_Age = 200;
//	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
//	cout << "st.m_Age = " << st.m_Age << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////��̬��������
//class Animal {
//public:
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "è��˵��" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "����˵��" << endl;
//	}
//};
//void dospeak(Animal &animal)//��̬ʹ������������ָ�������ָ���������
//{
//	animal.speak();
//}
//void test1()
//{
//	Cat cat;
//	dospeak(cat);
//
//	Dog dog;
//	dospeak(dog);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

////��������ͨд��
//class Calculator {
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+") {
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-") {
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*") {
//			return m_Num1 * m_Num2;
//		}
//		//���Ҫ�ṩ�µ����㣬��Ҫ�޸�Դ��
//	}
//public:
//	int m_Num1;
//	int m_Num2;
//};
//void test01()
//{
//	//��ͨʵ�ֲ���
//	Calculator c;
//	cin >> c.m_Num1;
//	cin >> c.m_Num2;
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

////��������̬д��
//class abstractcaculator {
//public:
//	virtual int getresult()
//	{
//		return 0;
//	}
//	int num1;
//	int num2;
//};
//class ADD:public abstractcaculator {
//public:
//	int getresult()
//	{
//		return num1 + num2;
//	}
//};
//class sub :public abstractcaculator {
//public:
//	int getresult()
//	{
//		return num1 - num2;
//	}
//};
//class mul :public abstractcaculator {
//public:
//	int getresult()
//	{
//		return num1 * num2;
//	}
//};
//void test1()
//{
//	abstractcaculator* c = new ADD;
//	cin >> c->num1;
//	cin >> c->num2;
//	cout << c->num1 << "+" << c->num2 << "=" << c->getresult() << endl;
//	delete c;
//	 c = new sub;
//	cout << c->num1 << "-" << c->num2 << "=" << c->getresult() << endl;
//	delete c;
//	 c = new mul;
//	cout << c->num1 << "*" << c->num2 << "=" << c->getresult() << endl;
//	delete c;
//
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


//class Base
//{
//public:
//	//���麯��
//	//����ֻҪ��һ�����麯���ͳ�Ϊ������
//	//�������޷�ʵ��������
//	//���������д�����еĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//};
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func����" << endl;
//	};
//};
//void test01()
//{
//	Base* base = NULL;
//	//base = new Base; // ���󣬳������޷�ʵ��������
//	base = new Son;
//	base->func();
//	delete base;//�ǵ�����
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////����������Ʒ
//class AbstractDrinking {
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PourInCup() = 0;
//	//���븨��
//	virtual void PutSomething() = 0;
//	//�涨����
//	void MakeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////��������
//class Coffee : public AbstractDrinking {
//public:
//	//��ˮ
//	virtual void Boil() {
//		cout << "��ũ��ɽȪ!" << endl;
//	}
//	//����
//	virtual void Brew() {
//		cout << "���ݿ���!" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup() {
//		cout << "�����ȵ��뱭��!" << endl;
//	}
//	//���븨��
//	virtual void PutSomething() {
//		cout << "����ţ��!" << endl;
//	}
//};
////������ˮ
//class Tea : public AbstractDrinking {
//public:
//	//��ˮ
//	virtual void Boil() {
//		cout << "������ˮ!" << endl;
//	}
//	//����
//	virtual void Brew() {
//		cout << "���ݲ�Ҷ!" << endl;
//	}
//	//���뱭��
//	virtual void PourInCup() {
//		cout << "����ˮ���뱭��!" << endl;
//	}
//	//���븨��
//	virtual void PutSomething() {
//		cout << "�������!" << endl;
//	}
//};
////ҵ����
//void DoWork(AbstractDrinking* drink) {
//	drink->MakeDrink();
//	delete drink;
//}
//void test01() {
//	DoWork(new Coffee);
//	cout << "--------------" << endl;
//	DoWork(new Tea);
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


//class Animal {
//public:
//	Animal()
//	{
//		cout << "Animal ���캯�����ã�" << endl;
//	}
//	virtual void Speak() = 0;
//	//������������virtual�ؼ��֣��������������
//	/*virtual ~Animal()
//	{
//		cout << "Animal�������������ã�" << endl;
//	}*/
//	virtual ~Animal() = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal ���������������ã�" << endl;
//}
////�Ͱ�����ͨ���麯������һ���������˴���������������Ҳ��һ�������ࡣ���ܹ���ʵ������
//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯�����ã�" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
//	{
//		cout << *m_Name << "Сè��˵��!" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat������������!" << endl;
//		if (this->m_Name != NULL) {
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//public:
//	string* m_Name;
//};
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->Speak();
//	//ͨ������ָ��ȥ�ͷţ��ᵼ�����������������ɾ�������ڴ�й©
//	//��ô���������������һ������������
//	//���������������������ͨ������ָ���ͷ��������
//	delete animal;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////����CPU��
//class CPU
//{
//public:
//	//����ļ��㺯��
//	virtual void calculate() = 0;
//};
////�����Կ���
//class VideoCard
//{
//public:
//	//�������ʾ����
//	virtual void display() = 0;
//};
////�����ڴ�����
//class Memory
//{
//public:
//	//����Ĵ洢����
//	virtual void storage() = 0;
//};
////������
//class Computer
//{
//public:
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//	//�ṩ�����ĺ���
//	void work()
//	{
//		//������������������ýӿ�
//		m_cpu->calculate();
//
//		m_vc->display();
//
//		m_mem->storage();
//	}
//	//�ṩ�������� �ͷ�3���������
//	~Computer()
//	{
//     	//�ͷ�CPU���
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		//�ͷ��Կ����
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		//�ͷ��ڴ������
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//private:
//	CPU* m_cpu; //CPU�����ָ��
//	VideoCard* m_vc; //�Կ����ָ��
//	Memory* m_mem; //�ڴ������ָ��
//};
////���峧��
////Intel����
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Intel��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
////Lenovo����
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Lenovo��CPU��ʼ�����ˣ�" << endl;
//	}
//};
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
//	}
//};
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
//	}
//};
//void test01()
//{
//	//��һ̨�������
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMem = new IntelMemory;
//	cout << "��һ̨���Կ�ʼ������" << endl;
//	//������һ̨����
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//	cout << "-----------------------" << endl;
//	cout << "�ڶ�̨���Կ�ʼ������" << endl;
//	//�ڶ�̨������װ
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);;
//	computer2->work();
//	delete computer2;
//	cout << "-----------------------" << endl;
//	cout << "����̨���Կ�ʼ������" << endl;
//	//����̨������װ
//	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);;
//	computer3->work();
//	delete computer3;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

////д�ļ�
//void test1()
//{
//	//����������
//	ofstream ofs;
//	//ָ���򿪷�ʽ
//	ofs.open("test.txt", ios::out);//��ָ��·���ʹ洢�ڸ�Ŀ¼��
//	//д����
//	ofs << "name:zhangsan" << endl;
//	ofs << "sex:man" << endl;
//	//�ر��ļ�
//	ofs.close();
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

////���ļ�
//void test1()
//{
//	//����������
//	ifstream ifs;
//	//ָ���򿪷�ʽ
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "erorr" << endl;
//		return;
//	}
//	//���ļ�
//	//��һ�ַ�ʽ
//	char buf[1024] = { 0 };
//    while (ifs >> buf)//����������� >> ���ļ��� ifs �ж�ȡ���ݣ�������ȡ�����ݴ洢���ַ����� buf �С�
////������˵�������ȡ�ļ����е���һ�����ʣ��Կո�Ϊ�ָ�����������洢�� buf �У�Ȼ�����ִ��ѭ���еĴ���
//{
//	cout << buf << endl;
//}
//
//////�ڶ���
////char buf[1024] = { 0 };
////while (ifs.getline(buf,sizeof(buf)))
////{
////	cout << buf << endl;
////}
////
//////������
////string buf;
////while (getline(ifs, buf))
////{
////	cout << buf << endl;
////}
////	char c;
////	while ((c = ifs.get()) != EOF)
////	{
////		cout << c;
////	}
//	//�ر��ļ�
//	ifs.close();
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
////�������ļ�  д�ļ�
//void test01()
//{
//	//1������ͷ�ļ�
//	//2���������������
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	//3�����ļ�
//	//ofs.open("person.txt", ios::out | ios::binary);
//	Person p = { "����"  , 18 };
//	//4��д�ļ�
//	ofs.write((const char*)&p, sizeof(p));
//	//5���ر��ļ�
//	ofs.close();
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test1()
{
	ifstream ifs("person.txt", ios::in | ios::binar  y);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}
	Person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
}

int main() {
	test1();
	system("pause");
	return 0;
}