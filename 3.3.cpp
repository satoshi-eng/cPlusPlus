#include <iostream>

std::string chet(int x) {
  std::string result = "";
  for (int i =0; i <=x; i += 2) {
    result += std::to_string(i);
  }
  return result;
}

int main() {
  int x;
  std::cout << "Введите число: ";
  std::cin >> x;

  if (x < 0) {
    std::cout << "Число не может быть меньше нуля" << std::endl;
  }

  std::cout << chet(x) << std::endl;
}