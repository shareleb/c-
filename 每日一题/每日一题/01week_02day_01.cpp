//排列子序列   ，非递增，非递减
////链接：https://www.nowcoder.com/questionTerminal/2d3f6ddd82da445d804c95db22dcc471?orderByHotValue=1&page=1&onlyReference=false
////来源：牛客网  题目ID：100448 排序子序
////
////牛牛定义排序子序列为一个数组中一段连续的子序列, 并且这段子序列是非递增或者非递减排序的。牛牛有一个长度为n的整数数组A, 他现在有一个任务是把数组A分为若干段排序子序列, 牛牛想知道他最少可以把这个数组分为几段排序子序列.
////如样例所示, 牛牛可以把数组A划分为[1, 2, 3]和[2, 2, 1]两个排序子序列, 至少需要划分为2个排序子序列, 所以输出2
////
////输入描述 :
////输入的第一行为一个正整数n(1 ≤ n ≤ 10 ^ 5)
////第二行包括n个整数A_i(1 ≤ A_i ≤ 10 ^ 9), 表示数组A的每个数字。
////
////
////输出描述 :
////输出一个整数表示牛牛可以将A最少划分为多少段排序子序列
//#include<iostream>
//using namespace std;
//#include<vector>
//int main()
//{	
//	vector<int>v;
//	int n,x;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x;
//		v.push_back(x);
//	}
//	//主要要分为三种状态。    要考虑最后一次的情况，
//	int flag=-1; //假设1为递增序列。  0 为递减序列.   -1代表未知              
//	int sum=0;  //为全部的序列数。
//	int tmp = v[0];
//	for (int i = 1; i < v.size(); i++)
//	{
//		if (flag == -1)
//		{
//			if (i == v.size() - 1)
//			{
//				sum++;
//			}
//			if (v[i] > v[i - 1])
//			{
//				flag = 1;
//			}
//			else if (v[i] < v[i - 1])
//			{
//				flag = 0;
//			}
//			else
//			{
//			}
//		}
//		else 
//		{
//			if (i == v.size() - 1)
//			{
//				sum++;
//			}
//			if (flag == 1 && v[i] >= v[i - 1])
//				//递增序列的时候
//			{
//				continue;
//			}
//			if (flag == 1 && v[i] < v[i - 1])
//			{
//				sum++;
//				flag = -1;
//				
//				continue;
//			}
//			if (flag == 0 && v[i] <= v[i - 1])
//			{
//				continue;
//			}
//			if (flag == 0 && v[i] > v[i - 1])
//			{
//				sum++;
//				flag = -1;		
//				continue;
//			}
//		}
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}