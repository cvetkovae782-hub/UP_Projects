#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(0));
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    cout << "Исходный массив: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] <<  " ";
    }
    cout << endl << endl;
    double koef = 1.247;
    double step = 10 / koef;
    while (step >= 1)
    {
        int gap = round(step);
        for (int i = 0, j = gap; j < 10; i++, j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        cout << "Шаг " << gap << ": ";
        for (int k = 0; k < 10; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
        step = step / koef;
    }

    return 0;
}