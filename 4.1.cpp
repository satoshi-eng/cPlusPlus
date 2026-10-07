#include <iostream>

int findFirst(int arr[], int n, int x) {
  for (int i = 0; i < n; ++i) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[7] = {1, 2, 3, 4, 5 ,6, 7};
  int n = 7;

  int x;
  std::cout << "Введите х: ";
  std::cin >> x;
  std::cout << "Индекс: " << findFirst(arr, n, x) << std::endl;
}