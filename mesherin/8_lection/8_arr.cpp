// Массивы переменной длины в с++ запрещены(выдаёт warning)
/*
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

 */