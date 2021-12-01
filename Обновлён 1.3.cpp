#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
/**
*\brief функция вычисляет количество теплоты при нагревании.
*\param m масса.
*\param c удельная теплоёмкость
*\param t1 текущая температура.
*\param t2 температура плавления.
*\return количество теплоты при нагревании.
**/
double heating(double m, const double c, const double t1, const double t2)
{
	return(m*c*(t2 - t1)) / 1000;
}
/**
* \brief функция вычисляет количество теплоты при плавлении.
*\param lambda удельная теплота плавления.
*\param m масса.
*\return количество теплоты при плавлении.
*/
double melting(const double lambda, double m)
{
	return(lambda*m) / 1000;
}
/**
*\brief Точка входа в программу.
*\return 0 в случае успеха.
*/
void main()
{
	setlocale(LC_ALL, "ru");
	/**
	*\brief
	*\param m масса.
	*\param t1 текущая температура.
	*\param t2 температура плавления.
	*\param c удельная теплоёмкость .
	*\param lambda удельная теплота плавления.
	*\return 0 в случае успеха.
	**/
	double m;
	const double t1 = -10;
	const double t2 = 0;
	const double c = 2100;
	const double lambda = 330000;
	cout << "Введите массу льда в килограммах" << endl;
	cin >> m;
	cout << "Общая энергия " << (heating(m, c, t1, t2)) + (melting(lambda, m)) << "кДж" << endl;
}