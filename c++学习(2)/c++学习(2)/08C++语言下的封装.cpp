#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct person
{
	char mName[64];
	int  mAge;
	void personEat()
	{
		cout << mName << "���˷�" << endl;
	}
};
struct dog
{
	char mName[64];
	int  mAge;
	void dogEat()
	{
		cout << mName << "�Թ���" << endl;
	}
};

//c++�з�װ �ϸ�����ת�����,�����Ժ���Ϊ�󶨵�һ��
//���Ժ���Ϊ��Ϊһ����������ʾ�����е�����.
//����Ȩ��  public  ����Ȩ��   protected ����Ȩ��    private  ˽��Ȩ��
void test01() {
	person p1;
	strcpy(p1.mName, "����");
	p1.personEat();
	
}
//struct �� class ��һ����˼,Ψһ�Ĳ�ͬ Ĭ��Ȩ��,
//struct ��public ,��class Ĭ��Ȩ����private
//��ν˽��Ȩ��,����˽�г�Ա(���Ժ�Ȩ��),������ڲ����Է���,���ⲿ���ܷ���.
//����Ȩ��,�����ں����ⶼ���Է���.
class animal
{
	//����Ҳ�����Ȩ��,Ĭ��Ȩ����private;
	void eat() {
		mAge = 10;
	}
	int mAge;
	//����Ȩ����������Է���.
private:
	int mweight;

protected:    //����Ȩ��,���ڲ����Է���,(��ǰ���������Է���,���ⲿ�����Է���)
	void set() { mweight = 1000; }
};
//public ����,���ⶼ���Է���
//protected ���ڿ��Է���,���ⲻ�ܷ���  (������Է���)
//private   ���ڿ��Է���,���ⲻ�ܷ���  (���಻���Է���)
int main() {
	test01();
	system("pause");
	return EXIT_SUCCESS;
}