#include <iostream>
#include <iomanip>    // for right、setw()、setprecision()
#include <cmath>     // for sqrt()
using namespace std;

/*int main()
{
	for (int i = 0; i <= 100; i++)
	{
		float f = sqrt(i);
		cout << f; 
		cout << right << setw(10) << fixed << f * f;
		cout << "\n";

	}
}*/


/*int main()
{
	int bad = 0;
	for (int i = 0; i < 100; i++)
	{
		float f = sqrt(i);
		cout << f << " " 
			<< setprecision(10)      // 印出更精確的值(字元長度)
			<< f * f << " ";

		if (f * f != i)
		{
			cout << "!!!";
			bad++;
		}
		cout << "\n";
	}
	cout << "bad precision: " << bad;
}*/
// 非常有趣!!