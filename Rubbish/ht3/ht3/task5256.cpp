/* ��� ������, ���������� 70 ��������������� ����� �����, �� ����������� 1000. ������� �� �����
�� ������ ���������������� ��������, ����������� ����� � ������� ���������� ����� ���� 
�������� ��������� �������, ������� ���������� ��������. */

#include <iostream>

using namespace std;

#define N 6

int task5256()
{
	long a[N];
	long i, j, min;

	for (i = 0; i < N; i++)
		cin >> a[i];

	min = INT_MAX;
	for (i = 0; i < N; i++)
	{
		if ((((a[i] + a[i + 1]) % j) == 0) && (a[i] + a[i + 1] < min))
		{
			min = a[i] + a[i + 1];
		}
	}
	cout << min;
	system("pause");
	return 0;
}