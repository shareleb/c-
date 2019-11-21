//#include<iostream>
//#include<vector>
//#include<stack>
//#include<string>
//using namespace std;
//
//class Parenthesis {
//public:
//	bool chkParenthesis(string A, int n) {
//		
//		stack<char>s;
//		bool flag=true;
//		for (int i = 0; i < A.size(); i++)
//		{
//			
//			if (A[i] == '(')
//			{
//				s.push(A[i]);
//			}
//			else if (A[i] == ')')
//			{
//				if (s.empty())
//				{
//					return false;
//				}
//				else
//				{
//					s.pop();
//				}
//
//			}
//			else
//			{
//				flag = false;
//				break;
//
//			}
//		}
//
//		return flag;
//
//	}
//};
//
//
//
//int main()
//{
//
//	Parenthesis p;
//	string s;
//	cin >> s;
//	bool l = p.chkParenthesis(s,s.size());
//	if (l)
//	{
//		cout << "Æ¥Åä³É¹¦" << endl;
//	}
//	else
//	{
//		cout << "Æ¥ÅäÊ§°Ü" << endl;
//	}
//
//	system("pause");
//	return 0;
//}