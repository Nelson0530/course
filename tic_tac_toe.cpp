#include <iostream>
using namespace std;

// 第4-9講
// tic-tac-toe
/*int main()
{
	int a[3][3] = { {1, 0, 1}, {1, 1, 0}, {1, 0, 1} };

	for (int i = 0; i < 2; i++)
	{
		if (a[i][0] == a[i][1] && a[i][1] == a[i][2])
		{
			cout << a[i][0] << endl;
			break;
		}
		else if (a[0][i] == a[1][i] && a[1][i] == a[2][i])
		{
			cout << a[0][i] << endl;
			break;
		}
	}
}*/


// maxtrix additions     矩陣相加
/*int main()
{
	int a[2][3] = { {1, 2, 3}, {1, 2, 3} };
	int b[2][3] = { {4, 5, 6}, {7, 8, 9} };
	int c[2][3] = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}*/


// matrix multiplications  矩陣相乘
/*int main()
{
	int a[2][3] = { 1, 1, 1, 2, 2, 2 };
	int b[3][4] = { 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3 };
	int c[2][4] = { 0 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
*/