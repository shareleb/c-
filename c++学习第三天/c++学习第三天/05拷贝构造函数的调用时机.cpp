//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//public:   
//	Person() {
//		cout << "Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int a) {
//		cout << "�вι��캯������" << endl;
//	}
//	
//	Person(const  Person& p)  //����Ҫ��& Ҫ��û�еĻ�,��p���ٿռ�,�ֵ����˿������캯�� 
//		                            //����ѭ��.
//	{
//		m_Age = p.m_Age;
//		cout << "�������캯������" << endl;
//	}
//	~Person() {
//		cout << "������������" << endl;
//	}
//	int m_Age;
//};
////�������캯�����õ�ʱ��.
////1.���Ѿ������õĶ�������ʼ���µĶ���.
//void test01() {
//	Person p1;
//	p1.m_Age = 10;
//	Person p2(p1);
//	Person p3 = Person(p2);
//}
////2.��ֵ���ݵķ�ʽ������������ֵ.
//void doWork(Person p1)  //Person p1=Person(p)
//{
//
//}
//void test02() {
//	Person p;
//	p.m_Age = 10;
//	doWork(p);
//}
//
////3.��ֵ�ķ�ʽ���ؾֲ��Ķ���
//Person doWork02() {
//	Person p1;
//	return p1;
//
//}
//void test03() {
//	Person p3 = doWork02();
//}
////release ���Ż���ʲô��?
////  Person p;  //������Ĭ�Ϲ���
////  void doWork2(Person &p)
////{
////	Person p1; //Ĭ�Ϲ��캯��.
////}
//
//int main() {
//
//	test02();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}