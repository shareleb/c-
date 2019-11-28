//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//class Board {
//public:
//	bool checkWon(vector<vector<int> > board) {
//		for (int i = 0; i <= 2; i++)
//		{
//			if (board[i][0] == 1 && board[i][1] == 1 && board[i][2] == 1)
//			{
//				return true;
//			}
//			
//		}
//		for (int i = 0; i <= 2; i++)
//		{
//			if (board[0][i] == 1 && board[1][i] == 1 &&board[2][i]==1)
//			{
//				return true;
//			}
//
//		}
//		if (board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1||board[2][0]==1&&board[1][1]==1&&board[0][2]==1)
//		{
//			return true;
//		}
//		return false;
//	}
//};
//
//
//
