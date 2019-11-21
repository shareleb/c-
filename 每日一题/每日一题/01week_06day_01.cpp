//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//int main()
//{
//	int W, H;  //W为列，H为行
//
//	int res = 0;
//	cin >> W >> H;
//	vector<vector<int>>v;
//	v.resize(H);
//	for (auto & i : v)
//	{
//		i.resize(W, 1);
//
//	}
//	for (int i = 0; i < H; i++)
//	{
//		for (int j = 0; j < W; j++)
//		{
//			if (v[i][j] == 1)
//			{
//				res++;
//				if (i + 2 < H)
//				{
//					
//					v[i + 2][j] = 0;
//				
//				}
//				if (j + 2 < W)
//				{
//					v[i][j + 2] = 0;
//					
//				}
//			}
//		}
//	}
//
//
//	cout <<  res << endl;
//	/*for (int i = 0; i < H; i++)
//	{
//		for (auto & g : v[i])
//		{
//			cout << g << ' ';
//		}
//		cout << endl;
//	}*/
//
//	
//
//
//	system("pause");
//	return 0;
//
//}
