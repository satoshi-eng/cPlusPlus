#include <iostream>
#include <cmath>

int maxAbs(int arr[], int n) {
  int max = arr[0];
  for (int i = 0; i < n; ++i) {
    if (abs(arr[i]) > abs(max)) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int arr[7] = {-1, 2, -3, 44, 7, -10, 11};
  int n = 7;
  std::cout << "Максимальное число массива: " << maxAbs(arr, n) << std::endl;
}
