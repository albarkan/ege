// ������� �� ������� ����� ��� �� ����� �� ������ ���������������� �������� �������� ����� ���� ������������� ��������� 
// ��������� �������������� ������� �������� 30 ���������.���� ������������� ��������� ��� �������� �� ����.

#include <iostream>

using namespace std;
const int N = 6;
int task2915()
{
	int a[N];
	int i, sum, k;
	for (i = 0; i < N; i++)
		cin >> a[i];
	sum = 0;
	bool existsNegativeNumber = 0;

	for (i = 0; i < N; i++)
	{
		if (a[i] < 0)
		{
			sum += a[i];
			existsNegativeNumber = true;
		}
	}

	if (!existsNegativeNumber)
	{
		cout << "Negative Numbers Do Not Exist";
	}
	else
	{
		cout << sum;
	}

	return 0;
}