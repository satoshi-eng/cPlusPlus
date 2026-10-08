#include <iostream>

void rightTriangle(int x) {
  for (int i = 1; i <= x; ++i ) {
    for (int j = 0; j < x - i; ++j ) {
      std::cout << " ";
    }
    for (int j = 0; j < i; ++j ) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

int main() {
  int x;
  std::cout << "Введите х: ";
  std::cin >> x;

  if (x < 0) {
    std::cout << "Значение х должно быть натуральным, иначе ошибка. " << std::endl;
  }

  rightTriangle(x);
}