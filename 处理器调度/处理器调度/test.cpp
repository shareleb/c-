#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{

	ofstream osf;
	osf.open(".//a.txt", ios::out | ios::trunc);
	osf << "姓名：" << endl;
	osf << "性别：" << endl;
	osf << "年龄：" << endl;
	if (osf.is_open())
	{
		cout << "打开成功" << endl;

	}
	else
	{
		cout << "打开失败" << endl;
	}
	long long index = osf.tellp();
	cout << index << endl;
		
	ifstream ifs;

	ifs.open("a.txt", ios::in);
	char buf[1024];
	while (ifs >> buf)
	{
		cout << buf;
	}

	return 0;





}