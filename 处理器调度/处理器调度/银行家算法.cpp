//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
////���м��㷨ʱһ�ֱ���������˨��,'
//
//
//
//vector<int> save(vector<vector<int>>Need, vector<vector<int>>Allocation, vector<vector<int>>Max, vector<int>Work, vector<int>Available)
//{
//	bool isSave = true;    //1anquan -1 weiz 0 buanquan 
//	vector<int>index;
//	int m = Work.size();
//	int n = Need.size();
//	vector<bool>Finish;	  //�Ƿ�ɹ����䣻
//	Finish.reserve(m);
//	Finish.resize(m, false);
//	vector<int> Requesti;       //pi����������,
//
//	while (1)
//	{
//		int findNum = -1;
//		for (int i = 0; i < n; i++)
//		{
//			bool flag = true;
//			if (Finish[i] == false)
//			{
//				for (int j = 0; j < m; j++)
//				{
//					if (Need[i][j] > Work[j])
//					{
//						flag = false;
//						break;
//					}
//				}
//				if (flag == true)
//				{
//					findNum = i;
//					break;
//				}
//
//			}
//		}
//		if (findNum != -1)
//		{
//			for (int i = 0; i < m; i++)
//			{
//				Work[i] = Work[i] + Allocation[findNum][i];
//			}
//			index.push_back(findNum);
//			Finish[findNum] = true;
//		}
//		else
//		{
//			for (int i = 0; i < m; i++)
//			{
//				if (Finish[i] != true)
//				{
//					isSave = false;
//				}
//
//
//			}
//			if (isSave == true)
//			{
//				break;
//			}
//
//		}
//
//	}
//
//	return index;
//
//}
//
//
//
//int main()
//{
//	int n, m;// m����Դ, n������
//	cout << "�������������" << endl;
//	cin >> n;
//	cout << "��������̵�����:" << endl;
//	vector<string>v;
//	for (int i = 0; i < n; i++)
//	{
//		string s;
//		cin >> s;
//		v.push_back(s);
//	}
//	cout << "��������Դ��������:  ";
//	cin >> m;
//	vector<int>Available;
//	Available.resize(m);   //��������Դ��Ŀ.
//	cout << "�������������Դ����Ŀ: ";
//	for (int i = 0; i < m; i++)
//	{
//		int x;
//		cin >> x;
//		Available[i] = x;
//	}
//	vector<vector<int>>Max;   //����������. ��Ҫ����
//	Max.resize(n);
//	cout << "����������������MAX������:" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			int x;
//			cin >> x;
//			Max[i].push_back(x);
//		}
//
//	}
//	vector<vector<int>>Allocation; //��������Ѿ������
//	cout << "����������������" << endl;
//	Allocation.resize(n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			int x;
//			cin >> x;
//			Allocation[i].push_back(x);
//		}
//		
//	}
//	vector<vector<int>>Need;     //�������;
//	Need.resize(n);
//	cout << "�������������Need������:" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			int x;
//			cin >> x;
//			Need[i].push_back(x);
//		}
//
//	}
//
//	vector<int>Work(Available);	//��������  
//	vector<int>pvp;
//	pvp=save(Need, Allocation, Max, Work, Available);
//	if (pvp.size() == n)
//	{
//		cout << "��ȫ" << endl;
//		for (auto e : pvp)
//		{
//			cout << v[e] << ' ';
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << "����ȫ" << endl;
//	}
//	system("pause");
//	return 0;
//}
//
//
//
//
//
