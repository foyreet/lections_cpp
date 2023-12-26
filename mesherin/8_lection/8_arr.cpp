Массивы переменной длины в с++ запрещены(выдаёт warning)

#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i];
	}
}