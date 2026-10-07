#include <iostream>
#include <cmath>

int maxAbs(int arr[], int n) {
  int i = fabs(i);
  int max = 0;
  for (i = 0; i < n; ++i) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int arr[7] = {-1, 2, -3, 44, 7, -10, 11};
  int n = 7;
  std::cout << "Максимальное число массива: " << maxAbs(arr, 7) << std::endl;
}