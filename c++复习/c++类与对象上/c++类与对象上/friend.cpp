#include<iostream>
using namespace std;
#include<vector>
class A
{
private:
	static int k;
	int h;
public:
	class B
	{
	public:
		void foo( const A& a)
		{
			
			cout << k << endl;//OK
			cout << a.h << endl;//OK
		
		}
	};
};
int A::k = 1;
int main()
{
	/*A::B b;
	b.foo(A());*/
	/*char a = 'A';
	cout << tolower(a) << endl;;
	*/
	int i = 10;
	int j = 10;
	i = j = ++j;
	
	cout << i<<"   "<<j<< endl;

	system("pause");
	return 0;
}