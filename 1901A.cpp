//#include <iostream>
//
//int main() {
//    int t;
//    std::cin >> t;
//    while (t--){
//        int n, x;
//        std::cin >> n >> x;
//        std::vector <int> a(n);
//        for (int i = 0; i < n; i++) {
//            std::cin >> a[i];
//        }
//        int p[n];
//        p[0] = a[0];
//        p[n] = (x - a[n-1]) * 2;
//        for (int i = 0; i < n-1; i++) {
//            p[i+1] = a[i + 1] - a[i];
//        }
//        int max = p[0];
//        for (int i = 1; i < n+1; i++) {
//            if (p[i] > max) {
//                max = p[i];
//            }
//        }
//        std::cout << max << std::endl;
//    }
//    return 0;
//}
