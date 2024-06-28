#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
#include<ctime>
#include <numeric>
using namespace std;


//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i <= 100; i++) {
//		v.push_back(i);
//	}
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << "total = " << total << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}


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
//	vector<int> v;
//	v.resize(10);
//	//填充
//	fill(v.begin(), v.end(), 100);
//	for_each(v.begin(), v.end(), myPrint());
//	cout << endl;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////求容器交集
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
//	vector<int> v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int> vTarget;
//	//取两个里面较小的值给目标容器开辟空间
//	vTarget.resize(min(v1.size(), v2.size()));
//	//返回目标容器的最后一个元素的迭代器地址
//	vector<int>::iterator itEnd =
//		set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////求容器并集
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
//	vector<int> v2;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int> vTarget;
//	//取两个容器的和给目标容器开辟空间
//	vTarget.resize(v1.size() + v2.size());
//	//返回目标容器的最后一个元素的迭代器地址
//	vector<int>::iterator itEnd =
//		set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////求容器差集
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
//	vector<int> v2;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int> vTarget;
//	//取两个里面较大的值给目标容器开辟空间
//	vTarget.resize(max(v1.size(), v2.size()));
//	//返回目标容器的最后一个元素的迭代器地址
//	cout << "v1与v2的差集为： " << endl;
//	vector<int>::iterator itEnd =
//		set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//	cout << "v2与v1的差集为： " << endl;
//	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

class MyLinkedList {
public:
    struct LinkNote {
        int val;
        LinkNote* next;
        LinkNote(int val) :val(val), next(NULL)
        {

        }
    };
    MyLinkedList() {
        newhead = new LinkNote(0);
        s = 0;
    }

    int get(int index) {
        if (index > (s - 1) || index < 0)
        {
            return -1;
        }
        LinkNote* cur = newhead->next;
        while (index)
        {
            cur = cur->next;
            index--;
        }
        return cur->val;
    }

    void addAtHead(int val) {
        LinkNote* newnode = new LinkNote(val);
        newnode->next = newhead->next;
        newhead->next = newnode;
        s++;
    }

    void addAtTail(int val) {
        LinkNote* newnode = new LinkNote(val);
        LinkNote* cur = newhead;
        while (cur->next != NULL)
        {
            cur = cur->next;
        }
        cur->next = newnode;
        s++;
    }

    void addAtIndex(int index, int val) {
        if (index > s)
        {
            return;
        }
        if (index < 0)
        {
            index = 0;
        }
        LinkNote* newnode = new LinkNote(val);
        LinkNote* cur = newhead;
        while (index)
        {
            cur = cur->next;
            index--;
        }
        newnode->next = cur->next;
        cur->next = newnode;
        s++;
    }

    void deleteAtIndex(int index) {
        if (index > s - 1 || index < 0)
        {
            return;
        }
        LinkNote* cur = newhead;
        while (index)
        {
            cur = cur->next;
            index--;
        }
        LinkNote* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        tmp = NULL;
        s--;
    }
    void printlink()
    {
        LinkNote* cur = newhead;
        while (cur->next != NULL)
        {
            cout << cur->next->val << " ";
            cur = cur->next;
        }
        cout << endl;
    }
private:
    LinkNote* newhead;
    int s;
};
int main()
{
    MyLinkedList myLinkedList = MyLinkedList();
    myLinkedList.addAtHead(1);
    myLinkedList.addAtTail(3);
    myLinkedList.addAtIndex(1, 2);    // 链表变为 1->2->3
    myLinkedList.get(1);              // 返回 2
    myLinkedList.deleteAtIndex(1);    // 现在，链表变为 1->3
    myLinkedList.get(1);              // 返回 3
    myLinkedList.printlink();
    system("pause");
    return 0;
}