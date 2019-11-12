////字符串中找出连续最长的数字串
//时间限制：1秒 空间限制：32768K 热度指数：24051
//本题知识点： 字符串 模拟 贪心
//算法知识视频讲解
//校招时部分企业笔试将禁止编程题跳出页面，为提前适应，练习时请使用在线自测，而非本地IDE。
//题目描述
//读入一个字符串str，输出字符串str中的连续最长的数字串
//输入描述 :
//个测试输入包含1个测试用例，一个字符串str，长度不超过255。
//输出描述 :
//在一行内输出str中里连续最长的数字串。
//示例1
//输入
//复制
//abcd12345ed125ss123456789
//输出
//复制
//123456789

//#include<iostream>
//#include<string>
//using namespace std;
//
//
//int main()
//{
//	string s;
//	getline(cin, s);
//	int i = 0;
//	int tmp ;
//	string max;
//	string net;
//	while (i<s.size())
//	{
//		while (s[i] >= '0' && s[i] <= '9')
//		{
//			net += s[i];
//			i++;
//		}
//		if (net.size() > max.size())
//		{
//			max = net;
//			net.clear();
//		}
//		else
//		{
//			net.clear();
//		}
//		i++;
//	}
//	cout<<max<<endl;
//	
//
//
//	system("pause");
//	return 0;
//}