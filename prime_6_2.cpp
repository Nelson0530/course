#include <iostream>
using namespace std;

// prime number ��� (no function)
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


// prime number ��� (function)
/*
bool is_prime(int x);               // ���ڤ@�Ӿ�ơA�i�D�ڬO���Oprime? �æ^��true or false (bool��)
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
	// for (int i = 2; i * i < x; i++)   ���O�g i < sqrt(x)�A�]��sqrt(x)���@�w������ �A�o�Ӥ�k�|�]���
	for (int i = 2; i < x; i++)
	{ 
		if (x % i == 0)
			return false;
	}
	return true;
}
*/