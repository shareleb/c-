//#define  _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//using namespace std;
////����ͼ򿽱�
////ϵͳĬ���ṩ�Ŀ������캯��,����м򵥵�ֵ����.
////�����������ָ������ռ������,��ô�򵥵�ǳ�����ᵼ���ظ��ͷ��ڴ���쳣
////�������,��Ҫ�����Լ��ṩ�������캯��
//class Person 
//{
//public:  
//	Person() {}
//	//��ʼ������
//	Person(char * name, int age) {
//		m_Name = (char*)malloc(strlen(name) + 1);
//		strcpy(m_Name, name);
//		m_Age = age;
//	}
//	//�������캯��,ϵͳ���ṩĬ�Ͽ������캯��,�����Ǽ򵥵�ֵ����;
//	//�Լ��ṩ��������,ԭ��򵥵�ǳ�������ͷŶ����ռ�����,���¹ҵ�.
//	Person(const Person &p) {
//		m_Age = p.m_Age;
//		m_Name = (char*)malloc(strlen(p.m_Name) + 1);
//		strcpy(m_Name, p.m_Name);
//	}
//	~Person() {
//		cout << "������������" << endl;
//		if (m_Name != NULL) {
//			free(m_Name);
//			m_Name = NULL;
//		}
//	}
//
//	char* m_Name;  //����
//	int m_Age;    //����
//
//};
//void test01() {
//	char a[] = "�з�";
//	Person p1(a,10);
//	Person p2(p1);
//}
//int main() {
//
//
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}