//#include<iostream>
//using namespace std;
////this指针指向被调用的成员函数所属的对象.
////编译器会偷偷加入一个this指针 Person * this
////this 指针是一种隐含指针,它隐含于每个类的非静态成员函数中,this指针无需定义,直接使用
//
//class person
//{
//public:                   
//	person(int age)    //this 解决命名冲突,
//	{
//		this->age = age;
//	}
//	//对比年龄
//	void compareage(person &p)
//	{
//		if (this->age == p.age)
//		{
//			cout << "年龄相等" << endl;
//		}
//		else
//		{
//			cout << "年龄不相等" << endl;
//		}
//	}
//	//年龄相加
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
//	cout << "p1的年龄" << p1.age << endl;
//	p1.compareage(p2);
//	p1.plus(p2).plus(p2); //链式编程
//	cout << "p1的年龄" << p1.age << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}