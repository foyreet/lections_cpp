/*
 Friends in oop
 Друзья это функции или классы, хоть и не являются членами данного класса
 тем не менее им разрешён доступ к приватной части нашего класса

 */
#include <iostream>
class C {
private:
  int x{5};
public:
  void f(int y) {
    std::cout << x + y;
  }
  friend void g(C c, int y); // эту функцию нужно объвлять внутри класса, а определять вне класса
};

void g(C c, int y) {
  std::cout << c.x + y + 2;
}
int main() {
  C c;

  
}