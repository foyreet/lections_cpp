#include <iostream>
int main() {
  int r, i, c;
  std::cin >> r >> i >> c;
  if (i == 0) {
    if (r != 0) {
      std::cout << 3 << std::endl;
    }
    else {
      std::cout << c << std::endl;
    }
  }
  else if (i == 1) {
    std::cout << c << std::endl;
  }
  else if (i == 4) {
    if (r != 0) {
      std::cout << 3 << std::endl;
    }
    else {
      std::cout << 4 << std::endl;
    }
  }
  else if (i == 6) {
    std::cout << 0 << std::endl;
  }
  else if (i == 7) {
    std::cout << 1 << std::endl;
  }
  else {
    std::cout << i << std::endl;
  }
}
