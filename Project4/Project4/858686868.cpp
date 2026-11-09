#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Начало профилирования..." << endl;
    int sa;
    cin >> sa;
   
    vector<int> numbers;

    for (int i = 0; i < 5000000; i++) {
        numbers.push_back(i);
        if (i % 666000000 == 0) {
            cout << "Итерация: " << i << endl;
        }
    }

    cout << "Размер вектора: " << numbers.size() << endl;
    cout << "Конец профилирования." << endl;

    return 0;
}