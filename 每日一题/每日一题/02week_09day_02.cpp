//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	while (1)
//	{
//		int n, m;  //n 为列    m为行
//		cin >> n >> m;
//		vector<vector<int>>v;
//		v.resize(m + 1);
//		for (auto & i : v)
//		{
//			i.resize(n + 1, 1);
//
//		}
//		for (int i = 1; i <= m; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				v[i][j] = v[i][j - 1] + v[i - 1][j];
//			}
//		}
//
//
//		for (int i = 0; i <= m; i++)
//		{
//			for (int j = 0; j <= n; j++)
//			{
//				cout << v[i][j] << ' ';
//			}
//			cout << endl;
//		}
//		cout << v[m][n] << endl;
//
//	}
//	return 0;
//}