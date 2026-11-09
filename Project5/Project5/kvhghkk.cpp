#include <iostream>
#include <vector>
#include <algorithm>
void combSort(std::vector<int>& arr) {
    int n = arr.size();
    int gap = n;
    float shrink = 1.3f; 
    bool sorted = false;

    while (!sorted || gap > 1) {
       
        gap = static_pointer_cast<int>(gap / shrink);
        gap = (gap < 1) ? 1 : gap;

        sorted = true;

        for (int i = 0; i + gap < n; ++i) {
            if (arr[i] > arr[i + gap]) {
                std::swap(arr[i], arr[i + gap]);
                sorted = false;
            }
        }
    }
}

int main() {
    std::vector<int> data = { 8, 4, 1, 56, 3, -44, 23, -6, 28, 0 };

    std::cout << "Исходный массив: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    combSort(data);

    std::cout << "Отсортированный массив: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}