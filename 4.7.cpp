#include <iostream>

int* reverseBack(int arr[], int n) {
    int* result = new int[n];

    for (int i = 0; i < n; ++i) {
        result[i] = arr[n - 1 - i];
    }
    return result;
}

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;

    int* result = reverseBack(arr, n);

    std::cout << "Результат: ";
    for (int i = 0; i < n; ++i) {
        std::cout << result[i];
    }

    delete [] result;
}