#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

////算数运算符
//void test1()
//{
//	negate<int>n;
//	cout << n(20) << endl;
//}
//void test2()
//{
//	plus<int>n;
//	cout << n(20, 10) << endl;
//
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}

////关系仿函数
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(20);
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	//自己实现仿函数
//	//sort(v.begin(), v.end(), MyCompare());
//	//STL内建仿函数  大于仿函数
//	sort(v.begin(), v.end(), greater<int>());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

//逻辑仿函数
void test01()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//逻辑非  将v容器搬运到v2中，并执行逻辑非运算
	vector<bool> v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}