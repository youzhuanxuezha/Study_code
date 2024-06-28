//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;

//void test01()
//{
//	string s1; //创建空字符串，调用无参构造函数
//	cout << "str1 = " << s1 << endl;
//
//	const char* str = "hello world";
//	string s2(str); //把c_string转换成了string
//
//	cout << "str2 = " << s2 << endl;
//
//	string s3(s2); //调用拷贝构造函数
//	cout << "str3 = " << s3 << endl;
//
//	string s4(10, 'a');
//	cout << "str4 = " << s4 << endl;
//}
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}

////string的赋值操作
//void test1()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1=" << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2=" << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << "str3=" << str3 << endl;
//
//	string str4;
//	str4.assign("hello world");
//	cout << "str4=" << str4 << endl;
//
//	string str5;
//	str5.assign("hello world",5);
//	cout << "str5=" << str5 << endl;
//
//	string str6;
//	str6.assign(str4, 5);//从str4的下标5开始复制
//	cout << "str6=" << str6 << endl;
//
//	string str7;
//	str7.assign(str5);
//	cout << "str7=" << str7 << endl;
//
//	string str8;
//	str8.assign(7,'w');
//	cout << "str8=" << str8 << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

////string字符串拼接
//void test1()
//{
//	string str1 = "我";
//	str1 += "爱玩游戏";
//	cout << "str1 = " << str1 << endl;
//	str1 += ':';
//	cout << "str1 = " << str1 << endl;
//	string str2 = "LOL DNF";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//	string str3 = "I";
//	str3.append(" love ");
//	str3.append("game abcde", 4);
//	//str3.append(str2);
//	str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
//	cout << "str3 = " << str3 << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

////string字符串查找和替换
//void test1()
//{
//	//查找
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//
//	if (pos == -1)
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "pos = " << pos << endl;
//	}
//
//
//	pos = str1.rfind("de");
//
//	cout << "pos = " << pos << endl;
//
//}
//void test2()
//{
//	//替换
//	string str1 = "abcdefgde";
//	str1.replace(1, 3, "1111");
//
//	cout << "str1 = " << str1 << endl;
//}
//int main()
//{
//	test1();
//	test2();
//	system("pause");
//	return 0;
//}

////string字符串比较
//void test1()
//{
//	string s1 = "hello";
//	string s2 = "aello";
//	int ret = s1.compare(s2);
//	if (ret > 0)
//	{
//		cout << "s1大于s2" << endl;
//	}
//	else if(ret==0)
//	{
//		cout<< "s1等于s2" << endl;
//	}
//	else
//	{
//		cout << "s1小于s2" << endl;
//	}
//	
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

////string字符串的插入和删除
//void test1()
//{
//	string s1 = "hello";
//	s1.insert(1, "111");
//	cout << "s1=" << s1 << endl;
//	s1.erase(1, 3);
//	cout << "s1=" << s1 << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

////string字符串的子串获取
//void test1()
//{
//	string s1 = "hello";
//	string s2=s1.substr(1, 3);
//	cout << "s2=" << s2 << endl;
//
//	string email = "hello@sina.com";
//	int pos = email.find("@");
//	string username = email.substr(0, pos);
//	cout << "username: " << username << endl;
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}