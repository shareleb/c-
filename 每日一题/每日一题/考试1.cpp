////#include<iostream>
////#include<string>
////using  namespace std;
////
////
////
////int main()
////{
////	string str;
////	cin >> str;
////	string a;
////	int b[26] = { 0 };
////
////	for (int i = 0; i < str.size(); i++)
////	{
////		towlower(str[i]);
////	}
////	
////	int k = 0;
////	for (int i = 0; i < str.size(); i++)
////	{
////		if (b[str[i] - 'a'] == 0)
////		{
////			b[str[i] - 'a'] = 1;
////			a.push_back(str[i]);
////			k++;
////		}
////	}
////	cout << a << endl;
////
////	system("pause");
////	return 0;
////}
////
//#include<iostream>
//#include<string>
//using  namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//	string a;
//	int b[55] = { 0 };
//	int k = 0;
//	for (int i = 0; i < str.size(); i++)
//	{
//		if (str[i] >= 'a'&&str[i] <= 'z')
//		{
//			if (b[str[i] - 'a'+26] == 0)
//			{
//				b[str[i] - 'a'+26] = 1;
//				a.push_back(str[i]);
//				k++;
//			}
//		}
//		if (str[i] >= 'A'&&str[i] <= 'Z')
//		{
//			if (b[str[i] - 'A'] == 0)
//			{
//				b[str[i] - 'A'] = 1;
//				a.push_back(str[i]);
//				k++;
//			}
//		}
//	}
//	cout << a << endl;
//
//	system("pause");
//	return 0;
//}
//
