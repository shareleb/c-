//#include<iostream>
//using namespace std;
//
////1.定义一个加法.,理解会产生错误.
//#define Myadd(x,y) (( x)+(y)) 
//void test01() {
//	int ret = Myadd(10, 20);
//	cout << "ret=" << Myadd(10, 20) * 20;   //预期结果 10+20*20
//}
//#define MyCompare(a,b) a<b?a:b 
//void test02() {
//	int a = 10;
//	int b = 20;
//	int ret=MyCompare(a, b);
//	cout << "ret=" << ret;
//}
////2.宏函数也没有定义域.
// inline void mycompare(int a, int b)
//{
//	int ret = a < b ? a : b;
//	cout << "ret :::" << ret << endl;
//}
// // inline void func()  //函数的声明
// void func();//如果函数实现的时候,没有加inline关键字,那么这个函数依然不算内联函数.
// // 以空间换时间.
//
// //1.内联函数注意事项
// //类内部的成员函数,默认前面加line
// //编译器默认给类内成员函数加inline.
// 
//
// //1.不能有循环.
// //2.不能存在太多的判断语句.
// //3.函数体不能过于庞大
// //4.不能对函数进行取址操作
//class Circle
//{
//
//public:   //公共权限
//};
//int main() {
//
//
//	test02();
//	system("pause");
//	return EXIT_SUCCESS;
//}