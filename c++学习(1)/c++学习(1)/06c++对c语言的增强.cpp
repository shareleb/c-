//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
////1.全局变量检测增强
////int a;
////int a = 10;
////2.函数检测增强,参数类型增强,返回值检测增强.函数调用参数检测增强.
////int getRectS(int m,int n){
//
////}
////3.类型转换检测增强.
//void test03(){
//	char *p = (char*)malloc(sizeof(64)); // malloc返回值是void* 
//}
////4.struct 增强  c++中struct可以加函数
//struct Person {
//	int m_age;
//	void plusAge() { m_age++; };
//};
//void testo4(){
//	struct Person p1;//c语言中使用必须加入struct关键字,c++可以不写struct.  
//	p1.m_age = 10;
//	p1.plusAge();
//	cout << p1.m_age << endl;//11
//
//
//}
////5.bool类型增强, c语言没有bool函数.  c++有这个类型
//bool flag = true;//只有真和假. true代表真(非0),false代表假(0).
//void test05() {
//	cout << sizeof(bool) << endl;
//	flag = 100;
//	cout << flag << endl;
//}
////6.三目运算符增强.
//void test06() {
//	int a = 10;
//	int b = 20;
//	cout << "ret=" <<( a > b ? a : b);
//	printf("ret=%d\n", a > b ? a : b);
//	a > b ? a : b = 100;//c语言返回的是值,c++返回的是变量.
//	                     //c语言中想模仿c++写,
//	*(a > b ? &a : &b) = 100;//要把扩号加起来.
//	
//
//}
////7.const的增强
//const int m_A = 10; //c语言受到保护,不可以改.全局常量.
//void test07() {
//	const int m_B= 20; //c 语言种中伪常量,不能写到c语言数组里 int m[m_B}.//不可以初始化数组.
//	                  //c++是真常量.可以初始化地址.
//	int *p = (int*)&m_B;//c语言可以用这种方式来改变常量的值.
//	 *p = 200;
//
//}
////c语言中,const修饰的变量,是伪常量,编译器是会分配内存的.
////C++中,const不会分配内存,const int m_B=20 ;可以初始化数组.
//*类似于下面的执行过程.
//int *p = (int*)&m_B;
//	 *p = 200;
//  const int a=20; 不会分配内存.
//编译器会临时开辟一块内存空间. 
//int  temp=m_B;//tmp有内存.
//int *p=(int *)&temp;
//*p指向的是临时的那块空间,临时空间看不到啊,
//
//
//
//*/
//
//
//int main() {
//
//	//test05();
//	system("pause");
//	return 0;
//}