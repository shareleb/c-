#include<iostream>
#include<fstream>
using namespace std;
#include<iostream>
#include<algorithm>
#include<vector>
//�ļ��Ķ�дָ�룬
/*

���������ļ�����һ����ָ��
��������ļ�����һ��дָ��
������������ļ�����һ����дָ��
��ʶ�ļ������ĵ�ǰλ�ã���ָ���������д������Ӧ��������

*/


void test01()
{
	//ofstream outFile("test.txt", ios::out | ios::binary);
	///*ofstream outfile;
	//outfile.open("aa.txt", ios::out | ios::binary);*/
	//if (!outFile)
	//{
	//	cout << "File open error" << endl;
	//}

	//�ļ������Ϊp
	ofstream fout("a1.out", ios::app);
long	long location = fout.tellp();      //��ȡ��ǰָ���λ�á�
	cout << location << endl;
	location = 10;
	fout.seekp(location);      //��дָ���ƶ�����10���ֽڳ���
	fout.seekp(location, ios::beg);
	fout.seekp(location, ios::cur);
	fout.seekp(location, ios::end);
	//location ����Ϊ��ֵ��

//ofstream tellp
//	ofteam   seekp


//	�ļ�������
	ifstream fin("a1.in", ios::ate);   //���ļ�����λ�ļ�ָ�뵽�ļ�β
//long	long location = fin.tellg();   //��ȡ��ǰָ���λ��

	fin.seekg(location);
	fin.seekg(location, ios::beg);





}
void test02()
{
	vector<int>v;
	ifstream  srcFile("in.txt", ios::in);
	ofstream  destFile("out.txt", ios::out);
	int x;
	while (srcFile >> x)
		v.push_back(x);
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		destFile << v[i] << ' ';

	}
	destFile.close();
	srcFile.close();


}
//���ַ���ȡ����>>  <<  ��cin cout һ���Ϳ���


//�����ƶ�ȡ��Ҫ��read ��write����

//istream & read(char * s, long n);
//�������Ƕ�ָ�룬  
//���ļ���ָ��ָ��ĵط���n���ֽ����ݣ������ڴ��ַs��
//Ȼ���ļ���ָ������ƶ���n���ֽڣ���iOS����in��ʽ��ʱ
//�ļ���ָ�뿪ʼָ���ļ���ͷ.


//istream & write(const char *s,long n);

void test04()
{
	ifstream ifs("in.txt", ios::in);

	char buf[1024];
	//ifs.getline(buf, 1024);
	//ifs >> buf;  //���ж�   �����ո��ֹͣ
	while (!ifs.eof())
	{
		ifs.getline(buf, 1024);
	}
	
	
	cout << buf << endl;


}
class Student
{
public:
	char name[20];
	int score;
};
void test05()
{
	Student s;
	ofstream Outfile("student.dat", ios::out | ios::binary);
	while (cin >> s.name >> s.score)
		Outfile.write((char*)&s, sizeof(s));
	Outfile.close();


}



int main()
{
	//�ļ���д��Ͷ�ȡһ������
	//ofstream ofs("12.txt", ios::out | ios::binary);
	//int x = 120; 
	//ofs.write((const char*)(&x), sizeof(int));
	//ofs.close();
	//ifstream ifs("12.txt", ios::in | ios::binary);
	//int y;
	//ifs.read((char*)(&y), sizeof(int));
	//ifs.close();
	//cout << y << endl;
//	test04();
	test05();
	ifstream ifs("student.dat", ios::in | ios::binary);
	Student s;
	ifs.read(s.name, sizeof(s.name));
	ifs.read((char*)&s.score, sizeof(int));
	cout << s.name << " " << s.score << endl;

	fstream iofile("student.dat", ios::in | ios::out | ios::binary);
	if (!iofile)
	{
		cout << "error";
		return 0;
	}
	int yy=100;
	iofile.seekp(sizeof(s.name), ios::beg);
	iofile.write((const char*)&yy,sizeof(int));

	iofile.seekg(0, ios::beg);
	iofile.seekg(sizeof())






	system("pause");

	return 0;
}