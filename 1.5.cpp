#include<iostream>
#include <cmath>

bool is2Digits(int x) {
  x = fabs(x);
  return x >= 10 && x <= 99;
}

int main() {
  int x;
  std::cout << "Введите число: ";
  std::cin >> x;

  if (x < -1000 || x > 1000) {
    std::cout << "Число вне диапазона [-1000; 1000]" << std::endl;
  }

  if (is2Digits(x)) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }
}