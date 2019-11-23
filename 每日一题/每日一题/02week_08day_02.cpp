//最小公倍数

//#include<iostream>
//#include<vector>
//using namespace std;
//#include<algorithm>
//
//int main()
//{
//	vector<int>v;
//	long long x, y;
//	cin >> x >> y;
//
//	long long max1 = max(x, y);
//	long  long min1 = min(x, y);
//	if (max1 / x == y || min1 == 1)
//	{
//		cout << max1 << endl;
//	}
//	else
//	{
//		long long i = 2;
//		while (1)
//		{
//			if (min1%i == 0 && max1%i == 0)
//			{
//				v.push_back(i);
//				min1 /= i;
//				max1 /= i;
//				i = 2;
//			}
//			if (min1 == i)
//			{
//				v.push_back(min1);
//				v.push_back(max1);
//				break;
//			}
//			i++;
//		}
//		long  long sum = 1;
//		for (int k = 0; k < v.size(); k++)
//		{
//			sum *= v[k];
//		}
//		cout << sum << endl;
//	}
//
//	system("pause");
//	return 0;
//
//}

//最小公倍数 = 两数之积除以最大公约数，
//这里使用碾转相除法进行最大公约数的求解：
//即a与b的 最大公约数可以转化为a、b之间的余数为两者之间最小的数之间的公约数。
//所以对于输入的两个 数进行连续求余，直到余数为0，求余的分母即为结果。

//#include<iostream>
//using namespace std;
//int gcd(int a, int b)
//{
//	int r;
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	return b;
//}
//int main()
//{
//	int a, b;
//	while (cin >> a >> b)
//	{
//		cout << a * b / gcd(a, b) << endl;
//	}
//	return 0;
//}