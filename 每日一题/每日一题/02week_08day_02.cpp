//��С������

//#include<iostream>
//#include<vector>
//using namespace std;
//#include<algorithm>
//
//int main()
//{
//	vector<int>v;
//	long long x, y;
//	cin >> x >> y;
//
//	long long max1 = max(x, y);
//	long  long min1 = min(x, y);
//	if (max1 / x == y || min1 == 1)
//	{
//		cout << max1 << endl;
//	}
//	else
//	{
//		long long i = 2;
//		while (1)
//		{
//			if (min1%i == 0 && max1%i == 0)
//			{
//				v.push_back(i);
//				min1 /= i;
//				max1 /= i;
//				i = 2;
//			}
//			if (min1 == i)
//			{
//				v.push_back(min1);
//				v.push_back(max1);
//				break;
//			}
//			i++;
//		}
//		long  long sum = 1;
//		for (int k = 0; k < v.size(); k++)
//		{
//			sum *= v[k];
//		}
//		cout << sum << endl;
//	}
//
//	system("pause");
//	return 0;
//
//}

//��С������ = ����֮���������Լ����
//����ʹ����ת������������Լ������⣺
//��a��b�� ���Լ������ת��Ϊa��b֮�������Ϊ����֮����С����֮��Ĺ�Լ����
//���Զ������������ �������������ֱ࣬������Ϊ0������ķ�ĸ��Ϊ�����

//#include<iostream>
//using namespace std;
//int gcd(int a, int b)
//{
//	int r;
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	return b;
//}
//int main()
//{
//	int a, b;
//	while (cin >> a >> b)
//	{
//		cout << a * b / gcd(a, b) << endl;
//	}
//	return 0;
//}