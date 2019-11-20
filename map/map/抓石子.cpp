//#include<iostream>
//#include<map>
//using namespace std;
//#include<functional>
//#include<set>
//#include<list>
//int main()
//{
//		//set会自动去重
//	//而multiset不去重。
//	
//	int n;
//	cin >> n;
//	multiset<int>data;
//	multiset<int>::iterator is;
//	int sum = 0;
//	int tmp;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> tmp;
//		data.insert(tmp);
//
//	}
//
//	while (data.size() > 1)
//	{
//		tmp = 0;
//		is = data.begin();
//		tmp += *is;
//		data.erase(is);
//
//		is = data.begin();
//		tmp += *is;
//		data.erase(is);
//
//		data.insert(tmp);
//		sum += tmp;
//
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}