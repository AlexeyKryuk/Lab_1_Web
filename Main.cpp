#include "std.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;
// программа является учебной
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите два целых числа" << endl;
	cin >> a >> b;
	cout << "Сумма двух чисел = " << a + b << endl;
	cout << "Разность двух чисел = " << a - b << endl;

	cout << "Произведение двух чисел = " << a * b << endl;
	cout << "Деление двух чисел = " << a / b << endl;

	_getch();
	return 0;
}
