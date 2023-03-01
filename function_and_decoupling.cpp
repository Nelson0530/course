#include <iostream>
using namespace std;

// 材5-3量
/*
int add(int num1, int num2)           // 把计"parameter"
{
	return num1 + num2;
}

int main()
{
	double c1 = 56;
	double c2 = 22.5;
	double c3 = add(c1, c2 - 2);           // 把计"arguments"
	cout << c3 << "\n";              // 块"76"add()﹚竡"int"┮笼秈add 56 + 20 = 76
}
*/




// Function arguments
/*
double add(double, double);
int main()
{
	const int c = 5;
	double d = 1.6;
	cout << add(10, 20) << "\n";
	cout << add(c, d) << "\n";
	cout << add(10 * c, d) << "\n";
	return 0;
}
double add(double num1, double num2)
{
	return num1 + num2;
}
*/


// function return value
/*
int max(int, int);
int main()
{
	int a1, a2 = 0;
	cin >> a1 >> a2;
	cout << max(a1, a2) << "\n";
}

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
*/


// coupling & decoupling
/*
int max(int a, int b);
int main()
{
	int n, m, p = 0;
	cin >> n >> m >> p;
	cout << max(max(n, m), p) << "\n";
	return 0;
}
int max(int a, int b)
{
	return (a > b) ? a : b;              // if "a > b" , do "a", else do "b"
}
*/
