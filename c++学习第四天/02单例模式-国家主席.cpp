//#include<iostream>
//using namespace std;
//
////单例模式的案例-主席
////1.为了让类只有一个实例, 实例不需要自己释放
////2 将默认构造 私有化
////3内部维护一个指针
////4.对外提供getINstance方法来访问这个指针  
////保证类中只能实例化唯一.
//
//当类的构造函数是私有的时，不像普通类那样实例化自己，只能通过静态成员函数来调用构造函数
//
//
////创建主席类
////需求  单例模式   为了创建类中的对象,并且保证只有一个对象实例.
//
//class chairMan
//{
//	//1.构造函数进行私有化.
//
//
//private :
//
//	chairMan()
//	{
//		cout << "创建国家主席" << endl;
//	}
//	//拷贝构造初始化
//	chairMan(const chairMan&c) {};
//public:
//	//通过get方法 访问主席
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
//	//cout<<"main调用"<<endl; // 主席先于main调用.
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}