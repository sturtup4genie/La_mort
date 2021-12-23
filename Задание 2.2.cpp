#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

const double a = 2;

/**
*\brief математическая функция, работающая для ограничений x > a.
*\param  x - значение параметра x.
*\return возвращает значение функции.
**/

double getFunctionFirst(const double x);

/**
*\brief математическая функция, работающая для ограничений x <= a.
*\param x - значение параметра x.
*\return возвращает значение функции.
**/

double getFunctionSecond(const double x);

/**
*\brief точка входа в программу.
*\return  0 в случае успеха.
*/

int main()
{
	setlocale(LC_ALL, "ru");
	double x;
	std::cout << "Введите значение = ";
	std::cin >> x;
	double y;

	if (x <= a)
	{
		y = getFunctionSecond(x);
	}
	else (x > a);
	{
		y = getFunctionFirst(x);
	}
	std::cout << "Y = " << y;
	return 0;
}

double getFunctionFirst(const double x)
{
	return tan(x) + M_PI / 3;
}


double getFunctionSecond(const double x)
{
	return sin(x)*a;
}
