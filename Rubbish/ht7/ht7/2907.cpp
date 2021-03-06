/* Опишите на русском или одном из языков программирования алгоритм вычисления разности максимального среди элементов, имеющих четные значения, и максимального среди элементов, имеющих нечетные значения, в заданном целочисленном массиве из 30 положительных элементов (в предположении, что в массиве есть и четные, и нечётные элементы). */

#include <iostream>
#define n 6

using namespace std;
int task2907()
{
    int a[n];
    int i, max2, max1, diff;
    max2 = INT_MIN;
    max1 = INT_MIN;
    diff = 0;
    
    for (i = 0; i < n; i++)
        cin >> a[i];
    
    for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0 && a[i] > max2)
            {
                max2 = a[i];
            }
            if (a[i] % 2 != 0 && a[i] > max1)
            {
                max1 = a[i];
            }
        }
    diff = max2 - max1;
    cout << diff;
    return 0;
}
