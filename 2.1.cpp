#include <iostream>
#include <cmath>

int abs(int x) {
  x = fabs(x);
  return x;
}

int main() {
  int x;
  std::cout << "Введите число: ";
  std::cin >> x;
  std::cout << "Модуль: " << abs(x) << std::endl;
}