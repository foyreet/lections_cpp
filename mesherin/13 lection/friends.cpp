/*
 Friends in oop
 Друзья это функции или классы, хоть и не являются членами данного класса
 тем не менее им разрешён доступ к приватной части нашего класса

 Работает только в одну сторону
 friend class CC; друг для класса С, но класс С не друг для класса СС.
 friend не транзитивно (т.е b друг a, c друг a. Это не значит,что b друг c)
 friend лучше всегда не использовать(использовать только по надобности)

 */
#include <iostream>
class C {
private:
  int x{5};
public:
  void f(int y) {
    std::cout << x + y;
  }
  class CC {
  private:
      int y;
  };
  friend void g(C, int); // эту функцию нужно объвлять внутри класса, а определять вне класса
  friend class CC; // все методы класса СС являются друзьями для класса С(разрешено обращение к любому методу из приватного поля класса СС)
};


void g(C c, int y) {
  std::cout << c.x + y + 2;
}
int main() {


  
}