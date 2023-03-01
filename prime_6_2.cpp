#include <iostream>
using namespace std;

// prime number 質數 (no function)
/*
int main()
{
	int n = 10;
	for (int i = 2; i <= n; i++)
	{
		bool is_prime = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				is_prime = false;
			break;
		}
		if (is_prime == true)
			cout << i << " ";
	}
}
*/


// prime number 質數 (function)
/*
bool is_prime(int x);               // 給我一個整數，告訴我是不是prime? 並回傳true or false (bool值)
int main()
{
	int n;
	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		if (is_prime(i) == true)
			cout << i << " ";
	}
	return 0;
}
bool is_prime(int x)
{
	// for (int i = 2; i * i < x; i++)   不是寫 i < sqrt(x)，因為sqrt(x)不一定等於整數 ，這個方法會跑更快
	for (int i = 2; i < x; i++)
	{ 
		if (x % i == 0)
			return false;
	}
	return true;
}
*/