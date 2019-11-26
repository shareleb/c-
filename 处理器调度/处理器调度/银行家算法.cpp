//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
////银行家算法时一种避免死锁的栓发,'
//
//
//
//vector<int> save(vector<vector<int>>Need, vector<vector<int>>Allocation, vector<vector<int>>Max, vector<int>Work, vector<int>Available)
//{
//	bool isSave = true;    //1anquan -1 weiz 0 buanquan 
//	vector<int>index;
//	int m = Work.size();
//	int n = Need.size();
//	vector<bool>Finish;	  //是否成功分配；
//	Finish.reserve(m);
//	Finish.resize(m, false);
//	vector<int> Requesti;       //pi的请求向量,
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
//	int n, m;// m类资源, n个进程
//	cout << "请输入进程数量" << endl;
//	cin >> n;
//	cout << "请输入进程的名称:" << endl;
//	vector<string>v;
//	for (int i = 0; i < n; i++)
//	{
//		string s;
//		cin >> s;
//		v.push_back(s);
//	}
//	cout << "请输入资源总类数量:  ";
//	cin >> m;
//	vector<int>Available;
//	Available.resize(m);   //可利用资源数目.
//	cout << "请输输入各类资源的数目: ";
//	for (int i = 0; i < m; i++)
//	{
//		int x;
//		cin >> x;
//		Available[i] = x;
//	}
//	vector<vector<int>>Max;   //最大需求矩阵. 需要多少
//	Max.resize(n);
//	cout << "请输入最大需求矩阵MAX的数据:" << endl;
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
//	vector<vector<int>>Allocation; //分配矩阵已经分配的
//	cout << "请输入分配矩阵数据" << endl;
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
//	vector<vector<int>>Need;     //需求矩阵;
//	Need.resize(n);
//	cout << "请输入需求矩阵Need的数据:" << endl;
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
//	vector<int>Work(Available);	//工作向量  
//	vector<int>pvp;
//	pvp=save(Need, Allocation, Max, Work, Available);
//	if (pvp.size() == n)
//	{
//		cout << "安全" << endl;
//		for (auto e : pvp)
//		{
//			cout << v[e] << ' ';
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << "不安全" << endl;
//	}
//	system("pause");
//	return 0;
//}
//
//
//
//
//
