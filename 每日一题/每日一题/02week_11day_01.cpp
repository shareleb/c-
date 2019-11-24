//////1.复制运算符  
////=
////+=
////-=
////*=
/////=
////%=
////1.参数1 ： 左值
////2.参数2： 右值
////作用，修改左值。
////返回值是左值。、
////Test &  operator = (Test&a, const Test  &b);
////
////Test &operator =(const Test &b)
////
////
////2.算术运算符   成员函数板
////
////+
////-
////*
/////
////%
////
////++
////--
////
////3比较运算符
////
////
////
////4.输入输出运算符
////不能做成员函数
////ostream& operator<<(ostream &os, const  Test &a);
////istream& operator>>(istream &is, const  Test &a);
////
////
////5.在右单目
////【】
////（）
////->
////
////.不能重载
////
////
// 
////*  &  (类型）
//////
//////(类型）    operator int *();  不需要返回值。
//////new delete
//
////不能
//////  -  ! ~
//#include<iostream>
//using namespace std;
//
//class person
//{
//	int a;
//public:
//	void p()
//	{
//		th
//	}
//
//};
//
//#include<iostream>
//#include<vector>
//using namespace std;
//class LCA {
//public:
//	int getLCA(int a, int b) {
//		while (a != b)
//		{
//			if (a > b)
//			{
//				a /= 2;
//			}
//			else
//			{
//				b /= 2;
//			}
//		}
//		return a;
//	}
//};







