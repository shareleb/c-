//��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬
//���ҳ�������֡���������һ������Ϊ9������
//{ 1,2,3,2,2,2,5,4,2 }����������2�������г�����5�Σ�
//�������鳤�ȵ�һ�룬
//������2����������������0��
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