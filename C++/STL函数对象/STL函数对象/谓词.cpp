//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;


////一元谓词
//class getfive {
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test1()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator pos = find_if(v.begin(), v.end(), getfive());
//	if (pos == v.end())
//	{
//		cout << "没找到！" << endl;
//	}
//	else {
//		cout << "找到了！" << endl;
//	}
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}




////二元谓词
//class mcompare {
//public:
//	bool operator()(int num1, int num2)
//	{
//		return num1 > num2;
//	}
//};
//void test1()
//{
//	vector<int>v;
//	for (int i = 1; i < 5; i++)
//	{
//		v.push_back(i*10);
//
//	}
//	sort(v.begin(), v.end(), mcompare());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	cout << endl;
//
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}