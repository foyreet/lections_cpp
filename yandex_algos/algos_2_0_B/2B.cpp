#include <iostream>
#include <cmath>
int main() {
  int N, i, j;
  std::cin >> N >> i >> j;
    if (i < j) {
  if (abs(i - j) - 1 > (i + N - j - 1)) {
    std::cout << i + N - j - 1 << std::endl;
  }
  else {
    std::cout << abs(i - j) - 1 << std::endl;
  }
  }
  else if (i > j) {
    if ((abs(i - j) - 1 > (abs((i + N) -  (j + 2*N)) - 1))) {
      std::cout << (abs((i + N) -  (j + 2*N)) - 1) << std::endl;
    }
    else {
      std::cout << abs(i - j) - 1 << std::endl;
    }
  }
}