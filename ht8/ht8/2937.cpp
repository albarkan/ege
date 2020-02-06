/* Дан целочисленный массив из 23-х элементов. Элементы массива могут принимать значения от 1500 до 2000 — количество знаков в статье. На сайт принимаются статьи размером не более 1800 знаков. Гарантируется, что такие значения в базе данных есть.
Опишите на русском языке или на одном из языков программирования алгоритм, который находит и выводит на экран размер самой большой статьи, которую можно разместить на сайте.
Исходные данные объявлены так, как показано ниже. Запрещается использовать не объявленные переменные, но разрешается не использовать часть из них. */

#include <iostream>

using namespace std;

#define N 23

int task2937(void)
{
    int arr[N];
    int i, max;
    max = 1500;
    
    for (i = 0; i < N; i++)
    {
    cin >> arr[i];
    }
    for (i = 0; i < N; i++)
    {
        if (arr[i] > max && arr[i] >= 1500 && arr[i] < 2000)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}
