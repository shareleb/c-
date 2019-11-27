#include<iostream>
#include<fstream>
using namespace std;
#include<iostream>
#include<algorithm>
#include<vector>
//文件的读写指针，
/*

对于输入文件，有一个读指针
对于输出文件，有一个写指针
对于输入输出文件，有一个读写指针
标识文件操作的当前位置，该指针在哪里，读写操作就应该在哪里

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

	//文件输出流为p
	ofstream fout("a1.out", ios::app);
long	long location = fout.tellp();      //获取当前指针的位置。
	cout << location << endl;
	location = 10;
	fout.seekp(location);      //将写指针移动到第10个字节出。
	fout.seekp(location, ios::beg);
	fout.seekp(location, ios::cur);
	fout.seekp(location, ios::end);
	//location 可以为负值。

//ofstream tellp
//	ofteam   seekp


//	文件输入流
	ifstream fin("a1.in", ios::ate);   //打开文件，定位文件指针到文件尾
//long	long location = fin.tellg();   //获取当前指针的位置

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
//按字符读取就用>>  <<  像cin cout 一样就可以


//二进制读取就要用read 和write函数

//istream & read(char * s, long n);
//输入流是读指针，  
//将文件读指针指向的地方的n个字节内容，读到内存地址s，
//然后将文件读指针向后移动到n个字节（以iOS：：in方式打开时
//文件读指针开始指向文件开头.


//istream & write(const char *s,long n);

void test04()
{
	ifstream ifs("in.txt", ios::in);

	char buf[1024];
	//ifs.getline(buf, 1024);
	//ifs >> buf;  //按行读   遇见空格会停止
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
	//文件中写入和读取一个整数
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