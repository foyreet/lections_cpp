#include <iostream>
#include <vector>

    /* Tokens
     * 1) Identifiers  int x;
     * 2) Keywords  if ( ) { }
     * 3) Literals  int x = 5; 5 - literal
     * 4) Operators  int sum = x + y; + - operator
     * 5) Delimiters ; {}
     * 6) Punctuation , .
     * 7) Comments //
    */


    /* Ошибки в программе на с++
     1. Compile - time Error(ошибки на этапе компиляции)
    1.1) Lexical errors (Can't read tokens)
        nt x;
        7abchg; Идентификаторы нельзя начинать с чисел

        Синтаксический разбор по токенам:
        int x; // int x ;
        std::cin >> x; // std :: cin >> x ;
        std::cout << x + 4;

    1.2) Syntax error (Can't make statement)
        int x = 7


     2. Runtime error (получилось сделать исполняемый файл a.out, он запускается, но падает на этапе выполнения)

     2.1) Segmentation fault
     Самая частая ошибка в RE.
     Возникает когда мы пытаемся обратиться к памяти,
     к которой не имеем права обращаться или когда нарушаем режим доступа к памяти

     Example:
     std::vector<int> v(10);
     v[500000000] = 1;

     2.2) Floating point exception(FPE)
     Эта ошибка возникает в процессоре

     Example Floating point exception

     int y;
     std::cin >> y;
     std::cout << 6 / y;

     2.3) Aborted (вызов функции abort)
     std::abort() - аварийно завершает программу операционной системой


     3. UB (Неопределённое поведение в с++)
     Неопределённое поведение помогает быстро оптимизировать код компилятору.
     Но проблема в том что не ясно как поведёт себя программа если не исправить UB в будущем

     Чтобы не было проблем с UB нужно отслеживать warning;
     Warning - это не ошибка компиляции (это замечание компилятора)
     Можно использовать флаги warning для их отслеживания в программе
     Флаги:
     1) g++ -Wall (предупреждает обо всём)
     2) g++ -Wextra (делает ещё больше предупреждений чем -Wall)
     3) g++ -Wpedantic(строго по правилам выполняет)
     4) g++ -Werror(превращает все warning в ошибки компиляции)
     5) g++ -Wno-error=unused-value(явно указываем сделать unused-value из error в warning)

    Объяснение:
    1) ill-formed - программа имеет синтаксические ошибки или диагностируемые семантические ошибки
    2) ill-formed, no diagnostic required - программа имеет семантические ошибки,
     которые в общем случае невозможно диагностировать (например, нарушения ODR)
    3) implementation-defined behavior - поведение программы варьируется в зависимости от реализации
     и соответствующая реализация должна документировать эффекты каждого поведения.
     Например: тип std::size_t или количество бит в байте
    4) unspecified behavior - поведение программы варьируется в зависимости от реализации,
     и от соответствующей реализации не требуется документирование эффектов каждого поведения
     Например:порядок оценки
        #include <cstdio>
        int a() { return std::puts("a"); }
        int b() { return std::puts("b"); }
        int c() { return std::puts("c"); }
        void z(int, int, int) {}
        int main() {
            z(a(), b(), c());       // разрешены все 6 перестановок
            return a() + b() + c(); // разрешены все 6 перестановок
        }
    5) undefined behavior - нет ограничений на поведение программы.
     Например: доступ к памяти за пределами массива
     std::vector<int> v(10);
     v[11] = 1; // обращение к 11 элементу

     */

#include <cstdio>
int a() { return std::puts("a"); }
int b() { return std::puts("b"); }
int c() { return std::puts("c"); }
void z(int, int, int) {}
int main() {
    z(a(), b(), c());       // разрешены все 6 перестановок
    return a() + b() + c(); // разрешены все 6 перестановок
}



