//#include<iostream>
//using namespace std;
////空指针访问成员函数
////1.如果成员函数没有用到this,那么空指针可以直接访问
////2,如果成员函数用的this指针,那么就注意可以加if判断,如果this为null 则直接返回.
//
//
//class person
//{
//public :
//	void show()
//	{
//		cout << "person show" << endl;
//	}
//	void showage()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << age << endl; //   错误 NULL->age
//	}
//	int age;
//};
//void test01()
//{
//	person *p = NULL;
//	//p->show();    
//	p->showage();  
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}