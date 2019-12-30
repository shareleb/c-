#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int longestCommonSubsequence(string text1, string text2) {
		int n1 = text1.size(); //ÐÐ
		int n2 = text2.size();  //ÁÐ
		vector<vector<int>>v(n1+1, vector<int>(n2+1, 0));
		for (int i = 1; i <= n1; i++)
		{
			for (int j = 1; j <= n2; j++)
			{
				if (text1[i-1] == text2[j-1])
				{
					v[i][j] = v[i - 1][j - 1] + 1;
				}
				else if (v[i - 1][j] > v[i][j - 1])
				{
					v[i][j] = v[i - 1][j];
				}
				else
				{
					v[i][j] = v[i][j - 1];
				}
			}
		}
	
		return v[n1][n2];

	}
};
int main()
{
	system("pause");
	return 0;
}