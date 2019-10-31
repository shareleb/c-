//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//public:   
//	Person() {
//		cout << "默认构造函数调用" << endl;
//	}
//	Person(int a) {
//		cout << "有参构造函数调用" << endl;
//	}
//	
//	Person(const  Person& p)  //必须要有& 要是没有的话,给p开辟空间,又调用了拷贝构造函数 
//		                            //无限循环.
//	{
//		m_Age = p.m_Age;
//		cout << "拷贝构造函数调用" << endl;
//	}
//	~Person() {
//		cout << "析构函数调用" << endl;
//	}
//	int m_Age;
//};
////拷贝构造函数调用的时机.
////1.用已经创建好的对象来初始化新的对象.
//void test01() {
//	Person p1;
//	p1.m_Age = 10;
//	Person p2(p1);
//	Person p3 = Person(p2);
//}
////2.以值传递的方式给函数参数传值.
//void doWork(Person p1)  //Person p1=Person(p)
//{
//
//}
//void test02() {
//	Person p;
//	p.m_Age = 10;
//	doWork(p);
//}
//
////3.以值的方式返回局部的对象
//Person doWork02() {
//	Person p1;
//	return p1;
//
//}
//void test03() {
//	Person p3 = doWork02();
//}
////release 下优化成什么样?
////  Person p;  //不调用默认构造
////  void doWork2(Person &p)
////{
////	Person p1; //默认构造函数.
////}
//
//int main() {
//
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}