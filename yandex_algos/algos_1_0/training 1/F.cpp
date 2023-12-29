#include <iostream>
int main() {
    int a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;
    if (b1 == a2 && a1 == b2) {
        std::cout << a1 << " " << b1 + a2 << std::endl;
    }
    else {
        if (a1 >= a2) {
            std::cout << b1 + b2 << " " << a1 << std::endl;
        }
        else {
            std::cout << b1 + b2 << " " << a2 << std::endl;
        }
    }
}