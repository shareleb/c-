//#include<iostream>
//using namespace std;
////thisָ��ָ�򱻵��õĳ�Ա���������Ķ���.
////��������͵͵����һ��thisָ�� Person * this
////this ָ����һ������ָ��,��������ÿ����ķǾ�̬��Ա������,thisָ�����趨��,ֱ��ʹ��
//
//class person
//{
//public:                   
//	person(int age)    //this ���������ͻ,
//	{
//		this->age = age;
//	}
//	//�Ա�����
//	void compareage(person &p)
//	{
//		if (this->age == p.age)
//		{
//			cout << "�������" << endl;
//		}
//		else
//		{
//			cout << "���䲻���" << endl;
//		}
//	}
//	//�������
//	
//		person& plus(person &p)
//	{
//		age = age + p.age;
//		return *this;
//	}
//
//   int age;
//
//};
//void test01()
//{
//	person p1(10);
//	person p2(10);
//	cout << "p1������" << p1.age << endl;
//	p1.compareage(p2);
//	p1.plus(p2).plus(p2); //��ʽ���
//	cout << "p1������" << p1.age << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}