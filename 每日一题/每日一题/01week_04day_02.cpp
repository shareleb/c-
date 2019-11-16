#include<iostream>
using namespace std;
#include<vector>
#include<cmath>
int main()
{
	int M, N;
	cin >> M >> N;
	vector<int>vv;
	int flag = 1;  //1为正,0位负
	if (M > 0)
	{
	}
	else {
		M = abs(M);
		flag = 0;
	}

	int tmp;
	int sum = 0;
	vector<int>v;
	for (; M > 0; M /= N)
	{
		tmp = M % N;
		vv.push_back(tmp);
	}
	if (N <= 9)
	{
		if (flag)
		{
			for (int i = vv.size() - 1; i >= 0; i--)
			{
				cout << vv[i];
			}

		}
		else {
			cout << '-';
			for (int i = vv.size() - 1; i >= 0; i--)
			{
				cout << vv[i];
			}
		}
	}
	else
	{
		if (flag == 1)
		{
		}
		else {
			cout << '-';
		}
		for (int i = vv.size() - 1; i >= 0; i--)
		{
			if (vv[i] == 10)
			{
				cout << 'A';
			}
			else if (vv[i] == 11)
			{
				cout << 'B';
			}
			else if (vv[i] == 12)
			{
				cout << 'C';
			}
			else if (vv[i] == 13)
			{
				cout << 'D';
			}
			else if (vv[i] == 14)
			{
				cout << 'E';
			}
			else if (vv[i] == 15)
			{
				cout << 'F';
			}
			else {
				cout << vv[i];
			}
		}
	}
	return 0;
}