//#include<iostream>
//using namespace std;
//#include"test.h"
//
//
////c++中想要调用c语言方法.
////extern "C" void show();   //show方法 按照c语言方式做连接.
////解决的问题就是在c++中调用c语言函数
//int main() {
//
//	show();  //在c++中函数是可以发生重载的,编译器会把这个函数名称偷偷改变  _showv   void
//              //而c语言则不会,因为c语言没有函数重载.
//	system("pause");
//	return EXIT_SUCCESS;
//}