/*������� �� ������������ ����� ��� �� ����� �� ������ ���������������� ��������, �����������
����� � ������� ������������ �������� ����� ���������� ��������� �������, �� ��������� �� 
����� �������� �������.���� � �������� ������� ��� ��������, �������� �������� �������� 
���������� ������ � ��� ���� �� ������ ����� �������� ������� ������� �����, �� �������� 
��������� ��� �������. */

#include <iostream>

using namespace std;

#define N 6

int task7426()

{

	int a[N];

	int i, j, max;

	for (i = 0; i < N; i++)
		j = 1;
	max = -1;
		cin >> a[i];
	for (i = 0; i < N; i++)
	{
		if ((a[i] >= 10) && (a[i] <= 99) && (a[i] > max) && (a[i] % (a[i] / 10) != 0))
		{
			max = a[i];
			j = 0;
		}
	}
	if (j == 1)
	{
		cout << "No";
	}
	else
	{
		cout << max;
	}
	system("pause");
	return 0;
}