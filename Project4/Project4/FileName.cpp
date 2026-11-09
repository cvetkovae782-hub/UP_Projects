#include <iostream>

int main() {
    int sum = 0;

  
    for (int i = 1; i <= 5; i++) {
        sum = sum + i;
        std::cout << "i = " << i << ", sum = "<< sum << std::endl;
    }

    std::cout << "Итоговая сумма: " << sum << std::endl;
    return 0;
}
