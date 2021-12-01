#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

/**
* \brief Математическая функция, рассчитывающая значение a
* \param const double x - константа
* \param const double y - константа
* \param const double z - константа
* \return значение a
**/
double GetA(const double x, const double y, const double z);

/**
* \brief Математическая функция, рассчитывающая значение b
* \param const double x - константа
* \param const double y - константа
* \param const double z - константа
* \return значение b
**/
double GetB(const double x, const double y, const double z);


/**
* \brief Точка входа в программу.
* \return Код ошибки (0 - успех).
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
