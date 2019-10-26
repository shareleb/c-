//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//struct person {
//	char mName[64];
//	int  mAge;
//};
//
//void personEat(struct person*p)
//{
//	printf("%s正在吃饭\n",p->mName);
//}void test01() {
//	struct person p1;
//	strcpy(p1.mName, "德玛西亚");
//	personEat(&p1);
//}
//
//struct dog {
//	char mName[64];
//	int  mAge;
//};
//void dogEat(struct dog * dog)
//{
//	printf("%s 在吃狗粮\n", dog->mName);
//}
//void test02() {
//	struct dog d;
//	strcpy(d.mName, "旺财");
//	dogEat(&d);
//
//	struct person p1;
//	strcpy(p1.mName, "老王");
//	dogEat(&p1);
//}
////c语言的封装属性与行为分开处理了,类型检测不够.
//int main() {
//	test02();
//	system("pause");
//	return EXIT_SUCCESS;
//}