#include <iostream>
using namespace std;
/*
const int MAX_LEN = 10000;             // ���]�w�@�Ӫ���

void rule_out_prime(int x, bool is_prime[], int n);
int main()
{
	int n;
	cin >> n;
	bool is_prime[MAX_LEN];               // �}�C
	for (int i = 0; i < n; i++)
		is_prime[i] = true;                // ���]�o�Ӱ}�C�Ҧ����O���(10000��)

	for (int i = 2; i <= n; i++)
	{
		if (is_prime[i] == true)
		{
			cout << i << " ";
			rule_out_prime(i, is_prime, n);
		}
	}
	return 0;
}
void rule_out_prime(int x, bool is_prime[], int n)             // �]�� x �w�g�O��ƤF�A�ҥH x * i ���Ƥ@�w���O��ơA�ҥH�ư�(false)
{
	for (int i = 1; x * i < n; i++)
		is_prime[x * i] = false;
}
*/