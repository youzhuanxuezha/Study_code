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
//	//���
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

////����������
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
//	//ȡ���������С��ֵ��Ŀ���������ٿռ�
//	vTarget.resize(min(v1.size(), v2.size()));
//	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
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

////����������
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
//	//ȡ���������ĺ͸�Ŀ���������ٿռ�
//	vTarget.resize(v1.size() + v2.size());
//	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
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

////�������
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
//	//ȡ��������ϴ��ֵ��Ŀ���������ٿռ�
//	vTarget.resize(max(v1.size(), v2.size()));
//	//����Ŀ�����������һ��Ԫ�صĵ�������ַ
//	cout << "v1��v2�ĲΪ�� " << endl;
//	vector<int>::iterator itEnd =
//		set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), itEnd, myPrint());
//	cout << endl;
//	cout << "v2��v1�ĲΪ�� " << endl;
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
    myLinkedList.addAtIndex(1, 2);    // �����Ϊ 1->2->3
    myLinkedList.get(1);              // ���� 2
    myLinkedList.deleteAtIndex(1);    // ���ڣ������Ϊ 1->3
    myLinkedList.get(1);              // ���� 3
    myLinkedList.printlink();
    system("pause");
    return 0;
}