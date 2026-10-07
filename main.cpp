#include <iostream>
#include <cmath>

double fraction(double x) {
  x = fabs(x);
  int c = (int)x;
  return x - c;
}

int main() {
  double x;
  std::cout << "Введите число: ";
  std::cin >> x;
  std::cout << "Дробная часть: " << fraction(x) << std::endl;
}