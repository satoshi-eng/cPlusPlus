#include <iostream>

bool is35(int x) {
  if (x % 5 == 0 && x % 3 == 0) {
    return false;
  }
  return x % 5 == 0 || x % 3 == 0;
}

int main() {
  int x;
  std::cout << "Введите число: ";
  std::cin >> x;

  if (is35(x)) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }
}