#include <iostream>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int x, y, k;
        std::cin >> x >> y >> k;
            if (x >= y) {
                std::cout << x << std::endl;
            }
            else if (x <= y) {
               if (y - x <= k) {
                   std::cout << y << std::endl;
               }
               else if (y - x >= k) {
                   std::cout << x + k + 2*(y - (x+k)) << std::endl;
               }
            }


    }
}