//#include<iostream>
//using namespace std;
////函数重载
////c++中函数名称可以重复
////必须在同一个作用域,函数名称相同.
////函数的参数的 个数不同 或 类型不同 或 顺序不同
//void func()
//{
//	cout << "无参数的func" << endl;
//}
//void func(int  a)
//{
//	cout << "有参数的func" << endl;
//}
//
//void func(double  a)
//{
//	cout << "有参数的func(double a)" << endl;
//}
//
//void func(double  a,int b)
//{
//	cout << "有参数的func(double a,int b)" << endl;
//}
////返回值不能作为函数重载的条件.
//void test01() {
//	func(1.1);
//}
////当函数重载碰到了默认参数的时候,要避免二义性问题.
//void func2(int a, int b = 10)
//{
//
//}
//void func2(int a)
//{
//
//}
//void test02() {
//	//func2(10);
//}
//
////引用的重载
//void func3(int &a)  //引用必须要引用合法的内存空间
//{
//	cout << " int &a" << endl;
//
//}
//void func3( const int &a)  //const也是可以作为函数重载的条件. 
//{
//	cout << "const int &a" << endl;
//
//}
//void test2()
//{
//	func3(10);
//}
//
//void test03()
//{
//	func3(10);
//}
//int main() {
//
//
//	test03();
//	system("pause");
//	return EXIT_SUCCESS;
//}
////函数重载,编译器在内部已经把名字改过了;