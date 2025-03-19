// �������� �.�.
#include <cassert> // ���������� �++ ��� ����������� ���������� ������ � ���������(��� ������� assert)
#include "recur_fib.h" // ����������� ������������� ����� ������

/// �������, ����������� ����� ��������� ����������
/// ����� ��������� F(n) = F(n-1) + F(n-2)
/// BigO: O(2^n)
/// n - ����� �����
long long recurs_fib(long long n)
{
	if (n <= 1) // ���� ����� <=1, �� ���������� ��� �����
	{
		return n;
	}
	else
	{
		return recurs_fib(n - 1) + recurs_fib(n - 2); // ������� �� �������
	}
}

/// �������, ����������� ����� ��������� � ������� �����
/// ����� ��������� F(n) = F(n-1) + F(n-2)
/// BigO: O(n)
/// n - ����� �����
long long cycle_fib(long long n)
{
	if (n <= 1) // ���� ����� <=1, �� ���������� ��� �����
	{
		return n;
	}
	int p1 = 0;
	int p2 = 1;
	int rez; // ���������� ����������
	for (int i = 2; i <= n; i++)
	{
		rez = p1 + p2; // ������� ������� �������
		p1 = p2;
		p2 = rez;
	}
	return rez; // ���������� ���������
}

// ������������ ������� ���������� ����� ���������
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