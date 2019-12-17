//#include<iostream>
//#include<vector>
//using namespace std;
//#include<cmath>
//bool isprim(int n)
//{
//	int tmp = sqrt(n);
//
//	for (int i = 2; i <= tmp; i++)
//	{
//		if (n%i==0)
//		{
//			return false;
//		}
//	}
//	return true;
//
//}
//int main()
//{
//	int x;
//	int half;
//	int i;
//																		
//	while (cin >> x)
//	{
//		//从中间找最快。
//		half =x / 2;
//		for (i = half; i > 0; i--)
//		{
//			if (isprim(i) && isprim(x - i))
//			{
//				break;
//			}
//		}
//		cout << i << endl << x - i << endl;
//	}
//	
//	
//	system("pause");
//	return 0;
//}