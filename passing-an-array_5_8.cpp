#include <iostream>
using namespace std;

/*
void print_array(int[], int);             // �ŧi�@�Ӿ�������}�C
int main()
{
	int num[] = { 1, 2, 3, 4, 5 };
	print_array(num, 5);
	return 0;
}
void print_array(int a[], int len)
{
	for (int i = 0; i < len; i++)
		cout << a[i] << " ";
	cout << "\n";
}
*/


// �d��2
/*
void shift_array(int[], int);
int main()
{
	int num[] = { 1, 2, 3, 4, 5 };
	shift_array(num, 5);
	for (int i = 0; i < 5; i++)
		cout << num[i] << " ";
	cout << "\n";
	return 0;
}
void shift_array(int a[], int len)
{
	int temp = a[0];                  // �ŧitemp�L�}�Ca���Ĥ@�Ӽƭ�
	for (int i = 0; i < len - 1; i++)
		a[i] = a[i + 1];               // �N�}�Ca���ƭȥ������e�@��
	a[len - 1] = temp;                // �A��temp���w�����ܫ᪺�}�C���̫�@��
}
// �P5-7 call-by-value���@��  �ŧi�}�C��N�|�b�O�Ц��@�Ӧ�m�A�b���Ӧ�m�W�A�i�H���N�ܴ���A�^�ǵ��G�A���G�|�Q����
*/


// �h��[�}�C
/*
void print_array(int [][2], int);
int main()
{
	int num[][2] = { 1, 2, 3, 4, 5, 46 };
	print_array(num, 5);
	return 0;
}
void print_array(int a[][2], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = A0; j < 2; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
}
*/