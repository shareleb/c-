//数组中有一个数字出现的次数超过数组长度的一半，
//请找出这个数字。例如输入一个长度为9的数组
//{ 1,2,3,2,2,2,5,4,2 }。由于数字2在数组中出现了5次，
//超过数组长度的一半，
//因此输出2。如果不存在则输出0。
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		if (numbers.empty()) return 0;
		int sum = 1;
		int i = 0;
		int tmp = numbers[0];

		for (i = 1; i < numbers.size(); i++)
		{
			if (sum == 0)
			{
				tmp = numbers[i];
				sum = 1;
			}
			else if (numbers[i] == tmp)
			{
				++sum;
			}
			else
			{
				sum--;
			}
		}
		sum = 0;
		for (int i = 0; i < numbers.size(); i++)
		{
			if (numbers[i] == tmp)
			{
				sum++;
			}
		}

		return (sum > (numbers.size() / 2)) ? tmp : 0;

	}
};
int main()
{
	

	system("pause");
	return 0;

}