#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    setlocale(0, "");
    int a = 10;
    int b = 0;
    int result = 0;

    cout << "Начало программы" << endl;

    try {
        
        if (b == 0) {
            throw runtime_error("Деление на ноль невозможно!"); 
        }
        result = a / b;
        cout << "Результат: " << result << endl;
    }
    catch (const runtime_error& e) {
        cout << "Поймано исключение: "<< e.what() << endl;
    }

    cout << "Конец программы" << endl;
    return 0;
}