//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	static int m_Age;   //加入static就是静态成员变量,会共享数据.
//	//静态成员变量,在类内声明,类外进行初始化
//	//静态成员变量也是有权限的.
//
//
//	//静态成员函数不能访问普通成员变laing
//	//静态成员函数可以在类内定义;
//	//可以访问静态成员变量.不需要做区分.
//	//静态成员函数也是有权限的.
//	static void  func()
//	{
//
//		cout << "func的调用" << endl;
//	}
//	//普通成员函数可以访问普通成员变量,也可以访问静态成员函数.
//	void myFunc()
//	{
//
//	}
//private:
//	static int m_other;//私有权限,在类外不能访问
//
//};	
//int Person::m_Age = 10; //类外初始化实现.
//int Person::m_other = 20; //必须放在全局区, 创建对象前已经开辟内存.
//
//
//void test01()
//{
//	//通过对象访问属性;
//	Person p1;
//	p1.m_Age = 10;
//
//	Person p2;
//	p2.m_Age = 20;
//
//	cout << "p1.m_Age=" << p1.m_Age << endl;
//	cout << "p2.m_Age=" << p2.m_Age << endl; //共享数据
//
//	//通过类名访问属性,
//	cout << "通过类名访问Age:" << Person::m_Age << endl;
//	//cout << "other=" << Person::m_other << endl;//私有权限在类外无法访问.
//    
//	//静态成员函数调用
//	
//
//	p1.func();
//	p2.func();
//	Person::func();
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}