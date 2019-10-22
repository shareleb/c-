//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;  
//
//void myswap(int a, int b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//	cout << "myswap::a= " << a << endl;
//	cout << "myswap::b= " << b << endl;
//}
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	myswap(a, b);//值传递
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//
//}
////地址传递
//void myswap2(int *a, int *b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void test02() {
//	int a = 10;
//	int b = 20;
//	myswap2(&a, &b);//值传递
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//
//}
////引用传递.类似于地址传递
//void  myswap3(int &a, int &b) //&a=a; &b=b;
//{  
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void test03() {
//	int a = 10;
//	int b = 20;
//	myswap3(a, b);//值传递
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//}
////引用的注意事项
////1.引用必须引用一块合法的内存空间
//// 2.不要返回局部变量的引用
//int& dowork() {
//	int a=10;
//	return a;
//}
//int &dowork2() {
//	static int a = 10;
//	return a;
//}
//void test05() {
//	//int &a = 4; //引用必须引用一块合法的内存空间
//	int &ret = dowork2();
//	cout << "ret=" << ret << endl;  //第一次10是编译器做了优化.
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//
//	//如果函数的返回值是引用,那么这个函数可以作为左值.
//	dowork2() = 10000;//相当于写了a=1000;
//
//}
//
//void test04() {
//	//int &a = 4; //引用必须引用一块合法的内存空间
//	int &ret = dowork();
// 	cout <<"ret="<< ret << endl;  //第一次10是编译器做了优化.
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//
//}
//
//int main() {
//	test05();
//	system("pause");
//	return EXIT_SUCCESS;
//}