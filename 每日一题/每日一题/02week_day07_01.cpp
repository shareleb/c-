//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int a = 1;
//	int b = 1;
//	int tmp, min = 0, max = 0;
//	if (n == 1)
//	{
//		cout << 0;
//		return 0;
//	}
//	while (1)
//	{
//		tmp = a + b;
//		if (tmp < n)
//		{
//			min = tmp;
//		}
//		if (tmp >= n)
//		{
//			max = tmp;
//			break;
//		}
//		a = tmp;
//		b = a + b;
//		tmp = b;
//		if (tmp < n)
//		{
//			min = tmp;
//		}
//		if (tmp >= n)
//		{
//			max = tmp;
//			break;
//		}
//
//
//	}
//	int aa = max - n;
//	int bb = n - min;
//	if (aa < bb)
//	{
//		cout << aa << endl;
//
//	}
//	else
//	{
//		cout << bb << endl;
//	}
//
//	system("pause");
//	return 0;
//
//}s