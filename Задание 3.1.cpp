#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
/**
* \brief Расчет функции в точке x
* \param x Входной параметр - точка x
* \return Значение функции в точке x
*/
double Calculation(const double x);

/**
* \brief Точка входа в программу
* \return Код ошибки (0 - успех)
*/
void main()
{
	const auto leftBound = 1.0;
	const auto rightBound = 2.0;
	const auto step = 0.1;

	auto x = leftBound;
	cout << "  x" << setw(15) << "y\n";
	while (x <= rightBound)
	{
		const auto y = Calculation(x);
		cout << setw(10) << setprecision(2) << x << setw(15)<< setprecision(5) << y << '\n';
		x += step;
	}
}

double Calculation(const double x)
{
	return cos(x) - exp(-(pow(x, 2) / 2) + x - 1);
}
