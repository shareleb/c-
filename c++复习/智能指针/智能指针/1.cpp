//////////#include<iostream>
//////////using namespace std;
//////////
////////////auto_ptr ����ָ��       c++98
//////////class Date
//////////{
//////////public:
//////////	Date() { cout << "Date()" << endl; }
//////////	~Date() { cout << "~Date()" << endl; }
//////////	int _year;
//////////	int _month;
//////////	int _day;
//////////};
//////////
//////////int main()
//////////{
//////////	auto_ptr<Date>ap(new Date);
//////////	cout << ap->_day << endl;
//////////	auto_ptr<Date>copy(ap);
//////////	//cout << ap->_day << endl;
//////////	
//////////
//////////	//�����󿽱���ֵ��ǰ��Ķ����������
//////////	//c++98����Ƶ�auto_ptr ��������ԣ�
//////////
//////////	//  std::unique_ptr;
//////////	//unique_ptr<Date>up(new Date);
//////////
//////////	//unique_ptr  �����˼·�ǳ��Ĵֱ�  -������  Ҳ���ǲ��ÿ����͸�ֵ
//////////	unique_ptr<int>cp(new int);
//////////	
//////////	*cp = 100;
//////////	cout << *cp << endl;
//////////
//////////	shared_ptr<int>sp(new int);
//////////	shared_ptr<int>sp1(sp);
//////////	cout << sp.use_count() << endl;
//////////
//////////	system("pause");
//////////	return 0;
//////////}
////////
//////////************************************************
////////
////////#include<iostream>
////////using namespace std;
////////#include<string>
////////class Person
////////{
////////public:
////////	void print()
////////	{
////////		cout << "name:" <<_name << endl;
////////		cout << "age:" << _age << endl;
////////	}
////////protected:
////////	string _name = "peter";
////////	int _age = 18;
////////};
////////
//////////�̳к����person�ĳ�Ա������Ա����+��Ա������
//////////�����������һ���֡��������ֳ���Student��Teacher
////////class Student :public Person
////////{
////////protected:
////////	int _stuid;//ѧ��
////////
////////};
////////
////////class Teacher :public Person
////////{
////////protected:
////////	int _jobid; //����
////////};
////////
////////
////////class person
////////{
////////public:
////////	void print()
////////	{
////////		cout << _name << endl;
////////	}
////////protected:
////////	string _name;   //����
////////private: 
////////	int _age;   //����
////////};
////////
////////class student: public person
////////{
////////protected:
////////	int _stunum;// ѧ��
////////
////////};
////////
////////
////////
////////
////////
////////int main()
////////{
////////	Student s;
////////	Teacher t;
////////	s.print();
////////	t.print();
////////	system("pause");
////////	return 0;
////////}
////////
////////
//////
//////#include<iostream>
//////using namespace std;
//////#include<string>
//////
//////class Person
//////{
//////protected:
//////	string _name;
//////	string _sex;
//////	int _age;
//////public:
//////	void print()
//////	{
//////		cout << "I am Person!" << endl;
//////	}
//////public:
//////	int num = 100;
//////};
//////class Student :public Person
//////{
//////public:
//////	int _No;
//////	void  print()
//////	{
//////		cout << "I am Student!" << endl;
//////	}
//////	void func()
//////	{
//////		cout << "I am func "<< endl;
//////	}
//////	int num = 1000;
//////	int age = 10000;
//////};
//////void test()
//////{
//////	Student sobj;
//////	//1.���������Ը����ำֵ��
//////	Person pobj = sobj;
//////	pobj.print();
//////	cout << pobj.num << endl;
//////	cout<<sobj.num << endl;
//////	cout << sobj.Student::num << endl;
//////
//////	//2.��������ܸ�ֵ�����������
//////	//sobj =dynamic_cast<Student>(pobj);
//////
//////	int a = 10;
//////	double b = static_cast<double>(a);
//////
//////
//////}
//////void test01()
//////{
//////	Person p;
//////	Student s;
//////	//s = p;    //���಻�ܸ����ำֵ
//////	p = s;    //������Ը����ำֵ��
//////	cout << p.num << endl;
//////	//cout << p.func() << endl;
//////	Person * pt = &p;
//////	Student * st = &s;
//////	//st = (Student*)pt;
//////	pt = &s;
//////
//////	st->func(); //����
//////	cout<<
//////}
//////
//////
//////int main()
//////{
//////	//test();
//////	test01();
//////	system("pause");
//////	return 0;
//////}
//////
////
//////
////#include<iostream>
////using  namespace std;
////
////class Person {
////public:
////	virtual void BuyTicket() 
////	{
////		cout << "��Ʊ-ȫ��" << endl;
////	}
////	int m;
////};
////class Student : public Person {
////public:
////	virtual void BuyTicket()
////	{
////		cout << "��Ʊ-���" << endl;
////	}
////
////
////};
////
////void Func(Person& p)
////{
////	p.BuyTicket();
////}
////int main()
////{
////	Person ps;
////	cout << sizeof(ps) << endl;
////	Student st;
////	//Func(ps);
//////	Person * pp = &ps;
//////	pp->BuyTicket();
//////	Func(st);
////	system("pause");
////	return 0;
////}
////
////
////
////
//#include<iostream>
//using namespace std;
//#include<stack>
//#include<string>
//class Solution {
//public:
//	string reverseOnlyLetters(string S) {
//		string str;
//		stack<int>st;
//		for (int i = 0; i < S.size(); i++)
//		{
//			if (isalpha(S[i]) != 0)
//			{
//				st.push(S[i]);
//			}
//
//		}
//		for (int i = 0; i < S.size(); i++)
//		{
//			if (isalpha(S[i]) != 0)
//			{
//				int c = st.top();
//				str.push_back(c);
//				st.pop();
//			}
//			else
//			{
//				str.push_back(S[i]);
//			}
//		}
//		return str;
//	}
//};
//int main()
//{
//	string s = "ab-cd";
//	Solution tion;
//	
//	cout << tion.reverseOnlyLetters(s);
//	
//	system("pause");
//	return 0;
//}