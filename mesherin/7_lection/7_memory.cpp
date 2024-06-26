/*
 * Статическая, динамическая, автоматическая память

   |data|text|stack|
   1.1 data - static memory в ней хранятся глобальные переменные, а также другая информация,
   которая существует в течение всей жизни программы
   Например: переменные в namespace

   1.2 text - машинный код программы

   1.3 stack - automatic memory в ней хранятся локальные переменные
   В Runtime во время выполнения процессором поддерживается stack pointer изначально, указывающий на начало стека

   */
   int main() {
   int x = 5;
    {
        int y = 3;
    }
   }
    /*
     При добавлении элемента y на stack указатель сдвигается вправо |x|y|
     При удалении элемента y указатель сдвигается влево |x|
     Указатель - это адрес где находится вершина стека сейчас
     */