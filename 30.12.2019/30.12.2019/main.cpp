#include <iostream>
using namespace std;

#define n 4 // �������, ������

int main()
{
	int i, sumCol, sumDia, j;
	int arr[n][n];
	sumCol = 0;
	sumDia = 0;
	for (i = 0; i < n; i++)                  
	{
		for (j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}

	// ����� ��������� ������� �������

	for (i = 0; i < n; ++i)
	{
		sumCol += arr[i][1];
	}

	// ����� ��������� �� ���� ����������

	for (i = 0; i < n; i++)
	{
		sumDia += arr[i][i];
	}

	for (i = 0; i < n; i++)
	{
		sumDia += arr[i][n - i - 1];
		if ((n % 2) != 0)
		{
			sumDia -= arr[n / 2][n / 2];
		}
	}

	// ����� ��������� ������ ������ � ������� �������
}
