//һ�������� N ��Ԫ�أ�����������������͡� ���磺[-1, 2, 1]������������������Ϊ[2, 1]�����Ϊ 3
//��������:
//����Ϊ���С� ��һ��һ������n(1 <= n <= 100000)����ʾһ����n��Ԫ�� �ڶ���Ϊn��������ÿ��Ԫ��, ÿ����������32λint��Χ�ڡ��Կո�ָ���
//������� :
//���������������к�����ֵ��
//ʾ��1
//����
//����
//3 - 1 2 1
//���
//����
//3
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n,x;
//	vector<int>v;
//	vector<int>tmp;
//	cin >> n;
//	v.resize(n);
//	tmp.resize(n); //ÿһ��ֵ�����λ����������Լ�����ֶκ�
//
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x;
//		v[i] = x;
//
//	}
//	tmp[0] = v[0];
//	for (int i = 1; i < v.size(); i++)
//	{
//		if (tmp[i - 1] > 0)
//		{
//			tmp[i] = tmp[i - 1] + v[i];
//		}
//		else
//		{
//			tmp[i]= v[i];
//		}
//	}
//	int max=tmp[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (tmp[i] > max)
//		{
//			max = tmp[i];
//		}
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}
