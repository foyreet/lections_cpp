/*
 1.2 Типы и их поддерживаемые операции
 С++ язык со статической типизацией(static typing) (все типы должны быть известны на момент компиляции)
 Статическая(выполняется на этапе компиляции)
 Динамическая(выполняется в Runtime)

 Типы:
 1) Integral types:
 int(4 byte) [-2^31 ; 2^31 - 1] 2^31 = 2'147'483'648
 long(4 byte) [-2^31 ; 2^31 - 1]
 long long(8 byte) [-2^63 ; 2^63 - 1]
 short(2 byte) [-2^15 ; 2^15 - 1]
 char(1 byte) [-2^7 ; 2^7 - 1]
char - это тип для хранения 1 - ого символа (от слова character(символ))
'a' + 'b' = int
unsigned - беззнаковый
signed - знаковый

 Типы с фиксированной шириной:
 int32_t(4 byte), int64_t(8 byte)
 uint32_t(4 byte), uint64_t(8 byte)
 std::byte C++17

 bool(1 byte)
 size_t - тип использующийся для индексации

 2) Floating point types:
 float(4 byte)
 double(8 byte)
 long double(16 byte)

 std::string
 1) s = "dbb"
 operator[](size_t)
 s[3] = 0; s[4] = UB;
 s.at(size_t) - проверка на выход за границу
 + ,
 += ,
 s.push_back(char),
 s.pop_back()
 s.front() - обращение к начальному символу
 s.back() - обращение к последнему символу
 s.size() - размер строки

 std::vector<int> v;
 [], .at,
 v.push_back(char) - O(1) амортизированное
 v.pop_back() - O(1)
 v.front()
 v.back()
 v.size()
 v.shrink_to_fit() (since C++11) - освобождение вектором памяти, которая больше не нужна
 v.reserve(size_t) - позволяет предвыделить память на нужное кол-во элементов, но не создавать сами элементы
 v.resize(size_t, char) - сделать размер равный 1 параметру и все элементы сделать равными 2-ому параметру
 v.capacity() - показывает под сколько элементов сейчас зарезервирована память

 std::list
 std::forward_list(since C++11)
 std::deque
 std:queue
 std::priority_queue(куча)

 std::map - хранит упорядоченно
 operator[](key) - O(log n)
 at(key) - O(log n)
 find(key)
 insert(pair<key, value>)
 erase(key)

 std::multimap - может быть с одинаковыми ключами
 lower_bound(key)
 upper_bound(key)
 find(key)
 insert(pair<key, value>)
 erase(key)

 std::unordered_map - хранит неупорядоченно пары ключ значение (хэш таблица)
 */
