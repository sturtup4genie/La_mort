#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;


/**
* \brief ����������� ������� ������� � �����
* \param x ������� �������� - ����� x
* \return true, ���� ������� ���������� � �������� ����� x
*/
bool IsCalculated(const double x);

/**
* \brief ������ ������� � ����� x
* \param x ������� �������� - ����� x
* \return �������� ������� � ����� x
*/
double Calculation(const double x);

/**
* \brief ����� ����� � ���������
* \return ��� ������ (0 - �����)
*/
void main()
{
	const auto leftBound = 1.0;
	const auto rightBound = 2.0;
	const auto step = 0.1;

	auto x = leftBound;
	cout << "  x" << setw(15) << "y\n";
	while ((x < rightBound) || (abs(x - rightBound) < step))
	{
		if (IsCalculated(x))
		{
			const auto y = Calculation(x);
			cout << setw(10) << setprecision(2) << x << setw(15)
				<< setprecision(5) << y << '\n';
		}
		else
		{
			cout << setw(10) << setprecision(2) << x << setw(15)
				<< "not defined \n";
		}
		x += step;
	}
}

double Calculation(const double x)
{
	return cos(x) - exp(-(pow(x, 2) / 2) + x - 1);
}

bool IsCalculated(const double x)
{
	return (abs(x) > numeric_limits<long double>::epsilon());
}
