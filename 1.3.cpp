#include <iostream>

int charToNum(char x) {
  return x - '0';
}

int main() {
  char x;
  std::cout << "Введите цифру: " ;
  std::cin >> x;

  if (x < '0' || x > '9') {
    std::cout << "Ошибка" << std::endl;
    return 0;
  }

  std::cout << "Результат: " << charToNum(x) << std::endl;
  return 0;
}