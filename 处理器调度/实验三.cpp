#include<iostream>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>

struct Task
{
	string m_name;    //��������
	int m_size;       //�����С
	int st;       //����ʼ��ַ��
	
	Task()
	{

	}
	Task(string name, int size)
	{
		this->m_name = name;
		this->m_size = size;
	}
	bool operator ==(Task &b)
	{
		if (this->m_name == b.m_name && this->m_size == b.m_size && this->st == b.st)
		{
			return true;
		}
	}
};

struct Node
{
	int m_start;   //��ʼλ��
	int  m_size;   //����
	bool m_stat;      //״̬��
	Node(int start, int size, int stat)
	{
		m_start = start;
		m_size = size;
		m_stat = stat;
	}
	bool operator<(Node a)

	{
		if (this->m_size <= a.m_size)
		{
			return true;
		}
		return false;
	}

};
class freeTable
{
public:
	freeTable()
	{
		v.push_back(Node(0, 1024 * 4, false));
	}
	void printInfo()
	{
		cout << "������Ϊ��" << endl;
		if (!v.empty())
		{
			int j = 1;
			for (int i = 0; i < v.size(); i++,j++)
			{
				cout << "����" << j << "  ��ʼλ�ã�" << v[i].m_start << "  ��СΪ��" << v[i].m_size <<"K"<< "  ״̬Ϊ��" << endl;
			}
		}
	}

private:
	vector<Node>v;
	friend class Memery;

};


class Memery
{
public:
	Memery(freeTable &f)
	{
		long  start = 0;
		int end=4*1024;   //4G�ڴ棻 1����1k
		this->f = f;
	}

	void distribution(Task  &task)
	{
		//������ӵ�task�����б��
		if (!f.v.empty())
		{
			for (int i = 0; i < f.v.size(); i++)
			{
				if (f.v[i].m_size > task.m_size)
				{
				   // ��������㹻�Ͱ������뵽task����޸�f�����ݡ�
					task.st = f.v[i].m_start;    //��task�Ŀ�ʼ��ַ���棬
					f.v[i].m_start += task.m_size;
					f.v[i].m_size -= task.m_size;
					if (i + 1 < f.v.size())
					{
						if (f.v[i + 1].m_start == f.v[i].m_start+f.v[i].m_size)
						{
							f.v[i].m_size += f.v[i + 1].m_size;
							auto  it = f.v.begin() + (i + 1);
							f.v.erase(it);
						}
					}
					sort(f.v.begin(),f.v.end());
					v.push_back(task);
				
					return;
				}	

				else  if(v[i].m_size == task.m_size)
				{
					task.st = f.v[i].m_start;
					auto  it = f.v.begin() + i;
					f.v.erase(it);
					v.push_back(task);
					return;
				}
				else
				{

				}
			}
			cout << "�ڴ治�㣬�޷�����ռ�" << endl;

		}
	}
	void recycling(Task & task)
	{
		if (!v.empty())
		{
			for (int i = 0; i <= v.size(); i++)
			{
				if (v[i] == task)
				{
					if (!f.v.empty())
					{
						for (int j = 0; j < f.v.size(); j++)
						{
							if (task.st + task.m_size == f.v[j].m_start)
							{
								f.v[j].m_start = task.st;
								f.v[j].m_size += task.m_size;
								sort(f.v.begin(), f.v.end());
								v.erase(v.begin() + i);
								return;
							}
							else if (task.st == f.v[j].m_start + f.v[j].m_size)
							{
								f.v[j].m_size += task.m_size;
								sort(f.v.begin(), f.v.end());
								v.erase(v.begin() + i);
								return;
							}
							else
							{

							}
						}
					}
					f.v.push_back(Node(task.st, task.m_size, false));
					sort(f.v.begin(), f.v.end());
					v.erase(v.begin() + i);
					return;
				}
			}
		}
	}

	void printInfoMemery()
	{
		cout << "�ڴ�ռ����:" << endl;
		if (v.size() != 0)
		{
			for (auto i : v)
			{
				cout << i.m_name << " ��ʼλ��:" << i.st << "K" << "  ��СΪ��" << i.m_size << "K"<<endl;
			}
		}
		else
		{
			cout << "NULL" << endl;
		}
	}
	void printFreeTable()
	{
		f.printInfo();
	}
private:
	vector<Task>v;
	int start;
	int end;
	freeTable  f;

};


int main()
{
	freeTable f;
	Memery  m(f);
	Task t1("����һ", 300);
	m.distribution(t1);
	Task t2("�����", 100);
	m.distribution(t2);
	m.recycling(t1);
	Task t3("������", 150);
	m.distribution(t3);
	Task t4("������", 30);
	m.distribution(t4);
	Task t5("������", 40);
	m.distribution(t5);
	Task t6("������", 60);
	m.distribution(t6);
	m.recycling(t4);
	m.printInfoMemery();
	m.printFreeTable();
	system("pause");
	return 0;

}