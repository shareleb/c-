//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;  
////���þ���ȡ����
////&д����������� ,д���Ҳ�,ȡ��ַ.
//
//
////1.���û����﷨ ,Type &����=ԭ��
//void test01() {
//	int a = 10;
//	int &b = a;
//	b = 20;
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//
//}
////2.���ñ����ʼ��
//void test02(){
//	int a = 10;
//	int &b = a;//���ó�ʼ���󲻿��޸�
//	int c = 20;
//	b = c;//��ֵ
//
//}
////3.�����齨������
//void test03() {
//	int arr[10];
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i;
//	}
//	//�����������
//	int(&parr)[10] = arr;
//	for (int i = 0; i < 10; i++) {
//		cout << parr[i] << " ";
//
//	}
//	cout << endl;
//	
//	//�ڶ��������typedef int(ARRAYREF)[10];//һ������10��Ԫ�ص�int ��������.
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