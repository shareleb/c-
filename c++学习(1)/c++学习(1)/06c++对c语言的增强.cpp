//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
////1.ȫ�ֱ��������ǿ
////int a;
////int a = 10;
////2.���������ǿ,����������ǿ,����ֵ�����ǿ.�������ò��������ǿ.
////int getRectS(int m,int n){
//
////}
////3.����ת�������ǿ.
//void test03(){
//	char *p = (char*)malloc(sizeof(64)); // malloc����ֵ��void* 
//}
////4.struct ��ǿ  c++��struct���ԼӺ���
//struct Person {
//	int m_age;
//	void plusAge() { m_age++; };
//};
//void testo4(){
//	struct Person p1;//c������ʹ�ñ������struct�ؼ���,c++���Բ�дstruct.  
//	p1.m_age = 10;
//	p1.plusAge();
//	cout << p1.m_age << endl;//11
//
//
//}
////5.bool������ǿ, c����û��bool����.  c++���������
//bool flag = true;//ֻ����ͼ�. true������(��0),false�����(0).
//void test05() {
//	cout << sizeof(bool) << endl;
//	flag = 100;
//	cout << flag << endl;
//}
////6.��Ŀ�������ǿ.
//void test06() {
//	int a = 10;
//	int b = 20;
//	cout << "ret=" <<( a > b ? a : b);
//	printf("ret=%d\n", a > b ? a : b);
//	a > b ? a : b = 100;//c���Է��ص���ֵ,c++���ص��Ǳ���.
//	                     //c��������ģ��c++д,
//	*(a > b ? &a : &b) = 100;//Ҫ�����ż�����.
//	
//
//}
////7.const����ǿ
//const int m_A = 10; //c�����ܵ�����,�����Ը�.ȫ�ֳ���.
//void test07() {
//	const int m_B= 20; //c ��������α����,����д��c���������� int m[m_B}.//�����Գ�ʼ������.
//	                  //c++���泣��.���Գ�ʼ����ַ.
//	int *p = (int*)&m_B;//c���Կ��������ַ�ʽ���ı䳣����ֵ.
//	 *p = 200;
//
//}
////c������,const���εı���,��α����,�������ǻ�����ڴ��.
////C++��,const��������ڴ�,const int m_B=20 ;���Գ�ʼ������.
//*�����������ִ�й���.
//int *p = (int*)&m_B;
//	 *p = 200;
//  const int a=20; ��������ڴ�.
//����������ʱ����һ���ڴ�ռ�. 
//int  temp=m_B;//tmp���ڴ�.
//int *p=(int *)&temp;
//*pָ�������ʱ���ǿ�ռ�,��ʱ�ռ俴������,
//
//
//
//*/
//
//
//int main() {
//
//	//test05();
//	system("pause");
//	return 0;
//}