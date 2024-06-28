//#include <iostream>
//#include <vector>
//#include <deque>
//#include <algorithm>
//#include <string>
//#include<time.h>
//#include <stack>
//#include <queue>
//#include<list>
//#include<set>
//#include<map>
//#define cehua 0
//#define meishu 1
//#define yanfa 2
//using namespace std;

//class worker {
//public:
//	string mname;
//	int msalary;
//};
//void cwork(vector<worker>& v)
//{
//	string nameseed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		worker w;
//		w.mname = "Ô±¹¤";
//		w.mname += nameseed[i];
//		w.msalary = rand() % 10000 + 10000;
//		v.push_back(w);
//	}
//}
//void sgroup(vector<worker>&v1, multimap<int, worker>&v2)
//{
//	for (vector<worker>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		int id = rand() % 3;
//		v2.insert(make_pair(id, *it));
//	}
//}
//void sworker(multimap<int, worker>& v)
//{
//	cout << "cehua" << endl;
//	multimap<int, worker>::iterator pos = v.find(cehua);
//	int n = v.count(cehua);
//	int i = 0;
//	for (i = 0; pos != v.end() && i < n; pos++, i++)
//	{
//		cout << "name:" << pos->second.mname << " salary:" << pos->second.msalary << endl;
//	}
//	cout << endl;
//	cout << "meishu" << endl;
//	pos = v.find(meishu);
//	n = v.count(meishu);
//	i = 0;
//	for (i = 0; pos != v.end() && i < n; pos++, i++)
//	{
//		cout << "name:" << pos->second.mname << " salary:" << pos->second.msalary << endl;
//	}
//	cout << endl;
//	cout << "yanfa" << endl;
//	pos = v.find(yanfa);
//	n = v.count(yanfa);
//	i = 0;
//	for (i = 0; pos != v.end() && i < n; pos++, i++)
//	{
//		cout << "name:" << pos->second.mname << " salary:" << pos->second.msalary << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	vector<worker>W;
//	cwork(W);
//	multimap<int, worker>mW;
//	sgroup(W, mW);
//	sworker(mW);
//}