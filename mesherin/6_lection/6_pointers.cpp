#include <iostream>

int main() {
    int x = 0;
    double y = 1;
    int count = 6;
    int z = 4;
    std::cout << &x << " адрес x в памяти " << '\n'; // &: T -> T* ; & - это оператор взятия адреса
    std::cout << &y << " адрес y в памяти " << '\n';
    std::cout << "x и y отличаются на 4 байта" << std::endl;
    std::cout << "________________________" << std::endl;
    int *p_x = &x; // Pointer ; int* - это название типа и * - это часть типа
    double *p_y = &y;
    int *p_z = &z;
    std::cout << *p_x << " разыменование адреса x " << std::endl; // *: T* -> T ; * - это оператор разыменования
    std::cout << *p_y << " разыменование адреса y " << std::endl;
    std::cout << "________________________" << std::endl;
    std::cout << "Сложение" << std::endl;
    std::cout << p_x + count << std::endl; // (T* , int) -> T* ; T* + sizeof(T) * count
    std::cout << p_y + count << std::endl; // double* + sizeof(double) * count
    std::cout << "Вычитание" << std::endl;
    std::cout << p_x - count << std::endl; // (T* , int) -> T* ; T* - sizeof(T) * count
    std::cout << p_y - count << std::endl; // double* - sizeof(double) * count
    std::cout << "*: (T*, T) не определено" << std::endl;
    std::cout << "/: (T*, T) не определено" << std::endl;
    std::cout << "Можем инкрементировать указатель p_x " << " ++p_x: " << ++p_x << " p_x++: " << p_x++ << '\n';
    std::cout << "Можем декрементировать указатель p_x " << " --p_x: " << --p_x << " p_x--: " << p_x-- << '\n';
    std::cout << "________________________" << std::endl;

    std::cout << "Обращаемся по указателю значению в векторе" << std::endl;


    std::vector<int> v = {1, 2, 3, 78, 5};
    int* p1_v = &v[2];
    int* p2_v = &v[3];
    std::cout << *(p1_v + 2) << '\n';
    std::cout << "________________________" << std::endl;
    std::cout << "Сложение указателей одинаковых типов неопределено" << std::endl;
    std::cout << "Вычитание указателей одинаковых типов определено:" << std::endl;
    std::cout << p_z - p_x << " Разность между адресами x и z" << std::endl;
    std::cout << p2_v - p1_v << std::endl;
    int a[3]{1, 2 ,100};
    int* p_a = &a[0];
    int* p_a1 = &a[2];
    std::cout << p_a1 - p_a << std::endl;
    std::cout << p1_v - p_x << "Вектор и переменная лежат в разных областях памяти. "
                               "Переменные лежат на стеке, "
                               "Элементы вектора хранятся в непрерывном фрагменте в памяти" << std::endl;
    std::cout << "Можно сравнивать указатели одинаковых типов между собой" << std::endl;
    std::cout << "p_x " << p_x << " p_z " << p_z << std::endl;
    p_x > p_z ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;
    std::cout << "Можем брать указатель на указатель на int: int**" << '\n';
    int b = 3;
    int* p = &b;
    std::cout << "p " << p << '\n';
    int** pp = &p;
    std::cout << "pp "<< pp << '\n';

    std::cout <<"*pp " <<  *pp << '\n'; // тоже самое что и std::cout << p;
    std::cout << "*p="<< *p << ' ' << "**pp="<< **pp << '\n';
    std::cout << "Тип int* - занимает 8 байт и это зависит от разрядности системы(64 или 32 битная)" << '\n';
    std::cout << "У меня 64 разрядная система" << '\n';
    std::cout <<"int* " <<sizeof(p) << " byte" << '\n';
    std::cout << "int** " << sizeof(pp) << " byte" << '\n';
    std::cout << "*p=2 - lvalue; &p - rvalue" << '\n';
    *p = 2;
    std::cout << "*p=" << *p << '\n';
    std::cout << "Мы не можем узнать адрес &(a+1) потому что & - rvalue требует чтобы аргумент был lvalue" << '\n';
    std::cout << "& можно применять только к переменным, а не к каким - то временно только что вычисленным значениям" << '\n';
    std::cout << "* можно применять к lvalue *p и к rvalue *(p+2)" << '\n';
    std::cout << *(p+2) << '\n';
    std::cout << "Тип void*(указатель на неизвестно что) используем когда хотим обратиться к ячейке памяти без привязки к типу переменной\n"
                 " Указатели на что угодно неявно приводятся к указателю на void\n"
                 " Операции & для типа void* определена\n"
                 " Операции *vp, vp + count, vp - count, vp > count не определены для типа void*\n"
                 " Так же мы не можем складывать, вычитать, сравнивать типы void* друг с другом\n" << std::endl;
    char k = 'c';
    void* vp = &k;
    void* vp1 = &x;
    std::cout << "vp " << vp << std::endl;
    std::cout << "&vp " << &vp << std::endl;
    std::cout << sizeof(void*) << " byte" << '\n';

//    std::cout << "*vp " << *vp // Error
//    std::cout << "+ " << vp + count << '\n'; Error
//    std::cout << "- " << vp - count Error
//    std::cout << "< " << vp > &(count) Error
//    std::cout << vp + vp1 Error
//    std::cout << vp - vp1; Error
//    std::cout << vp * vp1 Error
//   std::cout << vp > vp1 << std::endl; Error
    std::cout << "NULL - это макрос, константа которая равна 0\n, у NULL - тип целочисленный"
                 "nullptr - это ноль в мире указателей. nullptr - это ключевое слово. у nullptr тип указатель\n";

  }


/*
 * Данные программы хранятся в оперативной памяти
 * Вывод указателей в cout определён в шестнадцатеричной системе счисления по умолчанию (0x)
 */
