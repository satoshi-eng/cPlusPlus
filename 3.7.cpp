#include <iostream>

void square(int x) {
  for (int row = 0; row < x; ++row) {
    for (int col = 0; col < x; ++col) {
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
  square(x);
}