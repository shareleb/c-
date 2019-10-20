//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//namespace KingGlory {
//	int sunwukongID = 10;
//}
//void test01() {
//	int sunwukongID = 20;
//	//using声明,要避免二义性问题.
//	//写了using声明后,下面这行代码说明以后看到的sunwukongID是用KingGlory下的
//	//但是编译器又有就近原则.
//	//二义性.
//	//using KingGlory::sunwukongID;
//	cout << sunwukongID << endl;
//}
////using 编译指令,
//namespace LOL
//{
//	int sunwukongID = 30;
//
//}
//void test02() {
//	//int sunwukongID = 20;
//	//using 编译指令,
//	using namespace KingGlory;//打开王者荣耀的房间
//	using namespace LOL;    //打开LOL的房间
//	//如果打开多个房间也要避免二义性问题
//	cout << LOL::sunwukongID << endl;
//}
//int main(){
//
//		test01();
//		system("pause");//阻塞功能
//		return EXIT_SUCCESS; //返回正常退出
//}