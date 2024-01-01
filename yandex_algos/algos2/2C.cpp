#include <iostream>
int main() {
    int x, y, z;
    std::cin >> x >> y >> z;
    if ((x <= 12 && y <= 12) || (x == y)) {
        std::cout << 0 << std::endl;
    }
    else if (x > 12 && y <= 12) {
        std::cout << 1 << '\n';
    }
    else if (x <= 12 && y > 12) {
        std::cout << 1 << '\n';
    }
    else if (x > 12 && y > 12 ) {
        std::cout << 0 << '\n';
    }
}


