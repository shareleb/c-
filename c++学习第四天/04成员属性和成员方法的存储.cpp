////成员属性,成员方法时分开存储的.
//#include<iostream>
//using namespace std;
//#pragma pack(1)   //就可以一个一个来 为12 了
////空类的大小为1.
////每个实例的对象,都有一个第一无二的地址char维护这个地址
////person p[10]     p[0], p[1].......
//class person
//{
//public:
//	int a;  //非静态成员变量,属于对象身上.
//	void  func() {};  //非静态成员函数不属于对象身上   时共用一个实例    可以区分. 用this区分
//	static  int b;  //静态成员变量 不属于对象身上
//	static  void func2(); //静态成员函数 也不属于对象身上.
//	double c;     //12 错误  字节   a不够8 会转换为8    16;
//	
//};
////结论 ,非静态成员变量,才属于对象身上.
//void test01()
//{
//	cout << "size of (person)" << sizeof(person) << endl;
//}
//
//void  test02()
//{
//	person p1;
//	p1.func();  //编译器会偷偷加入一个this指针 Person * this 
//	          //this 指针是一种隐含指针,它隐含于每个类的非静态成员函数中,this指针无需定义,直接使用
//	            
//
//	person p2;
//	p2.func();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}