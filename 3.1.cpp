#include <iostream>

std::string listNums(int x) {
  std::string result = "";
  for (int i = 0; i < x; ++i) {
    result += std::to_string(i);
    }
  return result;
}

int main() {
  int x;
  std::cout << "Введите х: ";
  std::cin >> x;

  if (x<0) {
    std::cout << "Число должно быть больше нуля " << std::endl;
  }
  std::cout << listNums(x) << std::endl;
}