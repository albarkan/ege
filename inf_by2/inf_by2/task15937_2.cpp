/* Дан набор из N целых положительных чисел. Из них нужно выбрать и вывести два числа так, чтобы их сумма была нечётна, а произведение делилось на 3 и при этом было максимально возможным. Выбранные числа можно выводить в любом порядке. Если есть несколько подходящих пар, можно выбрать любую из них. Если подходящих пар нет, нужно вывести 0. */

#include <iostream>

using namespace std;

int task15937_2() {
    int N = 0, a[N], b = 0, max = -1, m = 0, n = 0, i;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (a[i] + a[j] % 2 != 0 && a[i] * a[j] % 3 == 0 && a[i] * a[j] > max) {
                b = 1;
                a[i] = m;
                a[j] = n;
            }
        }
    }
    if (b == 0) {
        cout << "0";
    }
    else
        cout << m << " " << n;
    return 0;
}
