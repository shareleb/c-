#include<iostream>
#include<set>
#define ARRSIZE(a)    (sizeof(a)/sizeof(a[0]))
#include<map>
using namespace std;
#include<string>
int main()
{
	//map<int, int,greater<int>>m;
	//m.insert(pair<int, int>(1, 2));
	//m.insert(pair<int, int>(2, 5));
	//m.insert(pair<int, int>(3, 4));
	//m.insert(pair<int, int>(4, 7));
	//m.insert(pair<int, int>(5, 8));
	//m.insert(pair<int, int>(8, 3));
	//m[3]++;                //没有会新增                   map重要，
	//for (auto&i : m)
	//{
	//	cout << i.first << ' '<<i.second<<endl;

	//}
	map<char, int>m;

	string s;
	cin >> s;
	for (auto&i : s)
	{
		m[i]++;
	}
	for (auto&i : m)
	{
		cout << i.first <<i.second<<  endl;
	}
	cout << m['Y'] << endl;
	for (auto&i : m)
	{
		cout << i.first << i.second << endl;
	}


	system("pause");
	return 0;
}

