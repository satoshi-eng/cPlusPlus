#include <iostream>

bool isEqual(int a, int b, int c) {
  return a == b && b == c;
}

int main() {
  int a, b, c;
  std::cout << "Введите три числа: ";
  std::cin >> a >> b >> c;

  if (a <= -1000 || a >= 1000 || b <= -1000 || b >= 1000 || c <= -1000 || c >= 1000) {
    std::cout << "Числа вне диапазона [-1000; 1000]" << std::endl;
  }

  if (isEqual(a, b, c)) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }
}