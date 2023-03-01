// 此檔為vector的內積
#include <iostream>
using namespace std;

/*int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int b[4] = { 4, 6, 7, 9 };

	int ip = 0;
	for (int i = 0; i < 4; i++)
	{
		cout << a[i] << "*" << b[i] << "+" << ip << "=" << a[i] * b[i] + ip << "\n";
		ip += a[i] * b[i];
	}
	cout << ip << "\n";
}*/

// 第4-7講
/*int main()
{
	int array[100] = { 0 };
	for (int i = 0; i < 500; i++)          // 正常應該要"runtimeError"，因100之後的變數沒有宣告，電腦就會自動取有其餘的記憶體空間，若有正在使用中的(例:word文件、網站)，就會有嚴重錯誤
	{
		cout << array[i] << " ";
		if (i % 10 == 9)
			cout << "\n";
	}
}*/

