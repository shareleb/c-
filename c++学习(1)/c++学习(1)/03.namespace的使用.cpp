//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include"game1.h"
//#include"game2.h"
//
////namespace 命名空间主要用途 用来解决命名冲突的问题.
//
//
//
////命名空间下,可以放函数,变量,结构体,类.
//namespace A{
//	void func();
//	int m_A=20;
//	struct Person
//	{
//
//	};
//	class Animal {};
//	namespace B {
//		int m_A = 10;
//	}
//}
//void test2() {
//	cout << "作用域b下的m_A为: " << A::B::m_A;
//}
////命名空间必须定义在全局作用域下
////命名空间可以嵌套命名空间
////命名空间是开放的,可以随时往原先的命名空间添加内容
//namespace A {   //此命名空间会和上面的命名空间A进行合并
//	int m_B = 1000;
//}
//void test03() {
//	cout << "A::下的m_A为" << A::m_A << "m_B为:" << A::m_B << endl;
//}
//
////5.无名,匿名命名空间
//namespace {
//	int m_C = 0;
//	int m_D = 0;
//}
////当写了无名命名空间,相当于写了static int m_C;static int m_D;
////只能在当前文件内使用.
//
////6.命名空间可以取别名
//namespace veryLongName
//{
//	int m_A = 0;
//}
//void test04() {
//	//其别名;
//	namespace verySHortName = veryLongName;
//	cout << verySHortName::m_A << endl;
//	cout << veryLongName::m_A << endl;
//
//}
//int main() {
//		//LOL::goAtk();
//		//KingGLory::goAtk();
//		//test2();
//	   //test03();
//	test04();
//		system("pause");//阻塞功能
//		return EXIT_SUCCESS; //返回正常退出
//}