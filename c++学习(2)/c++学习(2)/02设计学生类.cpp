//#include<iostream>
//using namespace std;
//#include<string>
////2.设计一个学生类,属性有姓名和学号,可以给姓名和学号赋值,可以显示学生的学号和姓名.
//
//class  student   
//{
//public:   //公共权限
//	void setName(string name) {
//		m_name = name;
//	}
//	void setID(int id) {
//		m_id = id;
//	}
//	void info() {
//		cout << "st的姓名为:" << m_name << " st的学号为:" << m_id << endl;
//	}
//	string  m_name;  //姓名
//	int m_id;    //学号
//};
//void test01() {
//	//创建一个学生 ,实例化 --通过类来创建对象的过程
//	student st;
//	st.setName("张三");
//	st.setID(1);
//	//通过了st的成员属性 来打印了st信息.
//	cout << "st的姓名为:" << st.m_name << " st的学号为:" << st.m_id << endl;
//	//通过成员函数,来打印st的信息.
//	st.info();
//}
//int main() {
//	
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}