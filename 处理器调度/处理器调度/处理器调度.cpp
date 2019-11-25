//#include<iostream>
//#include<vector>
//#include<string>
//#include<queue>
//using namespace std;
//
//
//
//class Process
//{
//private:
//	string   Pname;    //进程名;
//	Process*  Ptr;     //指针; 
//	int		 Ptime;       //运行时间.
//	int		 Priority;   //优先级
//	char	 Pstate;        //状态;
//
//public:
//	Process(string pname, int  ptime, int  priority)
//	{
//		Pname = pname;
//		Ptr = NULL;
//		Ptime = ptime;
//		Priority = priority;
//		Pstate = 'R';
//	}
//	void setPtr(Process*ptr)
//	{
//		Ptr = ptr;
//	}
//	void  run()
//	{
//		
//		cout << this->Pname << "正在运行!!!!"<<endl;
//	
//		this->Priority--;
//		this->Ptime--;
//
//	}
//	bool operator<(Process &p)
//	{
//		if (this->Priority < p.Priority)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	
//	void print()
//	{
//		cout << this->Pname << " ";
//	}
//	char getPstate()
//	{
//		return this->Pstate;
//	}
//	void setPstate(char e)
//	{
//		this->Pstate = e;
//	}
//	int getPtime()
//	{
//		return this->Ptime;
//	}
//};
//
//void Psort(vector<Process>&v)
//{
//	sort(v.begin(), v.end());
//	for (int i = v.size() - 1; i > 0; i--)
//	{
//		v[i].setPtr(&v[i-1]);
//	}
//	v[0].setPtr(NULL);
//	
//	reverse(v.begin(), v.end());
//
//}
//
//
//int main()
//{
//	Process K1("P1",  2, 1);
//	Process K2("P2",  3, 5);
//	Process K3("P3",  1, 3);
//	Process K4("P4",  2, 4);
//	Process K5("P5",  4, 2);
//	vector<Process> v;
//	v.push_back(K1);
//	v.push_back(K2);
//	v.push_back(K3);
//	v.push_back(K4);
//	v.push_back(K5);
//	
//	Psort(v);
//	/*for (int i = 0; i < v.size(); i++)
//	{
//		v[i].print();
//	}
//	*/
//	
//	
//
//	while (!v.empty())
//	{
//		if (v[0].getPstate() == 'E'|| v[0].getPtime()==0)
//		{
//			v.erase(v.begin());
//			continue;
//		}
//		v[0].run();
//		if (v[0].getPtime()!=0)
//		{
//			Psort(v);
//		}
//		
//		if (v[0].getPtime() == 0)
//		{
//			v[0].setPstate('E');
//			v.erase(v.begin());
//		}
//
//		if (v.empty())
//		{
//			cout << "运行后队列为:空" << endl;
//		}
//		else
//		{
//			cout << "运行后队列为:";
//			for (int i = 0; i < v.size(); i++)
//			{
//
//				v[i].print();
//			}
//			cout << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}