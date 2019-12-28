#include<iostream>
using namespace std;
int fi(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fi(n-1)+fi(n-2);
	}
}

int _main()
{
	int n = 7;
	cout << fi(n) << endl;
	return 0;

}