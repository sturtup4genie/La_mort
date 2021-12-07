#define _USE_MATH_DEFINES 
#include <cmath>
#include <iostream>

using namespace std;
/**
*\brief функция вычисляет площадь треугольника.
*\param cathet1 первый катет треугольника.
*\param cathet2 второй катет треугольника.
*\return площадь треугольника.
*/
double Square(const double cathet1, const double cathet2)
{
	return cathet1 * 0, 5 * cathet2;
}
/**
*\brief функция вычисляет третий катет треугольника.
*\param cathet1 первый катет треугольника.
*\param cathet2 второй катет треугольника.
*\return третий катет треугольника.
*/
double Thirdcathet(const double cathet1, const double cathet2)
{
	return(sqrt(pow(cathet1, 2) + pow(cathet2, 2)));
}
/**
*\brief функция вычисляет периметр треугольника.
*\param cathet1 первый катет треугольника.
*\param cathet2 второй катет треугольника.
*\param cathet3 третий катет треугольника.
*\return периметр.
*/
double Perimeter(const double cathet1, const double cathet2, const double cathet3)
{
	return cathet1 + cathet2 + cathet3;
}

/**
*\brief точка входа в программу.
*\return 0 в случае успеха.
*/
void main()
{
	setlocale(LC_ALL, "ru");
	double cathet1;
	cout << "Введите первый катет ";
	cin >> cathet1;
	double cathet2;
	cout << "Введите второй катет ";
	cin >> cathet2;	
	double cathet3;
	cathet3=Thirdcathet(cathet1,cathet2);
	cout << "Площадь равна " << Square(cathet1, cathet2) << " см" << endl;
	cout << "Периметр равен " << Perimeter(cathet1, cathet2, cathet3) << " см" << endl;
}
