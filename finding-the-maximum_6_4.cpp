#include <iostream>
using namespace std;

/*
double max(double array[], int len)
{
	if (len == 1)             // stopping condition �Y��array���׬�1 (�Y�}�C���u���@�Ӽƭ�)
		return array[0];           // �^�Ǧ��ƭ�(�̤j��)
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

// ²�Ƽg�k
/*
double max(double array[], int len)             // �w�q���
{
	if (len == 1)             // stopping condition �Y��array���׬�1 (�Y�}�C���u���@�Ӽƭ�)
		return array[0];           // �^�Ǧ��ƭ�(�̤j��)
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