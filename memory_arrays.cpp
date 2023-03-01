#include <iostream>
using namespace std;

// 第4-8講
/*int main()
{
	int score[5];
	cout << score << "\t" << sizeof(score) << "\n";           // print出記憶體位址
	cout << score + 2 << "\n" << "\n";


	int array[] = { 1, 2, 3 };
	int length = sizeof(array) / sizeof(array[0]);
	//cout << "sizeof(array) : " << sizeof(array) << "\n";
	//cout << "sizeof(array)[0] : " << sizeof(array[0]) << "\n";
	//cout << length << "\n";
	for (int i = 0; i < length; i++)
		cout << array[i] << "\n";
}*/


// finding the maximum
/*int main()
{
	const int VALUE_LEN = 10;             // good programming style
	
	double value[VALUE_LEN] = {0};
	for (int i = 0; i < VALUE_LEN; i++)
		cin >> value[i];

	double max = value[0];                // 宣告第一個值為最大
	for (int i = 1; i < VALUE_LEN; i++)           // 再用迴圈迭代做比較
	{
		if (value[i] > max)
			max = value[i];
	}
	cout << max << "\n";
}*/