//#include<iostream>
//using namespace std;
//
////设计立方体类
////面积 ,体积 判断两个长方体是否相等.
//class Cube
//{
//
//public: 
//	//设置长;
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	//获取长
//	int getL() const{   // int getL () const 表明该函数不可以修改属性值.//const匹配了
//
//		return  m_L;
//	}
//	//设置宽;
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	//获取宽
//	int getW() {
//		return  m_W;
//	}
//	//设置高;
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	//获取高
//	int getH() {
//		return  m_H;
//	}
//	//求方体的面积
//	void getCubeS()
//	{
//		int s = 2 * m_H * m_L + 2 * m_H * m_W + 2 * m_W*m_L;
//		cout << "立方体的面积为:" << s << endl;
//
//	}
//	void getCubeV()
//	{
//		int v = m_H * m_L*m_W;
//		cout << "立方体的体积为:" << v << endl;
//	}
//	//通过成员函数来判断是否相等.
//	bool compareCubeByClass(Cube &cub)
//	{
//		bool ret = m_L = cub.getL() && m_W == cub.getW() && m_H == cub.getH();
//		return ret;
//
//	}
//private:
//	int m_L; //长
//	int m_W;//宽
//	int m_H; //高
//
//};
////为什么刚才不能添加const  //没法保证成员函数里是否修改了成员属性
//void func(const Cube &cub) {
//	cub.getL();
//}
////全局函数判断两个立方体是否相等.
////加了const但是可以通过成员函数来修改它 //if(c1.getL()==c2.getL())   所以不可以.
//bool compareCube( Cube &c1, Cube &c2) {
//	if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW()) {
//		return  true;
//	}
//		return false;
//}
//
//void test01() {
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	
//	c1.getCubeS();
//	c1.getCubeV();
//	//通过全局函数判断两个立方体是否相等
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	bool ret=compareCube(c1, c2);
//	if (ret) {
//		cout << "c1和c2是相等的!" << endl;
//	}
//	else {
//		cout << "c1与c2是不相等的!" << endl;
//	}
//
//	//通过成员函数来判断立方体是否相等.
//	bool ret2 = c1.compareCubeByClass(c2);
//	if (ret) {
//		cout << "通过成员函数::c1和c2是相等的!" << endl;
//	}
//	else {
//		cout << "通过成员函数::c1与c2是不相等的!" << endl;
//	}
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return EXIT_SUCCESS;
//}