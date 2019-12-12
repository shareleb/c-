#include<iostream>
#include<vector>
#include<memory>
using namespace std;

//
class test
{
public:
	int m_a;
};
int main()
{
	unique_ptr<int>ap(new int[5]);    //auto_ptr采用托管方式，
	unique_ptr<test>apt(new test);
	*ap = 5;
	apt->m_a = 6;


	cout << *ap << endl;
	cout << apt->m_a << endl;

	auto_ptr<int>ap2(ap); //拷贝构造
	cout << *ap2 << endl;

	system("pause");
	return 0;
}