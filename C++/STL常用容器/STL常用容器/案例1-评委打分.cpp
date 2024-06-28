//#include <iostream>
//#include <vector>
//#include <deque>
//#include <algorithm>
//#include <string>
//#include<time.h>
//using namespace std;

//class Person {
//public:
//	Person(string name, int score)
//	{
//		this->myname = name;
//		this->myscore = score;
//	}
//	string myname;
//	int myscore;
//};
//void createperson(vector<Person>& v)
//{
//	string nameseed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameseed[i];
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//	}
//}
//void setscore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end());
//		d.pop_back();
//		d.pop_front();
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;
//
//		}
//		int avg = sum / d.size();
//		it->myscore = avg;
//	}
//}
//void showscore(vector<Person>& v) {
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		
//		cout << "姓名： " << it->myname << " 分数： " << it->myscore<<endl;
//	
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	vector<Person>v;
//	createperson(v);
//
//	////测试
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << "姓名： " << it->myname << " 分数： " << it->myscore<<endl;
//	//}
//
//	setscore(v);
//	showscore(v);
//	system("pause");
//	return 0;
//}