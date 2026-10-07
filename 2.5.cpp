#include <iostream>

int max3(int x, int y, int z) {
  int max = x;
  if (y > max) {
    max = y;
  }
  if (z > max) {
    max = z;
  }
  return max;
}

int main() {
  int x, y, z;
  std::cout << "Введите числа: ";
  std::cin >> x >> y >> z;

  std::cout << "Максимум: " << max3(x, y, z) << std::endl;
}