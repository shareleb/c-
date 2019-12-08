#include<iostream>
using namespace  std;

template<class t>
class smart_ptr
{
	t * m_ptr;
	int * m_pcount;
public:
	smart_ptr(const smart_ptr& o)
	{
		*this = o;
		*m_pcount++;
	}
	smart_ptr&operator=(const smart_ptr &o)
	{
		*this = o;
		*m_pcount++;
		return *this;
	}
	smart_ptr(t * ptr = null) :m_ptr(ptr),m_pcount(new int(1))
	{

	}

	~smart_ptr()
	{
		if (m_pcount > 1)
		{
			*m_pcount--;
		}
		else if (m_ptr)
		{
			delete[]m_ptr;
			delete m_pcount;
			m_ptr = nullptr;
		}
	}

	t& operator*()
	{
		return *m_ptr;
	}
	t* operator ->()
	{
		return m_ptr;
	}
	t &operator[](int i)
	{
		return m_ptr[i];
	}
};

class test
{
public:
	int m_a;
};



int main()
{
	smart_ptr<test>sp(new test);

	sp->m_a = 5;
	cout << sp->m_a << endl;
	smart_ptr<test>sp2 = sp;
	system("pause");
	return 0;
}