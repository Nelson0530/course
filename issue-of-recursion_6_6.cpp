#include <iostream>
using namespace std;

// 6-5 Fibonacci �O�i�Ǧ�ƦC����(���j)
// 6-6
/*
int fib(int n)        // �w�q�O�i�Ǧ�ƦC���(���j�g�k)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

double fib_repetitive(int n)               // (�j��g�k)
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
// ���G�O���j�g�k�|����C�A�]�����Ƨ@�u!! �G�HFibonacci���ҡA�j��g�k������Ĳv!
*/

// Hanoi Tower  �e����
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