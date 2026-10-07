#include <iostream>

bool islnRange(int a, int b, int num) {
  int min, max;
  if (a < b) {
    min = a;
    max = b;
  } else {
    min = b;
    max = a;
  }
  return num >= min && num <= max;
}

int main() {
  int a, b, num;
  std::cout << "Введите a, b, num: ";
  std::cin >> a >> b >> num;

  if (a < -1000 || a > 1000 || b < -1000 || b > 1000 || num < -1000 || num > 1000) {
    std::cout << "Числа вне диапазона [-1000; 1000]" << std::endl;
  }

  if (islnRange(a, b, num)) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;1
  }
}