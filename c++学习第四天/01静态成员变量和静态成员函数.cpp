//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	static int m_Age;   //����static���Ǿ�̬��Ա����,�Ṳ������.
//	//��̬��Ա����,����������,������г�ʼ��
//	//��̬��Ա����Ҳ����Ȩ�޵�.
//
//
//	//��̬��Ա�������ܷ�����ͨ��Ա��laing
//	//��̬��Ա�������������ڶ���;
//	//���Է��ʾ�̬��Ա����.����Ҫ������.
//	//��̬��Ա����Ҳ����Ȩ�޵�.
//	static void  func()
//	{
//
//		cout << "func�ĵ���" << endl;
//	}
//	//��ͨ��Ա�������Է�����ͨ��Ա����,Ҳ���Է��ʾ�̬��Ա����.
//	void myFunc()
//	{
//
//	}
//private:
//	static int m_other;//˽��Ȩ��,�����ⲻ�ܷ���
//
//};	
//int Person::m_Age = 10; //�����ʼ��ʵ��.
//int Person::m_other = 20; //�������ȫ����, ��������ǰ�Ѿ������ڴ�.
//
//
//void test01()
//{
//	//ͨ�������������;
//	Person p1;
//	p1.m_Age = 10;
//
//	Person p2;
//	p2.m_Age = 20;
//
//	cout << "p1.m_Age=" << p1.m_Age << endl;
//	cout << "p2.m_Age=" << p2.m_Age << endl; //��������
//
//	//ͨ��������������,
//	cout << "ͨ����������Age:" << Person::m_Age << endl;
//	//cout << "other=" << Person::m_other << endl;//˽��Ȩ���������޷�����.
//    
//	//��̬��Ա��������
//	
//
//	p1.func();
//	p2.func();
//	Person::func();
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}