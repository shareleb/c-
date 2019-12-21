//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//	int minimumTotal(vector<vector<int> > &triangle) {
//		
//		vector<vector<int>>minPath(triangle);
//		for (int i = 1; i < triangle.size(); ++i)
//		{
//			for (int j = 0; j <= i; j++)
//			{
//				if (j == 0)
//				{
//					//minPath[i][j] = minPath[i - 1][0] + triangle[i][0];
//				}
//				else if (j == i)
//				{
//					minPath[i][j] = minPath[i - 1][1 - 1] + triangle[i][i];
//				}
//				else
//				{
//					minPath[i][j] = min(minPath[i - 1][j], minPath[i - 1][j - 1]) + triangle[i][j];
//				}
//			}
//		}
//		int row = triangle.size();
//		int allmin=minPath[ro]
//
//	}
//};
