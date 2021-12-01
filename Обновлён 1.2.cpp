#define _USE_MATH_DEFINES 
#include <cmath>
#include <iostream>

using namespace std;

/**
*\brief ������� ��������� ������� ������������.
*\param cathet1 ������ ����� ������������.
*\param cathet2 ������ ����� ������������.
*\return ������� ������������.
*/
double Square(const double cathet1, const double cathet2)
{
	return cathet1 * 0, 5 * cathet2;
}
/**
*\brief ������� ��������� �������� ������������.
*\param cathet1 ������ ����� ������������.
*\param cathet2 ������ ����� ������������.
*\param cathet3 ������ ����� ������������.
*\return ��������.
*/
double Perimeter(const double cathet1, const double cathet2, const double cathet3)
{
	return cathet1 + cathet2 + cathet3;
}

/**
*\brief ����� ����� � ���������.
*\return 0 � ������ ������.
*/
void main()
{
	setlocale(LC_ALL, "ru");
	double cathet1;
	cout << "������� ������ ����� ";
	cin >> cathet1;
	double cathet2;
	cout << "������� ������ ����� ";
	cin >> cathet2;
	double cathet3 = (sqrt(pow(cathet1, 2) + pow(cathet2, 2)));
	cout << "������� ����� " << Square(cathet1, cathet2) << " ��" << endl;
	cout << "�������� ����� " << Perimeter(cathet1, cathet2, cathet3) << " ��" << endl;
}