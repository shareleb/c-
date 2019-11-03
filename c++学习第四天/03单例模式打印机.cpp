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
//		cout << "打印机使用了次数为:" << m_count << endl;
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
//	//拿到打印机
//	Printer * printer = Printer::getInstance();
//	printer->printText("离职报告");
//	printer->printText("入职报告");
//	printer->printText("加薪申请");
//	printer->printText("退休");
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