#include<iostream>
#include<vector>
using namespace std;

class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) {
		m = m << j;
		n = m | n;
		return n;

	}
};