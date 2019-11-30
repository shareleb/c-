//#include<iostream>
//#include<string>
//using namespace std;
//int grade;
//
//void lengthGrade(string &s)
//{
//	if (s.size() <= 4)
//	{
//		grade += 5;
//	}
//	else if (s.size() >= 5 && s.size() <= 7)
//	{
//		grade += 10;
//	}
//	else
//	{
//		grade += 25;
//	}
//}
//void altmGrade(string &s)
//{
//	bool flag1 = false;   //Ð¡Ð´×ÖÄ¸
//	bool flag2 = false;   //´óÐ´×ÖÄ¸
//	
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] >= 'a'&&s[i] <= 'z')
//		{
//			flag1 = true;
//		}
//		if (s[i] >= 'A'&&s[i] <= 'Z')
//		{
//			flag2 = true;
//		}
//
//	}
//	if (flag1&&flag2)
//	{
//		grade += 20;
//	}
//	else if (flag1)
//	{
//		grade += 10;
//	}
//	else if (flag2)
//	{
//		grade += 10;
//	}
//	else
//	{
//
//	}
//}
//void numGrade(string &s)
//{
//	int sum = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] >= '0'&&s[i] <= '9')
//		{
//			sum++;
//		}
//
//	}
//	if (sum == 0)
//	{
//		grade += 0;
//	}
//	else if (sum == 1)
//	{
//		grade += 10;
//	}
//	else
//	{
//		grade += 20;
//	}
//}
//void flagGrade(string &s)
//{
//	int sum = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] >= 0x21 && s[i] <= 0x2f||s[i]>=0x3A&&s[i]<=0x40||s[i]>=0x5B&&s[i]<=0x60)
//		{
//			sum++;
//		}
//		if (s[i] >= 0x7B && s[i] <= 0x7E)
//		{
//			sum++;
//		}
//		
//	}
//	if(sum == 0)
//	{
//
//	}
//	else if (sum == 1)
//	{
//		grade += 10;
//	}
//	else
//	{
//		grade += 25;
//	}
//}
//
//void totalGrade(string &s)
//{
//	bool flag1 = false;   //Êý×Ö
//	bool flag2 = false;   //×ÖÄ¸
//	bool flag3 = false;   //×Ö·û
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] >= '0'&&s[i] <= '9')
//		{
//			flag1 = true;
//		}
//		if (s[i] >= '0'&&s[i] <= '9')
//		{
//			flag2 = true;
//		}
//		if (s[i] >= '0'&&s[i] <= '9')
//		{
//			flag1 = true;
//		}
//	}
//}
//
//
//
//int main()
//{
//
//
//
//
//}