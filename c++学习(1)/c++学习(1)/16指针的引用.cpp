//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//struct person{
//	int m_age;
//};
//void allocatMemory(person **p)  //**p具体的preson ,  *p对象是指针   p是指针的指针.
//{
//	*p=(person*)malloc(sizeof(person));
//	(*p)->m_age = 140;
//}
//void test01() {
//	person *p = NULL;
//	allocatMemory(&p);
//	cout <<"p的年龄:"<< p->m_age << endl;
//
//}
// 
////利用指针引用来开辟空间.
//void allocatMemoryByRef(person * &p) {
//	p = (person*)malloc(sizeof(person));
//	p->m_age = 1000;
//}
//
//void test02() {
//	person*p = NULL;
//	allocatMemoryByRef(p);
//	cout << "p的年龄:" << p->m_age << endl;
//}
//
//int main() {
//
//	test02();
//	system("pause");
//	return EXIT_SUCCESS;
//}