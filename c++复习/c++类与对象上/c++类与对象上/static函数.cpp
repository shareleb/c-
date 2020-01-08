//#include<iostream>
//using namespace std;
//
//class A
//{
//	A() { ++_scount; }
//	A(const A& t) { ++_scount; }
//	static int GetAcount() { return _scount; }
//	
//private:
//	static int _scount;
//};
//int A::_scount = 0;
//
//class  Date
//{
//
//public:
//	Date(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//
//	}
//
//	friend ostream&  operator<<(ostream &_cout, const Date &d);
//	friend istream&  operator>>(istream & _in,  Date&d);
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};
//
//ostream& operator<<(ostream & _cout, const Date&d)
//{
//	_cout << d._day << "-" << d._month << "-" << d._day;
//	return _cout;
//}
//
//istream& operator>>(istream & _in,  Date&d)
//{
//	
//
//	_in >> d._year;
//		_in >> d._month;
//		_in >> d._day;
//}
//int main()
//{
//	Date d;
//	cin >> d;
//	cout << d << endl;
//	system("pause");
//	return 0;
//}