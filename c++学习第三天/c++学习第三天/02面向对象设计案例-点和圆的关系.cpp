////�����尸��
////1.���Բ��ϵʵ��
//// 2.1Բ�ڵ��������и��������Զ������������ Point
////2.2 �����жϹ�ϵ
////2.3���ļ���д
//   //2.3.1 .hд��ĳ�Ա��������
//    //2.3.2 .cpp д���Ա������ʵ��
//#include<iostream>
//#include"circle.h"
//#include"point.h"
//using namespace std;
////���һ��Բ��.,���Բ�Ĺ�ϵ. ���һ��Բ���һ������,�������ϵ,
////Բ��x0,y0   �뾶Ϊr ,������� x1,y1.
//
////����ȫ�ֺ���,�жϵ��Բ�Ĺ�ϵ.
//void isInCicle(Circle & c, Point &p) {
//	//��ȡԲ�ĺ͵�ľ���  ��ƽ��.
//	int distance = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
//	int rDistance = c.getR()*c.getR();
//	if (rDistance == distance) {
//		cout << "����Բ��" << endl;
//
//	}
//	else if (rDistance > distance) {
//		cout << "����Բ��";
//
//	}
//	else {
//		cout << "����Բ��" << endl;
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
//	//���ó�Ա�����жϵ���Բ�Ĺ�ϵ;
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