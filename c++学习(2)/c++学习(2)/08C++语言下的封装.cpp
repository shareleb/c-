#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct person
{
	char mName[64];
	int  mAge;
	void personEat()
	{
		cout << mName << "吃人饭" << endl;
	}
};
struct dog
{
	char mName[64];
	int  mAge;
	void dogEat()
	{
		cout << mName << "吃狗粮" << endl;
	}
};

//c++中封装 严格类型转换检测,让属性和行为绑定到一起
//属性和行为作为一个整体来表示生活中的事物.
//控制权限  public  共有权限   protected 保护权限    private  私有权限
void test01() {
	person p1;
	strcpy(p1.mName, "老王");
	p1.personEat();
	
}
//struct 和 class 是一个意思,唯一的不同 默认权限,
//struct 是public ,而class 默认权限是private
//所谓私有权限,就是私有成员(属性和权限),在类的内部可以访问,类外部不能访问.
//公有权限,在类内和类外都可以访问.
class animal
{
	//如果我不声明权限,默认权限是private;
	void eat() {
		mAge = 10;
	}
	int mAge;
	//共有权限在类外可以访问.
private:
	int mweight;

protected:    //保护权限,类内部可以访问,(当前类的子类可以访问,类外部不可以访问)
	void set() { mweight = 1000; }
};
//public 类内,类外都可以访问
//protected 类内可以访问,类外不能访问  (子类可以访问)
//private   类内可以访问,类外不能访问  (子类不可以访问)
int main() {
	test01();
	system("pause");
	return EXIT_SUCCESS;
}