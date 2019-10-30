////立方体案例
////1.点和圆关系实例
//// 2.1圆内的属性里有个其它的自定义的数据类型 Point
////2.2 三种判断关系
////2.3分文件编写
//   //2.3.1 .h写类的成员函数声明
//    //2.3.2 .cpp 写类成员函数的实现
//#include<iostream>
//#include"circle.h"
//#include"point.h"
//using namespace std;
////设计一个圆类.,点和圆的关系. 设计一个圆类和一个点类,来计算关系,
////圆心x0,y0   半径为r ,点的坐标 x1,y1.
//
////利用全局函数,判断点和圆的关系.
//void isInCicle(Circle & c, Point &p) {
//	//获取圆心和点的距离  的平方.
//	int distance = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
//	int rDistance = c.getR()*c.getR();
//	if (rDistance == distance) {
//		cout << "点在圆上" << endl;
//
//	}
//	else if (rDistance > distance) {
//		cout << "点在圆内";
//
//	}
//	else {
//		cout << "点在圆外" << endl;
//
//	}
//}
//void test01() {
//	Point p1;
//	p1.setX(10);
//	p1.setY(10);
//
//	Circle c1;
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c1.setCenter(center);
//	c1.setR(10);
//	isInCicle(c1, p1);
//	//利用成员函数判断点与圆的关系;
//	c1.isInCicleByClass(p1);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return EXIT_SUCCESS;
//}
//
//  