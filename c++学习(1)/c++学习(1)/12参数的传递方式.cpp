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
//	myswap(a, b);//ֵ����
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//
//}
////��ַ����
//void myswap2(int *a, int *b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void test02() {
//	int a = 10;
//	int b = 20;
//	myswap2(&a, &b);//ֵ����
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//
//}
////���ô���.�����ڵ�ַ����
//void  myswap3(int &a, int &b) //&a=a; &b=b;
//{  
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void test03() {
//	int a = 10;
//	int b = 20;
//	myswap3(a, b);//ֵ����
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//}
////���õ�ע������
////1.���ñ�������һ��Ϸ����ڴ�ռ�
//// 2.��Ҫ���ؾֲ�����������
//int& dowork() {
//	int a=10;
//	return a;
//}
//int &dowork2() {
//	static int a = 10;
//	return a;
//}
//void test05() {
//	//int &a = 4; //���ñ�������һ��Ϸ����ڴ�ռ�
//	int &ret = dowork2();
//	cout << "ret=" << ret << endl;  //��һ��10�Ǳ����������Ż�.
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//	cout << "ret=" << ret << endl;
//
//	//��������ķ���ֵ������,��ô�������������Ϊ��ֵ.
//	dowork2() = 10000;//�൱��д��a=1000;
//
//}
//
//void test04() {
//	//int &a = 4; //���ñ�������һ��Ϸ����ڴ�ռ�
//	int &ret = dowork();
// 	cout <<"ret="<< ret << endl;  //��һ��10�Ǳ����������Ż�.
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