//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<functional>
//#include<ctime>
//using namespace std;


//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//}; 
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i + 1);
//	}
//	vector<int> v2;
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////条件替换，自定义类型
//class Person {
//public:
//	Person(string name, int age)
//	{
//		mname = name;
//		mage = age;
//	}
//	string mname;
//	int mage;
//};
//void myprint(Person& p)
//{
//	cout << "name:" << p.mname << " age:" << p.mage << endl;
//}
//class replacename {
//public:
//	bool operator()(Person& p) {
//		return p.mage == 50;
//	}
//};
//void test1()
//{
//	vector<Person> v;
//	Person v1("aaa", 10);
//	Person v2("bbb", 20);
//	Person v3("ccc", 30);
//	Person v4("ddd", 50);
//	Person v5("eee", 50);
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	v.push_back(v5);
//	replace_if(v.begin(), v.end(), replacename(), Person("换后", 40));
//	for_each(v.begin(), v.end(), myprint);
//
//	
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}
