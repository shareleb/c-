//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//struct person{
//	int m_age;
//};
//void allocatMemory(person **p)  //**p�����preson ,  *p������ָ��   p��ָ���ָ��.
//{
//	*p=(person*)malloc(sizeof(person));
//	(*p)->m_age = 140;
//}
//void test01() {
//	person *p = NULL;
//	allocatMemory(&p);
//	cout <<"p������:"<< p->m_age << endl;
//
//}
// 
////����ָ�����������ٿռ�.
//void allocatMemoryByRef(person * &p) {
//	p = (person*)malloc(sizeof(person));
//	p->m_age = 1000;
//}
//
//void test02() {
//	person*p = NULL;
//	allocatMemoryByRef(p);
//	cout << "p������:" << p->m_age << endl;
//}
//
//int main() {
//
//	test02();
//	system("pause");
//	return EXIT_SUCCESS;
//}