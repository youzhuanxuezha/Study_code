#include <iostream>
using namespace std;
//int main()
//{
//	int a = 0;
//	cout << "hello" << endl;
//	system("pause");
//	return 0;
//}

////全局变量
//int g_a = 10;
//int g_b = 10;
//
////全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main() {
//
//	//局部变量
//	int a = 10;
//	int b = 10;
//
//	//打印地址
//	cout << "局部变量a地址为： " << (int)&a << endl;
//	cout << "局部变量b地址为： " << (int)&b << endl;
//
//	cout << "全局变量g_a地址为： " << (int)&g_a << endl;
//	cout << "全局变量g_b地址为： " << (int)&g_b << endl;
//
//	//静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//
//	cout << "静态变量s_a地址为： " << (int)&s_a << endl;
//	cout << "静态变量s_b地址为： " << (int)&s_b << endl;
//
//	cout << "字符串常量地址为： " << (int)&"hello world" << endl;
//	cout << "字符串常量地址为： " << (int)&"hello world1" << endl;
//
//	cout << "全局常量c_g_a地址为： " << (int)&c_g_a << endl;
//	cout << "全局常量c_g_b地址为： " << (int)&c_g_b << endl;
//
//	const int c_l_a = 10;
//	const int c_l_b = 10;
//	cout << "局部常量c_l_a地址为： " << (int)&c_l_a << endl;
//	cout << "局部常量c_l_b地址为： " << (int)&c_l_b << endl;
//
//	system("pause");
//
//	return 0;
//}

//int* func()
//{
//	int a = 10;//局部变量，存放在栈区，离开函数自动释放
//	return &a;
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	system("pause");
//
//	return 0;
//}

////堆区：
////​		由程序员分配释放, 若程序员不释放, 程序结束时由操作系统回收
////​		在C++中主要利用new在堆区开辟内存
//int* func()
//{
//	int* a = new int(10);
//	return a;
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	system("pause");
//
//	return 0;
//}


//int* func()
//{
//	int* a = new int(10);
//	return a;
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//
//	//利用delete释放堆区数据
//	delete p;
//
//	//cout << *p << endl; //报错，释放的空间不可访问
//
//	system("pause");
//
//	return 0;
//}

////堆区开辟数组
//int main() {
//
//	int* arr = new int[10];
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//释放数组 delete 后加 []
//	delete[] arr;
//
//	system("pause");
//
//	return 0;
//}

////引用，给变量起别名
//int main() {
//
//	int a = 10;
//	int& b = a;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	b = 100;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}

////引用必须初始化
////引用在初始化后，不可以改变
//int main() {
//
//	int a = 10;
//	int b = 20;
//	//int &c; //错误，引用必须初始化
//	int& c = a; //一旦初始化后，就不可以更改
//	c = b; //这是赋值操作，不是更改引用
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	system("pause");
//
//	return 0;
//}
//
////引用做函数参数
////1. 值传递
//void mySwap01(int a, int b) 
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
////2. 地址传递
//void mySwap02(int* a, int* b) 
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
////3. 引用传递
//void mySwap03(int& a, int& b) 
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main() 
//{
//
//	int a = 10;
//	int b = 20;
//
//	mySwap01(a, b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	mySwap02(&a, &b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	a = 10;
//	b = 20;
//	mySwap03(a, b);
//	cout << "a:" << a << " b:" << b << endl;
//
//	system("pause");
//
//	return 0;
//}


////引用做函数返回值
////返回局部变量引用
//int& test01() {
//	int a = 10; //局部变量
//	return a;
//}
////返回静态变量引用
//int& test02() {
//	static int a = 20;
//	return a;
//}
//int main() {
//
//	//不能返回局部变量的引用
//	int& ref = test01();
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;
//	//如果函数做左值，那么必须返回引用
//	int& ref2 = test02();
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//	test02() = 1000;
//	cout << "ref2 = " << ref2 << endl;
//	cout << "ref2 = " << ref2 << endl;
//	system("pause");
//	return 0;
//}



////引用的本质在c++内部实现是一个指针常量
////发现是引用，转换为 int* const ref = &a;
//void func(int& ref) {
//	ref = 100; // ref是引用，转换为*ref = 100
//}
//int main() {
//	int a = 10;
//	//自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
//	int& ref = a;
//	ref = 20; //内部发现ref是引用，自动帮我们转换为: *ref = 20;
//	cout << "a:" << a << endl;
//	cout << "ref:" << ref << endl;
//	func(a);
//	return 0;
//}

////函数提升
//int func(int a, int b = 10, int c = 10) {
//	return a + b + c;
//}
////1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
////2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
//int func2(int a = 10, int b = 10);
//int func2(int a, int b) 
//{
//	return a + b;
//}
//
//int main()
//{
//	cout << "ret = " << func(20, 20) << endl;
//	cout << "ret = " << func(100) << endl;
//	system("pause");
//	return 0;
//}


////函数重载需要函数都在同一个作用域下
////函数参数类型不同、或者个数不同、或者顺序不同
//void func()
//{
//	cout << "func 的调用！" << endl;
//}
//void func(int a)
//{
//	cout << "func (int a) 的调用！" << endl;
//}
//void func(double a)
//{
//	cout << "func (double a)的调用！" << endl;
//}
//void func(int a, double b)
//{
//	cout << "func (int a ,double b) 的调用！" << endl;
//}
//void func(double a, int b)
//{
//	cout << "func (double a ,int b)的调用！" << endl;
//}
////函数返回值不可以作为函数重载条件
////int func(double a, int b)
////{
////	cout << "func (double a ,int b)的调用！" << endl;
////}
//int main() 
//{
//	func();
//	func(10);
//	func(3.14);
//	func(10, 3.14);
//	func(3.14, 10);
//	system("pause");
//	return 0;
//}


////1、引用作为重载条件
//void func(const int& a)
//{
//	cout << "调用func(const int& a)" << endl;
//}
//void func(int& a)
//{
//	cout << "调用func(int& a)" << endl;
//}
////int main()
////{
////	int a = 10;若a为变量，优先走非const修饰通道
////	func(a);
////	system("pause");
////	return 0;
////}
//int main()
//{
//	func(10);//此时优先走const通道
//	system("pause");
//	return 0;

//}
////2、函数重载碰到函数默认参数
//void func2(int a, int b = 10)
//{
//	cout << "func2(int a, int b = 10) 调用" << endl;
//}
//void func2(int a)
//{
//	cout << "func2(int a) 调用" << endl;
//}
//int main() {
//
//	int a = 10;
//	func(a); //调用无const
//	func(10);//调用有const
//	//func2(10); //碰到默认参数产生歧义，需要避免
//	system("pause");
//	return 0;
//}