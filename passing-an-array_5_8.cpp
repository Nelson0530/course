#include <iostream>
using namespace std;

/*
void print_array(int[], int);             // 宣告一個整數類的陣列
int main()
{
	int num[] = { 1, 2, 3, 4, 5 };
	print_array(num, 5);
	return 0;
}
void print_array(int a[], int len)
{
	for (int i = 0; i < len; i++)
		cout << a[i] << " ";
	cout << "\n";
}
*/


// 範例2
/*
void shift_array(int[], int);
int main()
{
	int num[] = { 1, 2, 3, 4, 5 };
	shift_array(num, 5);
	for (int i = 0; i < 5; i++)
		cout << num[i] << " ";
	cout << "\n";
	return 0;
}
void shift_array(int a[], int len)
{
	int temp = a[0];                  // 宣告temp微陣列a的第一個數值
	for (int i = 0; i < len - 1; i++)
		a[i] = a[i + 1];               // 將陣列a的數值全部往前一位
	a[len - 1] = temp;                // 再把temp指定給改變後的陣列的最後一位
}
// 與5-7 call-by-value不一樣  宣告陣列後就會在記憶佔一個位置，在那個位置上你可以任意變換後再回傳結果，結果會被改變
*/


// 多維[陣列
/*
void print_array(int [][2], int);
int main()
{
	int num[][2] = { 1, 2, 3, 4, 5, 46 };
	print_array(num, 5);
	return 0;
}
void print_array(int a[][2], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = A0; j < 2; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
}
*/