#include <iostream>
#include <cmath>

int numLen(long x) {
  x = fabs(x);
  int count = 0;
  while (x > 0) {
    x = x / 10;
    count++;
  }
  return count;
}

int main() {
  long x;
  std::cout << "Введите число: ";
  std::cin >> x;
  std::cout << "Количество знаков: " << numLen(x) << std::endl;
}