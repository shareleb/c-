//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std; 
//
//
//void test01(){
//	//int &ref = 10 ;   //引用了不合发的内存,不可以;
//   const int &ref = 10;     //加入const后,编译器处理方式伪:  int tmp=10; const int & ref=tmp;
//   int *p = (int*) &ref;
//   *p = 1000;
//   cout << "ref:" << ref;
//
//
//}
////常量引用使用场景,用来修饰形参.
////如果只是想显示内容,而不修改内容,那么就用const修饰这个形参.
//
//
//
//
//int main() {
//		system("pause");
//
//	return EXIT_SUCCESS;
//}