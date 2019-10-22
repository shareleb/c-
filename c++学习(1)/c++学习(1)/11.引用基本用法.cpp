//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;  
////引用就是取别名
////&写到左侧是引用 ,写到右侧,取地址.
//
//
////1.引用基本语法 ,Type &别名=原名
//void test01() {
//	int a = 10;
//	int &b = a;
//	b = 20;
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//
//}
////2.引用必须初始化
//void test02(){
//	int a = 10;
//	int &b = a;//引用初始化后不可修改
//	int c = 20;
//	b = c;//赋值
//
//}
////3.对数组建立引用
//void test03() {
//	int arr[10];
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i;
//	}
//	//给数组起别名
//	int(&parr)[10] = arr;
//	for (int i = 0; i < 10; i++) {
//		cout << parr[i] << " ";
//
//	}
//	cout << endl;
//	
//	//第二种起别名typedef int(ARRAYREF)[10];//一个具有10个元素的int 类型数组.
//	ARRAYREF &parr2 = arr;
//	for (int i = 0; i < 10; i++) {
//		cout << parr2[i] << " ";
//
//	}
//}
//
//
//int main() {
//	test03();
//	system("pause");
//	return EXIT_SUCCESS;
//}