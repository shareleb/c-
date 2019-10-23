//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////发现是引用,转为int*const ref=&a;
//void testFunc(int &ref) {
//	ref = 100; // ref是引用, 转换伪*ref = 20;
//}
//
//
////引用的本质在c++的内部实现是一个指针常量.
//int  main() {
//	int a = 10;
//	int &aref = a;  // int *const aref=&a; //这也说明为什么引用要用初始化.
//	aref = 20;  //内部发现aref是引用,自动帮我们转换伪 : *aref=20;
//
// }