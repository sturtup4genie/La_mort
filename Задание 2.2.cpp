#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

const double a = 2;

/**
*\brief �������������� �������, ���������� ��� ����������� x > a.
*\param const double x - �������� ��������� x.
*\return ���������� �������� �������.
**/

double getFunctionFirst(const double x);

/**
*\brief �������������� �������, ���������� ��� ����������� x <= a.
*\param const double x - �������� ��������� x.
*\return ���������� �������� �������.
**/

double getFunctionSecond(const double x);

/**
*\brief ����� ����� � ���������.
*\return  0 � ������ ������.
*/

int main()
{
	setlocale(LC_ALL, "ru");
	double x;
	std::cout << "������� �������� = ";
	std::cin >> x;
	double y;

	if (x <= a)
	{
		y = getFunctionSecond(x);
	}
	else if (x > a)
	{
		y = 1;
	}
	else
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
