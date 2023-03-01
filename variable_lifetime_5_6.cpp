#include <iostream>
using namespace std;

//第5-6講
/*
int main()
{
	int i = 50;           // it will be hidden
	for (int i = 0; i < 20; i++)
	{
		cout << i << " ";       // print 0 1 2 3 ...... 20
	}
	cout << i << "\n";        // print 50
	return 0;
}
*/
/*
int i = 5;             // global 變數

int main()
{
	for (; i < 20; i++)
		cout << i << "\n";
	cout << "\n";
	int i = 2;
	cout << i << "\n";
	cout << ::i << "\n";         // 呼叫 global 變數
	return 0;
}
*/


// static variable
/*
int test();
int main()
{
	for (int a = 0; a < 10; a++)
	{
		cout << test() << " ";
	}
	return 0;
}
int test()
{
	static int a = 1;      //再被呼叫第一次後，就不會再被執行，從下一行開始執行
	a++;
	return a;
}
*/


