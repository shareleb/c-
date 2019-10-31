//#include<iostream>
//using namespace std;
//
//
//class Myclass
//{
//
//public:   
//	/*Myclass()
//	{
//		cout << "默认构造函数" << endl;
//	}*/
//	Myclass(int  a)
//	{
//		cout << "有参构造函数" << endl;
//	}
//	/*Myclass (const Myclass &m)
//	{
//	}*/
//	int a;
//};
//系统默认给一个类提供3个函数
//1.默认构造   拷贝构造  析构函数 
//
//1.当我们提供了有参构造函数,那么系统就不会给我们提供默认构造函数了
//但是,系统还会提供默认拷贝构造函数.进行简单的值拷贝.
//
//2.当我们提供拷贝构造函数,那么系统就不会提供其它构造函数.
//void test01()
//{
//	Myclass c1(1);
//	c1.a = 10;
//	Myclass c2(c1);
//	cout << c2.a << endl;
//}
//int main() {
//
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}