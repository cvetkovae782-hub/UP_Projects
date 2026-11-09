#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    cout << "Исходный массив: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    // Коэффициент для вычисления шага
    double koef = 1.247;

    // Текущий шаг сравнения
    double step = 10 / koef;

    // Пока шаг больше или равен единице — продолжаем сортировку
    while (step >= 1)
    {
        // Округляем шаг до целого числа
        int gap = round(step);

        // Проходим по массиву с этим шагом
        for (int i = 0, j = gap; j < 10; i++, j++)
        {
            // Если элемент слева больше элемента справа — меняем их местами
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Выводим текущее состояние массива после полного прохода
        cout << "Шаг " << gap << ": ";
        for (int k = 0; k < 10; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;

        // Уменьшаем шаг для следующего прохода
        step = step / koef;
    }

    return 0;
}