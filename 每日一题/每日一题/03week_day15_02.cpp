//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Gloves {
//public:
//	int findMinimum(int n, vector<int> left, vector<int> right) {
//		int sumLeft = 0;
//		int sum = 0;
//		for (auto& i : left)
//		{
//			sumLeft += i;
//		}
//		int sumRight = 0;
//		for (auto& i : right)
//		{
//			sumRight+= i;
//		}
//		if (sumLeft < sumRight)
//		{
//			int pp = sumLeft;
//			vector<int>tmp(left);
//			sort(left.begin(), left.end());
//			int max = left[n - 1];
//			for (int i = n - 2; i >= 0; i--)
//			{
//				if (left[i] < max&&left[i]!=0)
//				{
//				
//					sumLeft -= left[i];
//					break;
//				}
//			}
//			if (sumLeft == pp)
//			{
//				sum = 1;
//			}
//			else
//			{
//				sum = sumLeft;
//				sum++;
//			}
//			for (int i = 0; i < n; i++)
//			{
//				if (left[i] == 0)
//				{
//					sum += right[i];
//				}
//
//			}
//			sum += 1;
//
//		}
//		else
//		{
//			int pp = sumRight;
//			vector<int>tmp(right);
//			sort(right.begin(), right.end());
//			int max = right[n - 1];
//			for (int i = n - 2; i >= 0; i--)
//			{
//				if (right[i] < max&&right[i] != 0)
//				{
//
//					sumRight -= right[i];
//					break;
//				}
//			}
//			if (sumRight == pp)
//			{
//				sum = 1;
//			}
//			else
//			{
//				sum = sumRight;
//				sum++;
//			}
//			for (int i = 0; i < n; i++)
//			{
//				if (tmp[i] == 0)
//				{
//					sum +=left[i];
//				}
//
//			}
//			sum += 1;
//
//		}
//
//		return sum;
//
//	}
//};
//
//int main() {
//	int n;
//	vector<int>v1;
//	vector<int>v2;
//
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		v1.push_back(x);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		v2.push_back(x);
//	}
//	Gloves g;
//	int y=g.findMinimum(n, v1, v2);
//	cout << y << endl;
//	return 0;
//}