#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    clock_t start_clock = clock();
    long long sum = 0;
    for (int i = 0; i < 100000000; i++) {
        sum += i;
    }

    clock_t end_clock = clock();
    double seconds_clock = (double)(end_clock - start_clock) / CLOCKS_PER_SEC;

    cout << "--- Способ 1: clock() ---" << endl;
    cout << "Сумма: " << sum << endl;
    cout << "Время работы: " << seconds_clock << " секунд" << endl;
    time_t start_time, end_time;

    time(&start_time);
    sum = 0;
    for (int i = 0; i < 100000000; i++) {
        sum += i;
    }

    time(&end_time);
    double seconds_time = difftime(end_time, start_time);

    cout << "\n--- Способ 2: time() ---" << endl;
    cout << "Сумма: " << sum << endl;
    cout << "Время работы: " << seconds_time << " секунд" << endl;

    return 0;
}