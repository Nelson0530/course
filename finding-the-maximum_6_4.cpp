#include <iostream>
using namespace std;

/*
double max(double array[], int len)
{
	if (len == 1)             // stopping condition 璝array1 (皚いΤ计)
		return array[0];           // 肚计(程)
	else
	{
		double submax = max(array, len - 1);
		if (array[len - 1] > submax)
			return array[len - 1];
		else
			return submax;
	}
}
int main()
{
	double array[] = {5, 7, 3, 9, 2};
	cout << max(array, 5);
	return 0;
}
*/

// 虏て糶猭
/*
double max(double array[], int len)             // ﹚竡ㄧ计
{
	if (len == 1)             // stopping condition 璝array1 (皚いΤ计)
		return array[0];           // 肚计(程)
	double submax = max(array, len - 1);
	if (array[len - 1] > submax)
		return array[len - 1];
	return submax;
}
int main()
{
	double array[] = { 5, 7, 3, 9, 2 };
	cout << max(array, 5);
	return 0;
}
*/