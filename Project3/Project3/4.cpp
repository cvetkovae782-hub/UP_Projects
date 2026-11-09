#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int y = 20;
    int z = 30;
    if (x < y) {
        cout << "X меньше Y" << endl;
        if (y < z) {
            cout << "Y меньше Z" << endl;
        } else {
            cout << "Y больше или равно Z"<< endl;
        }
    } else {
        cout << "X больше или равен Y" << endl;
    }
    for (int i = 0; i < 5; i++) {
        cout « "Строка номер: " << i << endl;
    }
    int sum = x + y + z;
    cout << "Сумма:  " << sum << endl;
    
    return 0;
}

