//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<functional>
//#include<ctime>
//using namespace std;

////快排sort
//void myprint(int val)
//{
//	cout << val << " ";
//}
//class lit {
//public:
//	bool operator()(int n1, int n2)
//	{
//		return n1 > n2;
//	}
//};
//void test01()
//{
//	vector<int> v;
//	
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(40);
//
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myprint);
//	cout << endl;
//
//	sort(v.begin(), v.end(),lit());//利用仿函数
//	sort(v.begin(), v.end(), greater<int>());//利用系统自带函数
//	for_each(v.begin(), v.end(), myprint);
//	cout << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

////洗牌算法
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	srand((unsigned int)time(NULL));
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//
//	//打乱顺序
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


////合并容器
//void myprint(int val)
//{
//	cout << val << " ";
//}
//void test1()
//{
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 1);
//	}
//	v3.resize(v1.size() + v2.size());
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), v3.end(), myprint);
//
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}