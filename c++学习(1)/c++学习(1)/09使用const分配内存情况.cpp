//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
// 
////1.const�����ڴ�,ȡ��ַ�������ʱ��ַ.
////2.extern������Ҳ��const���������ڴ�
////3.�ñ�����ʼ��const�ı���
//void test01() {
//	const int m_A = 10;
//	int *p = (int *)&m_A;  //�������ʱ�ڴ�
//}
////3.�ñ�����ʼ��const�ı���,������ڴ�.
//void test02() {
//	int a = 10;
//	const int b = a;//������ڴ�.
//	int *p = (int *)&b;
//	*p = 1000;
//	cout << b;
//
//}
////4.�Զ�����������,��constҲ������ڴ�.
//struct Person {
//	string m_Name;
//	int m_age;
//};
//void test03() {
//	const Person p1;
//	Person*p = (Person*)&p1;
//	p->m_Name = "��������";
//	(*p).m_age = 18;
//	cout << "����:" << p1.m_Name << "����:" << p1.m_Name << endl;
//}
//int main() {
//	test03();
//	system("pause");
//	return EXIT_SUCCESS;
//}
