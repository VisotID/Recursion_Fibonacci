// Высоцкая И.Д.
#include <cassert> // библиотека С++ для обнаружения логических ошибок в программе(для функции assert)
#include "recur_fib.h" // подключение заголовочного файла модуля

/// функция, вычисляющая числа Фибоначчи рекурсивно
/// Числа Фибоначчи F(n) = F(n-1) + F(n-2)
/// BigO: O(2^n)
/// n - номер числа
long long recurs_fib(long long n)
{
	if (n <= 1) // если число <=1, то возвращаем это число
	{
		return n;
	}
	else
	{
		return recurs_fib(n - 1) + recurs_fib(n - 2); // считаем по формуле
	}
}

/// функция, вычисляющая числа Фибоначчи с помощью цикла
/// Числа Фибоначчи F(n) = F(n-1) + F(n-2)
/// BigO: O(n)
/// n - номер числа
long long cycle_fib(long long n)
{
	if (n <= 1) // если число <=1, то возвращаем это число
	{
		return n;
	}
	int p1 = 0;
	int p2 = 1;
	int rez; // переменная результата
	for (int i = 2; i <= n; i++)
	{
		rez = p1 + p2; // считаем текущий элемент
		p1 = p2;
		p2 = rez;
	}
	return rez; // возвращаем результат
}

// тестирование функций нахождения числа Фибоначчи
void test_fib()
{
	assert(recurs_fib(5) == 5);
	assert(recurs_fib(1) == 1);
	assert(recurs_fib(0) == 0);
	assert(recurs_fib(2) == 1);

	assert(cycle_fib(5) == 5);
	assert(cycle_fib(1) == 1);
	assert(cycle_fib(0) == 0);
	assert(cycle_fib(2) == 1);
}