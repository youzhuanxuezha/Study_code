//#include <iostream>
//#include <vector>
//#include <deque>
//#include <algorithm>
//#include <string>
//#include<time.h>
//#include <stack>
//#include <queue>
//using namespace std; 

////栈容器常用接口
//void test01()
//{
//	//创建栈容器 栈容器必须符合先进后出
//	stack<int> s;
//
//	//向栈中添加元素，叫做 压栈 入栈
//	s.push(10);
//	s.push(20);
//	s.push(30);
//
//	while (!s.empty()) {
//		//输出栈顶元素
//		cout << "栈顶元素为： " << s.top() << endl;
//		//弹出栈顶元素
//		s.pop();
//	}
//	cout << "栈的大小为：" << s.size() << endl;
//
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////queue容器
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
//	//创建队列
//	queue<Person> q;
//
//	//准备数据
//	Person p1("唐僧", 30);
//	Person p2("孙悟空", 1000);
//	Person p3("猪八戒", 900);
//	Person p4("沙僧", 800);
//
//	//向队列中添加元素  入队操作
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	//队列不提供迭代器，更不支持随机访问	
//	while (!q.empty()) {
//		//输出队头元素
//		cout << "队头元素-- 姓名： " << q.front().m_Name
//			<< " 年龄： " << q.front().m_Age << endl;
//
//		cout << "队尾元素-- 姓名： " << q.back().m_Name
//			<< " 年龄： " << q.back().m_Age << endl;
//		cout << endl;
//		//弹出队头元素
//		q.pop();
//	}
//	cout << "队列大小为：" << q.size() << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}