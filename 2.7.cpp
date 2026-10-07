#include <iostream>

int sum2(int x, int y) {
  int sum = x + y;
  if (sum >= 10 && sum <= 19) {
    sum = 20;
  }
  return sum;
}

int main() {
  int x, y;
  std::cout<<"Введите числа: ";
  std::cin>>x>>y;

  std::cout << sum2(x, y) << std::endl;
}