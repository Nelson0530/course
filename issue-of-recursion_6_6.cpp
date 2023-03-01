#include <iostream>
using namespace std;

// 6-5 Fibonacci 費波納西數列概念(遞迴)
// 6-6
/*
int fib(int n)        // 定義費波納西數列函數(遞迴寫法)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

double fib_repetitive(int n)               // (迴圈寫法)
{
	if (n == 1 || n == 2)
		return 1;
	int fib1 = 1, fib2 = 1, fib3 = 0;
	for (int i = 2; i < n; i++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}
	return fib3;
}
int main()
{
	int n = 0;
	cin >> n;
	cout << fib_repetitive(n) << "\n";
	cout << fib(n) << "\n";
	return 0;
}
// 結果是遞迴寫法會比較慢，因為重複作工!! 故以Fibonacci為例，迴圈寫法比較有效率!
*/

// Hanoi Tower  河內塔
/*
void hanoi(char from, char via, char to, int disc)
{
	if (disc == 1)
		cout << "From " << from << " To " << to << "\n";
	else
	{
		hanoi(from, to, via, disc - 1);
		cout << "From " << from << " To " << to << "\n";
		hanoi(via, from, to, disc - 1);
	}
}
int main()
{
	int disc = 0;
	cin >> disc;
	char a = 'A', b = 'B', c = 'C';

	hanoi(a, b, c, disc);
	return 0;
}
*/