#include <iostream>
int main() {
  int k_1, m, k_2, p_2, n_2, kolvo_kv_on_the_floor;
  std::cin >> k_1 >> m >> k_2 >> p_2 >> n_2;
  if (k_2 % n_2 != 0) {
    kolvo_kv_on_the_floor = k_2 / n_2 + 1;
  }
  else {
    kolvo_kv_on_the_floor = k_2 / n_2;
  }
  if (n_2 == 1 && m == 1) {
    std::cout << 0 << " " << n_2 << std::endl;
  }
  else {
    int p_1 = p_2 + k_1 / (m * kolvo_kv_on_the_floor);
    int n_1 = (k_1 - (m * kolvo_kv_on_the_floor) - 1) / kolvo_kv_on_the_floor + 1;
    std::cout << p_1 << " " << n_1 << std::endl;
  }
}

