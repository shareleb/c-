//#include<iostream>
//using namespace std;
//
////����ģʽ�İ���-��ϯ
////1.Ϊ������ֻ��һ��ʵ��, ʵ������Ҫ�Լ��ͷ�
////2 ��Ĭ�Ϲ��� ˽�л�
////3�ڲ�ά��һ��ָ��
////4.�����ṩgetINstance�������������ָ��  
////��֤����ֻ��ʵ����Ψһ.
//
//����Ĺ��캯����˽�е�ʱ��������ͨ������ʵ�����Լ���ֻ��ͨ����̬��Ա���������ù��캯��
//
//
////������ϯ��
////����  ����ģʽ   Ϊ�˴������еĶ���,���ұ�ֻ֤��һ������ʵ��.
//
//class chairMan
//{
//	//1.���캯������˽�л�.
//
//
//private :
//
//	chairMan()
//	{
//		cout << "����������ϯ" << endl;
//	}
//	//���������ʼ��
//	chairMan(const chairMan&c) {};
//public:
//	//ͨ��get���� ������ϯ
//	static chairMan *getInstance() {
//		return singleMan;
//	}
//private:
//	static chairMan * singleMan;
//
//
//};
//chairMan *  chairMan::singleMan = new chairMan;
//
//
//void test01()
//{
//	/*chairMan c1;
//	chairMan * c2 = new chairMan;
//	chairMan *c3 = new chairMan;*/
//
//	chairMan * cm1=chairMan::getInstance();
//	chairMan * cm2 = chairMan::getInstance();
//
//}
//
//int main()
//{
//	//cout<<"main����"<<endl; // ��ϯ����main����.
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}