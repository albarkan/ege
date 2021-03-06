/* Дан массив, содержащий 70 целых чисел. Опишите на одном из языков программирования алгоритм, позволяющий найти и вывести наименьшее положительное нечетное число, 
содержащееся в массиве. Гарантируется, что в массиве есть хотя бы одно положительное нечетное число. Исходные данные объявлены так, как показано ниже. Запрещается использовать 
переменные, не описанные ниже, но разрешается не использовать часть из них. */

#include <iostream>

using namespace std;

#define N 6

int task4735()
{
    int a[N];
    int i, m;
    for (i = 0 ; i < N; i++)
    cin >> a[i];

	 m = INT_MAX;
    
    for (i = 0; i < N; i++)
    {
        if (a[i] > 0 && a[i] % 2 != 0 && a[i] < m)
        {
            m = a[i];
        }
    }
    cout << m;
    
    return 0;
}
