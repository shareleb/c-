//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include"game1.h"
//#include"game2.h"
//
////namespace �����ռ���Ҫ��; �������������ͻ������.
//
//
//
////�����ռ���,���Էź���,����,�ṹ��,��.
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
//	cout << "������b�µ�m_AΪ: " << A::B::m_A;
//}
////�����ռ���붨����ȫ����������
////�����ռ����Ƕ�������ռ�
////�����ռ��ǿ��ŵ�,������ʱ��ԭ�ȵ������ռ��������
//namespace A {   //�������ռ�������������ռ�A���кϲ�
//	int m_B = 1000;
//}
//void test03() {
//	cout << "A::�µ�m_AΪ" << A::m_A << "m_BΪ:" << A::m_B << endl;
//}
//
////5.����,���������ռ�
//namespace {
//	int m_C = 0;
//	int m_D = 0;
//}
////��д�����������ռ�,�൱��д��static int m_C;static int m_D;
////ֻ���ڵ�ǰ�ļ���ʹ��.
//
////6.�����ռ����ȡ����
//namespace veryLongName
//{
//	int m_A = 0;
//}
//void test04() {
//	//�����;
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
//		system("pause");//��������
//		return EXIT_SUCCESS; //���������˳�
//}