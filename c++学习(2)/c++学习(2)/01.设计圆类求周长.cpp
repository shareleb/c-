//#include<iostream>
//using namespace std;
//const double pi=3.14;
//
//
////1.���һ����Բ�ܳ���.
////2.�ܳ���ʽ     2*pi*r
//
//class Circle   //class��������һ����,���������������.
//{
//	
//public:   //����Ȩ��
////��Բ���ܳ�
//	//������д�ĺ���,�г�Ա����.
//	double calculateZC() {
//		return 2 * pi*m_r;
//	}
//	//���ð뾶�ĳ�Ա����
//    void setR(int r) {
//		m_r = r;
//	}
//
//	int m_r;     //�뾶.  ��Ա����
//};
//void test01() {
//		//ͨ����,������һ��Բ;
//	Circle c1;  //Բ (����).
//	//c1.m_r = 10;  //��������������а뾶�ĸ�ֵ
//
//	//ͨ����Ա����,��Ӹ�Բ�����ð뾶.
//	//��Ա���������޸ĳ�Ա����.
//	c1.setR(10);
//	//���c1���ܳ�.
//
//	cout << "c1���ܳ�α:" << c1.calculateZC() << endl;
//}
//int main() {
//	
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}