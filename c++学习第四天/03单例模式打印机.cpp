//#include<iostream>
//using namespace std;
//#include<string>
//
//class Printer
//{
//private:
//	Printer():m_count(0)
//	{
//		
//	}
//	Printer(const Printer& p) {};
//    
//public:
//	static Printer* getInstance()
//	{
//		return singlePrinter;
//	}
//	void printText(string text)
//	{
//		cout << text << endl;
//		m_count++;
//		cout << "��ӡ��ʹ���˴���Ϊ:" << m_count << endl;
//
//	}
//private:
//	static Printer * singlePrinter;
//	int m_count;
//
//};
//
//Printer * Printer::singlePrinter = new Printer;
//void test01()
//{
//	//�õ���ӡ��
//	Printer * printer = Printer::getInstance();
//	printer->printText("��ְ����");
//	printer->printText("��ְ����");
//	printer->printText("��н����");
//	printer->printText("����");
//
//}
//
//int main()
//{
//	test01();
//
//
//
//
//	system("pause");
//	return EXIT_SUCCESS;
//}