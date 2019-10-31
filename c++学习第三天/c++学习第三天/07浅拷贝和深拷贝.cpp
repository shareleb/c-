//#define  _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//using namespace std;
////深拷贝和简拷贝
////系统默认提供的拷贝构造函数,会进行简单的值拷贝.
////如果属性里有指向堆区空间的数据,那么简单的浅拷贝会导致重复释放内存的异常
////解决问题,需要我们自己提供拷贝构造函数
//class Person 
//{
//public:  
//	Person() {}
//	//初始化属性
//	Person(char * name, int age) {
//		m_Name = (char*)malloc(strlen(name) + 1);
//		strcpy(m_Name, name);
//		m_Age = age;
//	}
//	//拷贝构造函数,系统会提供默认拷贝构造函数,而且是简单的值拷贝;
//	//自己提供拷贝构造,原因简单的浅拷贝会释放堆区空间两次,导致挂掉.
//	Person(const Person &p) {
//		m_Age = p.m_Age;
//		m_Name = (char*)malloc(strlen(p.m_Name) + 1);
//		strcpy(m_Name, p.m_Name);
//	}
//	~Person() {
//		cout << "析构函数调用" << endl;
//		if (m_Name != NULL) {
//			free(m_Name);
//			m_Name = NULL;
//		}
//	}
//
//	char* m_Name;  //姓名
//	int m_Age;    //年龄
//
//};
//void test01() {
//	char a[] = "敌法";
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