
#include <iostream>
#include <cmath>
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int x_1 = n / 1000;
        int x_2 = (n / 100) % 10;
        int x_3 = (n / 10) % 10;
        int x_4 = n % 10;

        if (x_1 == 0) {
            x_1 = 10;
        }
        if (x_2 == 0) {
            x_2 = 10;
        }
        if (x_3 == 0) {
            x_3 = 10;
        }
        if (x_4 == 0) {
            x_4 = 10;
        }
        std::cout << abs(x_1 - 1) + abs(x_1 - x_2) + abs(x_2 - x_3) + abs(x_3 - x_4) + 4 << std::endl;
    }
}
/*
#include <iostream>
#include <string>
#include <cmath>
int main() {
    int t, count;
    std::cin >> t;
    while (t--) {
        count = 0;
        std::string str;
        std::cin >> str;
            for (int i = 1; i <= 4; i++) {
                if (str[i] == '0') {
                    str[i] += 10;
                    count += abs(str[i] - str[i-1] - 1);
                }
            }
            std::cout << count << std::endl;
        }

    }
*/