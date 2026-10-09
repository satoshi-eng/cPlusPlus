#include <iostream>
#include <cmath>

double fraction(double x) {
  x = fabs(x);
  int c = int(x);
  return x - c;
}

int charToNum(char x) {
  return x - '0';
}

bool is2Digits(int x) {
  x = fabs(x);
  return x >= 10 && x <= 99;
}

bool islnRange(int a, int b, int num) {
  int min, max;
  if (a < b) {
    min = a;
    max = b;
  } else {
    min = b;
    max = a;
  }
  return num >= min && num <= max;
}

bool isEqual(int a, int b, int c) {
  return a == b && b == c;
}

int abs(int x) {
  x = fabs(x);
  return x;
}

bool is35(int x) {
  if (x % 5 == 0 && x % 3 == 0) {
    return false;
  }
  return x % 5 == 0 || x % 3 == 0;
}

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

int sum2(int x, int y) {
  int sum = x + y;
  if (sum >= 10 && sum <= 19) {
    sum = 20;
  }
  return sum;
}

std::string day(int x) {
  switch (x) {
    case 1:std::cout<<"Понедельник" << std::endl; break;
    case 2:std::cout<<"Вторник" << std::endl; break;
    case 3:std::cout<<"Среда" << std::endl; break;
    case 4:std::cout<<"Четверг" << std::endl; break;
    case 5:std::cout<<"Пятница" << std::endl; break;
    case 6:std::cout<<"Суббота" << std::endl; break;
    case 7:std::cout<<"Воскресенье" << std::endl; break;
    default:std::cout<<"Это не день недели" << std::endl; break;
  }
}


std::string listNums(int x) {
  std::string result = "";
  for (int i = 0; i < x; ++i) {
    result += std::to_string(i);
  }
  return result;
}

std::string chet(int x) {
  std::string result = "";
  for (int i =0; i <=x; i += 2) {
    result += std::to_string(i);
  }
  return result;
}

int numLen(long x) {
  x = fabs(x);
  int count = 0;
  while (x > 0) {
    x = x / 10;
    count++;
  }
  return count;
}

void square(int x) {
  for (int row = 0; row < x; ++row) {
    for (int col = 0; col < x; ++col) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

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

int findFirst(int arr[], int n, int x) {
  for (int i = 0; i < n; ++i) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}

int maxAbs(int arr[], int n) {
  int max = arr[0];
  for (int i = 0; i < n; ++i) {
    if (abs(arr[i]) > abs(max)) {
      max = arr[i];
    }
  }
  return max;
}

int* reverseBack(int arr[], int n) {
  int* result = new int[n];

  for (int i = 0; i < n; ++i) {
    result[i] = arr[n - 1 - i];
  }
  return result;
}

int main() {
  // 1.1
  double x;
  std::cout << "Введите число: ";
  std::cin >> x;
  std::cout << "Дробная часть: " << fraction(x) << std::endl;

  // 1.3
  char s;
  std::cout << "Введите цифру: " ;
  std::cin >> s;

  if (s < '0' || s > '9') {
    std::cout << "Ошибка" << std::endl;
  }

  std::cout << "Результат: " << charToNum(s) << std::endl;

  // 1.5
  int z;
  std::cout << "Введите число: ";
  std::cin >> z;

  if (z < -1000 || z > 1000) {
    std::cout << "Число вне диапазона [-1000; 1000]" << std::endl;
  }

  if (is2Digits(z)) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }

  // 1.7
  int a, b, num;
  std::cout << "Введите a, b, num: ";
  std::cin >> a >> b >> num;

  if (a < -1000 || a > 1000 || b < -1000 || b > 1000 || num < -1000 || num > 1000) {
    std::cout << "Числа вне диапазона [-1000; 1000]" << std::endl;
  }

  if (islnRange(a, b, num)) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }

  // 1.9
  int a1, b1, c1;
  std::cout << "Введите три числа: ";
  std::cin >> a1 >> b1 >> c1;

  if (a1 <= -1000 || a1 >= 1000 || b1 <= -1000 || b1 >= 1000 || c1 <= -1000 || c1 >= 1000) {
    std::cout << "Числа вне диапазона [-1000; 1000]" << std::endl;
  }

  if (isEqual(a1, b1, c1)) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }

  // 2.1
  int c;
  std::cout << "Введите число: ";
  std::cin >> x;
  std::cout << "Модуль: " << abs(x) << std::endl;

  // 2.3
  int v;
  std::cout << "Введите число: ";
  std::cin >> v;

  if (is35(v)) {
    std::cout << "True" << std::endl;
  } else {
    std::cout << "False" << std::endl;
  }

  // 2.5
  int o, y, n;
  std::cout << "Введите числа: ";
  std::cin >> o >> y >> n;

  std::cout << "Максимум: " << max3(o, y, n) << std::endl;

  // 2.7
  int q, w;
  std::cout<<"Введите числа: ";
  std::cin>>q>>w;

  std::cout << sum2(q, w) << std::endl;

  // 2.9
  int e;
  std::cout << "Введите номер дня недели: ";
  std::cin >> e;
  std::cout << day(e) << std::endl;

  // 3.1
  int r;
  std::cout << "Введите х: ";
  std::cin >> r;

  if (r<0) {
    std::cout << "Число должно быть больше нуля " << std::endl;
  }
  std::cout << listNums(r) << std::endl;

  // 3.3
  int t;
  std::cout << "Введите число: ";
  std::cin >> t;

  if (t < 0) {
    std::cout << "Число не может быть меньше нуля" << std::endl;
  }

  std::cout << chet(t) << std::endl;

  // 3.5
  long u;
  std::cout << "Введите число: ";
  std::cin >> u;
  std::cout << "Количество знаков: " << numLen(u) << std::endl;

  // 3.7
  int d;
  std::cout << "Введите d: ";
  std::cin >> d;

  if (d < 0) {
    std::cout << "Значение d должно быть натуральным, иначе ошибка. " << std::endl;
  }
  square(d);

  // 3.9
  int f;
  std::cout << "Введите f: ";
  std::cin >> f;

  if (f < 0) {
    std::cout << "Значение f должно быть натуральным, иначе ошибка. " << std::endl;
  }

  rightTriangle(f);

  // 4.1
  int arr[7] = {1, 2, 3, 4, 5 ,6, 7};
  int n1 = 7;

  int g;
  std::cout << "Введите g: ";
  std::cin >> g;
  std::cout << "Индекс: " << findFirst(arr, n1, g) << std::endl;

  // 4.3
  int arr2[7] = {-1, 2, -3, 44, 7, -10, 11};
  int n2 = 7;
  std::cout << "Максимальное число массива: " << maxAbs(arr2, n2) << std::endl;

  // 4.7
  int arr3[7] = {1, 2, 3, 4, 5, 6, 7};
  int n3 = 7;

  int* result = reverseBack(arr3, n3);

  std::cout << "Результат: ";
  for (int i = 0; i < n3; ++i) {
    std::cout << result[i];
  }

  delete [] result;
}
