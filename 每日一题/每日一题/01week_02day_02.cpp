//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string str;
//	string s;
//	getline(cin, str);
//	int start = 0;
//	int end=0;
//	vector<string>v;
//	if (!str.empty())
//	{
//		while (end!=-1)
//		{
//			end = str.find(' ', start);
//			if (start == end)
//			{
//				return 0;
//			}
//			if (end != -1)
//			{
//				s = str.substr(start, end-start);
//				v.push_back(s);
//				start = end + 1;
//			}
//		}
//		v.push_back(str.substr(start));
//	}
//	reverse(v.begin(), v.end());
//	int i ;
//	for ( i=0;i < v.size()-1; i++)
//	{
//		
//		cout << v[i]<<' ';
//	}
//	cout << v[i];
//
//
//
//	system("pause");
//
//	return 0;
//
//
//}