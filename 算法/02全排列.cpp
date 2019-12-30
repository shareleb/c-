//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void prem(vector<int>v, int start, int end)
//{
//	if (start == end)
//	{
//		for (auto & i : v)
//		{
//			cout << i << " ";
//		}
//		cout << endl;
//	}
//	else
//	{
//		for (int i = start; i <= end; i++)
//		{
//			swap(v[start], v[i]);
//			prem(v,start+1, end);
//			swap(v[start], v[i]);
//		}
//	}
//}
//
//
//int main()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	prem(v, 0, 3);
//	system("pause");
//	return 0;
//}