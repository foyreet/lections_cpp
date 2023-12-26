
/*
 int* a = new int[10];
 delete[] a;
 Хранится в куче

  Массивы переменной длины в с++ запрещены(выдаёт warning)
#include <iostream>
int main()
{
  int n;
  std::cin >> n;
  int a[n];
  for (int i  = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    std::cout << a[i] << ' ';
  }
}

int* b[5]; // Массив из 5 указателей на int 
 //  Читаем сначала справа потом слева
int (*c)[5]; // Указатель на массив из 5 int
Массив и указатель при передаче в функцию это одно и тоже
void f(int**) {} 1
void f(int* [5]) {} 2
1 и 2 выражение это одно и то же

#include <iostream>
int main() {
    char *s = "abcds";
    s[5] = 'a';
    std::cout << s;
}
 Если уберём \0 то вызовем seg fault
 В С все строки заканчиваются \0 и программа идёт до \0.

 */

/*
 Указатели на функции
 Это надо если надо в функцию передать функцию
 Указатель на функцию это указатель на место в машинном коде, где записана эта функция

#include <iostream>
#include <algorithm>
bool cmp(int x, int y) {
    return x < y;
 }
int main() {
    int a[5] = {2, 8 ,3, 5, 6};
    bool (*p)(int, int) = &cmp; // указатель на функцию
    // bool (*p)(int, int) = cmp; // Function to pointer conversion
    std::cout << (void*) p << std::endl; // находится в области text
    std::cout << p << std::endl;
    std::sort(a, a+5, &cmp); // &cmp - это указатель на функцию
    for(int i = 0; i < 5; i++) {
        std::cout << a[i];
    }

    //
    double r = 2.0;
    int f = static_cast<int>(r);
    std::cout << f << std::endl;
 }
*/
#include <iostream>
#include <algorithm>
bool cmp(int x, int y) {
    return x < y;
}

void f(int) {}
void f(double) {}

int main() {
    void (*p)(int) = &f;
    void (*p2)(double) = &f;
    std::cout << (void*)p << " " << (void*)p2 << '\n';
 }

