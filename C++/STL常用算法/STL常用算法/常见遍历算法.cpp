//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<functional>
//using namespace std;

////���ñ����㷨 for_each
//void print01(int val)
//{
//	cout << val << " ";
//}
//class print02 {
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test1()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	for_each(v.begin(), v.end(), print01);
//	cout << endl;
//	for_each(v.begin(), v.end(), print02());
//	cout << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


//int main() {
//    // ����һ����Ϊ vec ����������������ʼ��Ϊ {1, 2, 3, 4, 5}
//    vector<int> vec = { 1, 2, 3, 4, 5 };
//    // ����һ�����ͱ��� sum���������ʼ��Ϊ 0
//    int sum = 0;
//    // ʹ�� Lambda ���ʽ���� vec ������Ԫ�ص��ܺ�
//    for_each(vec.begin(), vec.end(), [&sum](int value) {
//        sum += value;
//        });
//    // ��ӡ����õ����ܺ�ֵ
//   cout << "Sum: " << sum << endl;
//    // ���� 0����ʾ������������
//    return 0;
//}


////transform
//class trans {
//public:
//	int operator()(int val)
//	{
//		return val + 1;
//	}
//};
//void mprint(int val)
//{
//	cout << val << "  ";
//}
//void test1()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int> v1;
//	v1.resize(v.size());
//	transform(v.begin(), v.end(), v1.begin(), trans());
//	for_each(v1.begin(), v1.end(), mprint);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

