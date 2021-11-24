#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief �������������� �������, �������������� �������� a
* \param const double x - ���������
* \param const double y - ���������
* \param const double z - ���������
* \return �������� a
**/
double GetA(const double x, const double y, const double z);

/**
* \brief �������������� �������, �������������� �������� b
* \param const double x - ���������
* \param const double y - ���������
* \param const double z - ���������
* \return �������� b
**/
double GetB(const double x, const double y, const double z);

/**
* \brief ����� ����� � ���������.
* \return ��� ������ (0 - �����).
*/
void main()
{
	const double x = 1.7;
	const double y = 1.08;
	const double z = 0.5;
	const auto a = GetA(x, y, z);
	const auto b = GetB(x, y, z);
	cout << " x = " << x << "\n y = " << y << "\n z = " << z << "\n a = " << a << "\n b = " << b;
}

double GetA(const double x, const double y, const double z)
{
	return (sin(x)) / (sqrt((pow(y, 2) + pow(2, sin(x)))) - pow(x, 2)*y*z);
}

double GetB(const double x, const double y, const double z)
{
	return (exp(-z*x)*sqrt(x + 1) + exp(-y*x));
}