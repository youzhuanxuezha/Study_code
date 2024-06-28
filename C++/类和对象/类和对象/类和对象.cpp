#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include<fstream>
using namespace std;
const double pi = 3.14;

//1、封装的意义
//将属性和行为作为一个整体，用来表现生活中的事物
//封装一个圆类，求圆的周长
//class代表设计一个类，后面跟着的是类名

//class Circle
//{
//public://访问权限为公共
//	int c_r;//属性：半径
//	double calculatezc()//行为：求周长
//	{
//		return 2 * pi * c_r;//获取圆的周长
//	}
//};
//int main()
//{
//	Circle c1;//创建圆的对象
//	c1.c_r = 10;//给予圆半径
//	cout << "圆的周长为：" << c1.calculatezc() << endl;
//	system("pause");
//	return 0;
//}

//class Student {
//public:
//	//属性
//	string name;
//	int id;
//	//行为
//	void showstudent()
//	{
//		cout << "姓名为：" << name<< " 学号为：" << id << endl;
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
//	stu.setName("德玛西亚");
//	stu.setID(250);
//	stu.showStudent();
//	system("pause");
//	return 0;
//}

//class Person
//{
//	//姓名  公共权限
//public:
//	string m_Name;
//	//汽车  保护权限
//protected:
//	string m_Car;
//	//银行卡密码  私有权限
//private:
//	int m_Password;
//public:
//	void func()
//	{
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//};
//
//int main() {
//	Person p;
//	p.m_Name = "李四";
//	//p.m_Car = "奔驰";  //保护权限类外访问不到
//	//p.m_Password = 123; //私有权限类外访问不到
//	system("pause");
//	return 0;
//}

////在C++中 struct和class唯一的区别就在于默认的访问权限不同
//class C1
//{
//	int  m_A; //默认是私有权限
//};
//struct C2
//{
//	int m_A;  //默认是公共权限
//};
//int main() {
//
//	C1 c1;
//	c1.m_A = 10; //错误，访问权限是私有
//	C2 c2;
//	c2.m_A = 10; //正确，访问权限是公共
//	system("pause");
//	return 0;
//}

//class Person {
//public:
//
//	//姓名设置可读可写
//	void setName(string name) {
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}
//	//获取年龄 
//	int getAge() {
//		return m_Age;
//	}
//	//设置年龄
//	void setAge(int age) {
//		if (age < 0 || age > 150) {
//			cout << "你个老妖精!" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	//情人设置为只写
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//private:
//	string m_Name; //可读可写  姓名
//	int m_Age; //可读，有条件的写  年龄
//	string m_Lover; //只写  情人
//};
//
//int main() {
//
//	Person p;
//	//姓名设置
//	p.setName("张三");
//	cout << "姓名： " << p.getName() << endl;
//	//年龄设置
//	p.setAge(40);
//	cout << "年龄： " << p.getAge() << endl;
//	//情人设置
//	p.setLover("苍井");
//	//cout << "情人： " << p.m_Lover << endl;  //只写属性，不可以读取
//	system("pause");
//	return 0;
//}


////设计立方体类(Cube)
////求出立方体的面积和体积
////分别用全局函数和成员函数判断两个立方体是否相等。
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
//	int issame(Strangle& c)//成员内部传值，成员本身不用传进来，直接调用即可
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
//int issame(Strangle c1, Strangle c2)//全局函数
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
//			cout << "全局：same" << endl;
//		}
//		else {
//			cout << "全局：diff" << endl;
//		}
//		 ret = c1.issame(c2);
//		if (ret)
//		{
//			cout << "成员：same" << endl;
//		}
//		else {
//			cout << "成员：diff" << endl;
//		}
//	system("pause");
//	return 0;
//}

////构造函数：主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无须手动调用。
////析构函数：主要作用在于对象销毁前系统自动调用，执行一些清理工作。
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的构造函数调用" << endl;//没有调用，但编译器自动调用
//	}
//	//析构函数
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;//
//	}
//};
//void test01()
//{
//	Person p;//若放主函数中，则不会调用析构函数，因为数据没消毁就结束程序了
//}
//
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}

////1、构造函数分类
//// 按照参数分类分为 有参和无参构造   无参又称为默认构造函数
//// 按照类型分类分为 普通构造和拷贝构造
//class Person {
//public:
//	//无参（默认）构造函数
//	Person() {
//		cout << "无参构造函数!" << endl;
//	}
//	//有参构造函数
//	Person(int a) {
//		age = a;
//		cout << "有参构造函数!" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p) //将传入的人身上的数据传到这里
//	{
//		age = p.age;
//		cout << "拷贝构造函数!" << endl;
//	}
//	//析构函数
//	~Person() {
//		cout << "析构函数!" << endl;
//	}
//public:
//	int age;
//};
//
//void test01() 
//{
//
//	//2.1  括号法，常用
//	Person p1;//默认构造函数调用
//	Person p2(10);//有参构造函数
//	Person p3(p2);//拷贝构造函数
//	cout << "p2年龄为：" << p2.age << endl;
//	cout << "p3年龄为：" << p3.age << endl;
//	////注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明,不会认为在创建对象
//	//2.2 显式法
//	Person p4
//	Person p5 = Person(10);
//	Person p6 = Person(p5);
//	//Person(10)单独写就是匿名对象  当前行结束之后，马上析构
//	// 不要利用拷贝构造函数，初始化匿名对象，编译器会认为Person(p6)==Person p6,重定义了
//	////2.3 隐式转换法
//	//Person p6 = 10; // Person p4 = Person(10); 
//	//Person p7 = p4; // Person p5 = Person(p4); 
//	////注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
//	////Person p5(p4);
//}
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}

////C++中拷贝构造函数调用时机通常有三种情况
////使用一个已经创建完毕的对象来初始化一个新对象
////值传递的方式给函数参数传值
////以值方式返回局部对象
//class Person {
//public:
//	Person() {
//		cout << "无参构造函数!" << endl;
//		mAge = 0;
//	}
//	Person(int age) {
//		cout << "有参构造函数!" << endl;
//		mAge = age;
//	}
//	Person(const Person& p) {
//		cout << "拷贝构造函数!" << endl;
//		mAge = p.mAge;
//	}
//	//析构函数在释放内存之前调用
//	~Person() {
//		cout << "析构函数!" << endl;
//	}
//public:
//	int mAge;
//};
////1. 使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//
//	Person man(100); //p对象已经创建完毕
//	Person newman(man); //调用拷贝构造函数
//	Person newman2 = man; //拷贝构造
//	//Person newman3;
//	//newman3 = man; //不是调用拷贝构造函数，赋值操作
//}
////2. 值传递的方式给函数参数传值
////相当于Person p1 = p;
//void doWork(Person p1) 
//{
//
//}
//void test02() {
//	Person p; //无参构造函数
//	doWork(p);
//}
////3. 以值方式返回局部对象
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

////1．默认构造函数(无参，函数体为空)
////2．默认析构函数(无参，函数体为空)
////3．默认拷贝构造函数，对属性进行值拷贝
////
////构造函数调用规则如下：
////1、如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
////2、如果用户定义拷贝构造函数，c++不会再提供其他构造函数
//class Person {
//public:
//	//无参（默认）构造函数
//	Person() {
//		cout << "无参构造函数!" << endl;
//	}
//	//有参构造函数
//	Person(int a) {
//		age = a;
//		cout << "有参构造函数!" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p) {
//		age = p.age;
//		cout << "拷贝构造函数!" << endl;
//	}
//	//析构函数
//	~Person() {
//		cout << "析构函数!" << endl;
//	}
//public:
//	int age;
//};
//void test01()
//{
//	Person p1(18);
//	//如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
//	/*构造个类似于Person(const Person & p) {
//		age = p.age;
//		
//	}的函数*/
//	Person p2(p1);
//
//	cout << "p2的年龄为： " << p2.age << endl;
//}
//void test02()
//{
//	//如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
//	Person p1; //此时如果用户自己没有提供默认构造，会出错
//	Person p2(10); //用户提供的有参
//	Person p3(p2); //此时如果用户没有提供拷贝构造，编译器会提供
//
//	//如果用户提供拷贝构造，编译器不会提供其他构造函数
//	Person p4; //此时如果用户自己没有提供默认构造，会出错
//	Person p5(10); //此时如果用户自己没有提供有参，会出错
//	Person p6(p5); //用户自己提供拷贝构造
//}
//int main() {
//
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

////深拷贝与浅拷贝
//class Person {
//public:
//	Person()
//	{
//		cout << "默认构造函数调用" << endl;
//	}
//	Person(int age,int height)
//	{
//		myAge = age;
//		myHeight = new int(height);
//		cout << "有参构造函数调用" << endl;
//	}
//	Person(const Person& p)
//	{
//		cout << "拷贝函数调用" << endl;
//		myAge = p.myAge;
//		myHeight = new int(*p.myHeight);//在堆区开辟一块新空间，进行深拷贝操作
//	}
//	~Person()
//	{
//		//析构函数，将堆区开辟的数据释放
//		if (myHeight != NULL)
//		{
//			delete myHeight;
//			myHeight = NULL;
//		}
//		cout << "构析函数调用" << endl;
//	}
//	int myAge;
//	int* myHeight;
//};
//void test1()
//{
//	Person p1(18,160);
//	cout << "p1年龄为：" << p1.myAge << "p1身高为：" << *p1.myHeight << endl;
//	Person p2(p1);
//	cout << "p2年龄为：" << p2.myAge << " p2身高为：" << *p2.myHeight << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


////初始化列表 
//class Person {
//public:
//	//Person(int a, int b, int c)//传统初始化操作
//	//{
//	//	myA = a;
//	//	myB = b;
//	//	myC = c;
//	//}
//
//	//初始化列表方式初始化
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
//		cout << "Phone构造" << endl;
//	}
//	~Phone()
//	{
//		cout << "Phone析构" << endl;
//	}
//	string m_PhoneName;
//
//};
//class Person
//{
//public:
//	//初始化列表可以告诉编译器调用哪一个构造函数
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person构造" << endl;
//	}
//	~Person()
//	{
//		cout << "Person析构" << endl;
//	}
//	void playGame()
//	{
//		cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 牌手机! " << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//
//};
//void test01()
//{
//	//当类中成员是其他类对象时，我们称该成员为 对象成员
//	//构造的顺序是 ：先调用对象成员的构造，再调用本类构造
//	//析构顺序与构造相反
//	Person p("张三", "苹果X");
//	p.playGame();
//}
//int main() 
//{
//	test01();
//	system("pause");
//	return 0;
//}

//静态成员变量
//静态成员变量特点：
	//1 在编译阶段分配内存
	//2 类内声明，类外初始化
	//3 所有对象共享同一份数据
//class Person {
//public:
//	static int myA;
//private:
//	static int myB
//};
//int Person::myA = 100;//在外部声明myA是在Person作用域下的静态成员
//int Person::myB = 100;
//void test1()
//{
//	Person p;
//	cout << p.myA << endl;
//	Person p2;
//	p2.myA = 200;
//	cout << p2.myA << endl;//myA变为200，证明静态成员所有对象共享同一份数据
//}
//void test2()
//{
//	//静态成员变量两种访问方式
//	//1、通过对象
//	Person p1;
//	p1.myA = 100;
//	cout << "p1.myA = " << p1.myA << endl;
//	Person p2;
//	p2.myA = 200;
//	cout << "p1.myA = " << p1.myA << endl; //共享同一份数据
//	cout << "p2.myA = " << p2.myA << endl;
//
//	//2、通过类名
//	cout << "myA = " << Person::myA << endl;
//	//静态成员变量也有访问权限   
//	//cout << "m_B = " << Person::m_B << endl; //私有权限访问不到
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
//	//静态成员函数特点：
//	//1 程序共享一个函数
//	//2 静态成员函数只能访问静态成员变量
//	static void func()
//	{
//		cout << "func调用" << endl;
//		m_A = 100;
//		//m_B = 100; //错误，不可以访问非静态成员变量，无法区分到底是哪个对象的
//	}
//	static int m_A; //静态成员变量
//	int m_B; // 
//private:
//	//静态成员函数也是有访问权限的
//	static void func2()
//	{
//		cout << "func2调用" << endl;
//	}
//};
//int Person::m_A = 10;
//void test01()
//{
//	//静态成员变量两种访问方式
//	//1、通过对象
//	Person p1;
//	p1.func();
//	//2、通过类名
//	Person::func();
//	//Person::func2(); //私有权限访问不到 
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////类内的成员变量和成员函数分开存储
////只有非静态成员变量才属于类的对象上
//class Person {
//public:
//	Person() {
//		mA = 0;
//	}
//	//非静态成员变量占对象空间,属于类的对象上
//	int mA;
//	//静态成员变量不占对象空间，不属于类的对象上
//	static int mB;
//	//函数也不占对象空间，所有函数共享一个函数实例，不属于类的对象上
//	void func() {
//		cout << "mA:" << this->mA << endl;
//	}
//	//静态成员函数也不占对象空间，不属于类的对象上
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
//		this->age = age;//this指针指向被调用的成员函数所属的对象
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
////1.解决名称冲突
//void test1()
//{
//	Person p1(18);
//	cout << "p1年龄为：" << p1.age << endl;
//}
////返回对象本身
//void test2()
//{
//	Person p1(10);
//	Person p2(18);
//	/*p2.Addage(p1);*/
//	p2.Addage(p1).Addage(p1).Addage(p1);//链式编程思想
//	cout << "p2年龄为：" << p2.age << endl;
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
//		cout << "age=" <<myage<< endl;//myage前默认有个this指针指向，而this为空，所以报错
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

////全局函数做友元
//class Building
//{
//	//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
//	friend void goodGay(Building* building);
//public:
//	Building()
//	{
//		this->m_SittingRoom = "客厅";
//		this->m_BedRoom = "卧室";
//	}
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom; //卧室
//};
//
//
//void goodGay(Building* building)
//{
//	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
//	cout << "好基友正在访问： " << building->m_BedRoom << endl;
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

////类做友元
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
//	//告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
//	friend class GoodGay;
//public:
//	Building();
//
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom;//卧室
//};
//Building::Building()
//{
//	this->m_SittingRoom = "客厅";
//	this->m_BedRoom = "卧室";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	cout << "好基友正在访问" << building->m_BedRoom << endl;
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

////成员函数做友元
//class Building;
//class goodGay
//{
//public:
//
//	goodGay();
//	void visit(); //只让visit函数作为Building的好朋友，可以发访问Building中私有内容
//	void visit2();//visit2不可以发访问Building中私有内容
//private:
//	Building* building;
//};
//class Building
//{
//	//告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
//	friend void goodGay::visit();
//public:
//	Building();
//public:
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom;//卧室
//};
//Building::Building()//类外实现成员函数
//{
//	this->m_SittingRoom = "客厅";
//	this->m_BedRoom = "卧室";
//}
//goodGay::goodGay()
//{
//	building = new Building;
//}
//void goodGay::visit()
//{
//	cout << "好基友正在访问" << building->m_SittingRoom << endl;
//	cout << "好基友正在访问" << building->m_BedRoom << endl;
//}
//void goodGay::visit2()
//{
//	cout << "visit2正在访问" << building->m_SittingRoom << endl;
//	//cout << "visit2正在访问" << building->m_BedRoom << endl;
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


////加号运算符重载
//class Person {
//public:
//
//	int mya;
//	int myb;
//	Person operator+ (Person& p)//通过成员函数进行运算符重载
//	{
//		Person temp;
//		temp.mya = this->mya + p.mya;
//		temp.myb = this->myb + p.myb;
//		return temp;
//}
//};
////通过全局函数重载
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
//	Person p3 = p1 + p2;//相当于Person p3 = p1 + p1.operator+(p2);
//	cout << p3.mya << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

////左移运算符重载
//class Person {
//	friend ostream& operator<<(ostream& out, Person& p);
//
//public:
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//	//成员函数 实现不了  p << cout 不是我们想要的效果
//	//void operator<<(Person& p){
//	//}
//private:
//	int m_A;
//	int m_B;
//};
//
////全局函数实现左移重载
////ostream对象只能有一个，为cout的返回类型
//ostream& operator<<(ostream& out, Person& p) {
//	out << "a:" << p.m_A << " b:" << p.m_B;
//	return out;
//}
//
//void test() {
//	Person p1(10, 20);
//	cout << p1 << "hello world" << endl; //链式编程
//}
//
//int main() {
//	test();
//	system("pause");
//	return 0;
//}

////递增运算符重载
//class MyInteger {
//	friend ostream& operator<<(ostream& out, MyInteger myint);
//public:
//	MyInteger() {
//		m_Num = 0;
//	}
//	//前置++
//	MyInteger& operator++()//返回引用是为了一直对一个数据进行递增操作
//	{
//		//先++
//		m_Num++;
//		//再返回
//		return *this;
//	}
//	//后置++
//	MyInteger& operator++(int) {
//		//先返回
//		MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
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
////前置++ 先++ 再返回
//void test01() {
//	MyInteger myInt;
//	cout << ++myInt << endl;
//	cout << myInt << endl;
//}
////后置++ 先返回 再++
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

//赋值运算符重载
////1.发生堆区数据重复释放，即浅拷贝问题
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
//	p2 = p1;//赋值操作
//	cout << "p1的年龄为：" << *p1.myage << endl;
//	cout << "p2的年龄为：" << *p2.myage << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}
////2.正确做法
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
//	p3 = p2 = p1;//赋值操作
//	cout << "p1的年龄为：" << *p1.myage << endl;
//	cout << "p2的年龄为：" << *p2.myage << endl;
//	cout << "p3的年龄为：" << *p3.myage << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


//关系运算符重载
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	};
//	bool operator==(Person& p)//返回真假，利用布尔类型
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
//	Person a("孙悟空", 18);
//	Person b("孙悟空", 18);
//	if (a == b)
//	{
//		cout << "a和b相等" << endl;
//	}
//	else
//	{
//		cout << "a和b不相等" << endl;
//	}
//	if (a != b)
//	{
//		cout << "a和b不相等" << endl;
//	}
//	else
//	{
//		cout << "a和b相等" << endl;
//	}
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////函数调用运算符重载
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
//	p1("hello world");//类似于伪函数
//	myPrint2("hello world");
//}
//void test2()
//{
//	MyAdd add;
//	int ret = add(10, 10);
//	cout << "ret = " << ret << endl;
//	cout << "MyAdd()(100,100) = " << MyAdd()(100,100) << endl;//匿名对象调用  
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}

////普通写法
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//void test01()
//{
//	//Java页面
//	cout << "Java下载视频页面如下： " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------" << endl;
//	//Python页面
//	cout << "Python下载视频页面如下： " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "--------------------" << endl;
//	//C++页面
//	cout << "C++下载视频页面如下： " << endl;
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

////继承实现页面
//class BasePage//公共页面
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//
//};
////Java页面
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
////Python页面
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
////C++页面
//class CPP : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//void test01()
//{
//	//Java页面
//	cout << "Java下载视频页面如下： " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "--------------------" << endl;
//	//Python页面
//	cout << "Python下载视频页面如下： " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//	cout << "--------------------" << endl;
//	//C++页面
//	cout << "C++下载视频页面如下： " << endl;
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
//	int m_C; //私有成员只是被隐藏了，但是还是会继承下去
//};
////公共继承
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
//		cout << "Base构造函数!" << endl;
//	}
//	~Base()
//	{
//		cout << "Base析构函数!" << endl;
//	}
//};
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数!" << endl;
//	}
//	~Son()
//	{
//		cout << "Son析构函数!" << endl;
//	}
//};
//void test01()
//{   //继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
//	Son s;
//}
//int main() { 
//	test01();
//	system("pause");
//	return 0;
//}

////继承同名成员处理方式
//class Base {
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "Base - func()调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base - func(int a)调用" << endl;
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
//	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
//	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
//	void func()
//	{
//		cout << "Son - func()调用" << endl;
//	}
//public:
//	int m_A;
//};
//void test01()
//{
//	Son s;
//	cout << "Son下的m_A = " << s.m_A << endl;
//	cout << "Base下的m_A = " << s.Base::m_A << endl;
//	s.func();
//	s.Base::func();
//	s.Base::func(10);
//}
//int main() {
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}

////继承同名静态成员处理方式
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
////同名成员属性
//void test01()
//{
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	cout << "Son  下 m_A = " << s.m_A << endl;
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//	//通过类名访问
//	cout << "通过类名访问： " << endl;
//	cout << "Son  下 m_A = " << Son::m_A << endl;
//	cout << "Base 下 m_A = " << Son::Base::m_A << endl;
//}
////同名成员函数
//void test02()
//{
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	cout << "通过类名访问： " << endl;
//	Son::func();
//	Son::Base::func();
//	//出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
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
////继承前加virtual关键字后，变为虚继承
////此时公共的父类Animal称为虚基类
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

////多态基本概念
//class Animal {
//public:
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "猫在说话" << endl;
//	}
//};
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "狗在说话" << endl;
//	}
//};
//void dospeak(Animal &animal)//多态使用条件：父类指针或引用指向子类对象
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

////计算器普通写法
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
//		//如果要提供新的运算，需要修改源码
//	}
//public:
//	int m_Num1;
//	int m_Num2;
//};
//void test01()
//{
//	//普通实现测试
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

////计算器多态写法
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
//	//纯虚函数
//	//类中只要有一个纯虚函数就称为抽象类
//	//抽象类无法实例化对象
//	//子类必须重写父类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//};
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func调用" << endl;
//	};
//};
//void test01()
//{
//	Base* base = NULL;
//	//base = new Base; // 错误，抽象类无法实例化对象
//	base = new Son;
//	base->func();
//	delete base;//记得销毁
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////抽象制作饮品
//class AbstractDrinking {
//public:
//	//烧水
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PourInCup() = 0;
//	//加入辅料
//	virtual void PutSomething() = 0;
//	//规定流程
//	void MakeDrink() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////制作咖啡
//class Coffee : public AbstractDrinking {
//public:
//	//烧水
//	virtual void Boil() {
//		cout << "煮农夫山泉!" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡咖啡!" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "将咖啡倒入杯中!" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入牛奶!" << endl;
//	}
//};
////制作茶水
//class Tea : public AbstractDrinking {
//public:
//	//烧水
//	virtual void Boil() {
//		cout << "煮自来水!" << endl;
//	}
//	//冲泡
//	virtual void Brew() {
//		cout << "冲泡茶叶!" << endl;
//	}
//	//倒入杯中
//	virtual void PourInCup() {
//		cout << "将茶水倒入杯中!" << endl;
//	}
//	//加入辅料
//	virtual void PutSomething() {
//		cout << "加入枸杞!" << endl;
//	}
//};
////业务函数
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
//		cout << "Animal 构造函数调用！" << endl;
//	}
//	virtual void Speak() = 0;
//	//析构函数加上virtual关键字，变成虚析构函数
//	/*virtual ~Animal()
//	{
//		cout << "Animal虚析构函数调用！" << endl;
//	}*/
//	virtual ~Animal() = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal 纯虚析构函数调用！" << endl;
//}
////和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。
//class Cat : public Animal {
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用！" << endl;
//		m_Name = new string(name);
//	}
//	virtual void Speak()
//	{
//		cout << *m_Name << "小猫在说话!" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat析构函数调用!" << endl;
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
//	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
//	//怎么解决？给基类增加一个虚析构函数
//	//虚析构函数就是用来解决通过父类指针释放子类对象
//	delete animal;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////抽象CPU类
//class CPU
//{
//public:
//	//抽象的计算函数
//	virtual void calculate() = 0;
//};
////抽象显卡类
//class VideoCard
//{
//public:
//	//抽象的显示函数
//	virtual void display() = 0;
//};
////抽象内存条类
//class Memory
//{
//public:
//	//抽象的存储函数
//	virtual void storage() = 0;
//};
////电脑类
//class Computer
//{
//public:
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//	//提供工作的函数
//	void work()
//	{
//		//让零件工作起来，调用接口
//		m_cpu->calculate();
//
//		m_vc->display();
//
//		m_mem->storage();
//	}
//	//提供析构函数 释放3个电脑零件
//	~Computer()
//	{
//     	//释放CPU零件
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		//释放显卡零件
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		//释放内存条零件
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//private:
//	CPU* m_cpu; //CPU的零件指针
//	VideoCard* m_vc; //显卡零件指针
//	Memory* m_mem; //内存条零件指针
//};
////具体厂商
////Intel厂商
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Intel的CPU开始计算了！" << endl;
//	}
//};
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel的显卡开始显示了！" << endl;
//	}
//};
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel的内存条开始存储了！" << endl;
//	}
//};
////Lenovo厂商
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Lenovo的CPU开始计算了！" << endl;
//	}
//};
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Lenovo的显卡开始显示了！" << endl;
//	}
//};
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo的内存条开始存储了！" << endl;
//	}
//};
//void test01()
//{
//	//第一台电脑零件
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMem = new IntelMemory;
//	cout << "第一台电脑开始工作：" << endl;
//	//创建第一台电脑
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//	cout << "-----------------------" << endl;
//	cout << "第二台电脑开始工作：" << endl;
//	//第二台电脑组装
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);;
//	computer2->work();
//	delete computer2;
//	cout << "-----------------------" << endl;
//	cout << "第三台电脑开始工作：" << endl;
//	//第三台电脑组装
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

////写文件
//void test1()
//{
//	//创建流对象
//	ofstream ofs;
//	//指定打开方式
//	ofs.open("test.txt", ios::out);//不指定路径就存储在根目录下
//	//写数据
//	ofs << "name:zhangsan" << endl;
//	ofs << "sex:man" << endl;
//	//关闭文件
//	ofs.close();
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

////读文件
//void test1()
//{
//	//创建流对象
//	ifstream ifs;
//	//指定打开方式
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "erorr" << endl;
//		return;
//	}
//	//读文件
//	//第一种方式
//	char buf[1024] = { 0 };
//    while (ifs >> buf)//输入流运算符 >> 从文件流 ifs 中读取数据，并将读取的内容存储到字符数组 buf 中。
////具体来说，它会读取文件流中的下一个单词（以空格为分隔符）并将其存储到 buf 中，然后继续执行循环中的代码
//{
//	cout << buf << endl;
//}
//
//////第二种
////char buf[1024] = { 0 };
////while (ifs.getline(buf,sizeof(buf)))
////{
////	cout << buf << endl;
////}
////
//////第三种
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
//	//关闭文件
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
////二进制文件  写文件
//void test01()
//{
//	//1、包含头文件
//	//2、创建输出流对象
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	//3、打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);
//	Person p = { "张三"  , 18 };
//	//4、写文件
//	ofs.write((const char*)&p, sizeof(p));
//	//5、关闭文件
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
		cout << "文件打开失败" << endl;
	}
	Person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
}

int main() {
	test1();
	system("pause");
	return 0;
}