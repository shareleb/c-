#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{

	ofstream osf;
	osf.open(".//a.txt", ios::out | ios::trunc);
	osf << "������" << endl;
	osf << "�Ա�" << endl;
	osf << "���䣺" << endl;
	if (osf.is_open())
	{
		cout << "�򿪳ɹ�" << endl;

	}
	else
	{
		cout << "��ʧ��" << endl;
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