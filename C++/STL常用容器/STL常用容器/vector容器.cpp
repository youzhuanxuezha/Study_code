//#include <iostream>
//#include <vector>
//#include <deque>
//#include <algorithm>
//#include <string>
//using namespace std;

////vector��������
//void printvector(vector<int>& v)
//{
//	for (vector<int>::iterator it=v.begin();it!=v.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	vector<int>v1;//Ĭ�Ϲ��죬�޲ι���
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);
//
//	vector<int>v2(v1.begin(), v1.end());//��������1
//	printvector(v2);
//
//	vector<int>v3(3,100);
//	printvector(v3);
//
//	vector<int>v4(v2);//��������2
//	printvector(v4);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

////vector��ֵ����
//void printvector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);
//
//	vector<int>v2;//��ֵ��operator=
//	v2 = v1;
//	printvector(v2);
//
//	vector<int>v3;//assign
//	v3.assign(v1.begin(), v1.end());
//	printvector(v3);
//
//	vector<int>v4;//assign
//	v4.assign(3,100);
//	printvector(v4);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}


////vector�����������ʹ�С����
//void printvector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test1()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printvector(v1);
//
//	if (v1.empty())
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else {
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1����Ϊ��"<<v1.capacity() << endl;
//		cout << "v1��СΪ��" << v1.size() << endl;
//	}
//
//	v1.resize(15);
//	printvector(v1);
//
//	v1.resize(16,1);
//	printvector(v1);
//
//	v1.resize(5);
//	printvector(v1);
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

//void printVector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}

////�����ɾ��
//void test01()
//{
//	vector<int> v1;
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//	//����
//	v1.insert(v1.begin()+1, 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//
//	//ɾ��
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//���
//	v1.erase(v1.begin(), v1.end());//�������
//	v1.clear();
//	printVector(v1);
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


//void printVector(vector<int>& v) {
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	//��������
//	cout << "������" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//	}
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//	v.resize(3);
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//	//�����ڴ�
//	vector<int>(v).swap(v); //��������
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//}
//int main() {
//
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

