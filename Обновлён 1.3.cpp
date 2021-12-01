#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
/**
*\brief ������� ��������� ���������� ������� ��� ����������.
*\param m �����.
*\param c �������� �����������
*\param t1 ������� �����������.
*\param t2 ����������� ���������.
*\return ���������� ������� ��� ����������.
**/
double heating(double m, const double c, const double t1, const double t2)
{
	return(m*c*(t2 - t1)) / 1000;
}
/**
* \brief ������� ��������� ���������� ������� ��� ���������.
*\param lambda �������� ������� ���������.
*\param m �����.
*\return ���������� ������� ��� ���������.
*/
double melting(const double lambda, double m)
{
	return(lambda*m) / 1000;
}
/**
*\brief ����� ����� � ���������.
*\return 0 � ������ ������.
*/
void main()
{
	setlocale(LC_ALL, "ru");
	/**
	*\brief
	*\param m �����.
	*\param t1 ������� �����������.
	*\param t2 ����������� ���������.
	*\param c �������� ����������� .
	*\param lambda �������� ������� ���������.
	*\return 0 � ������ ������.
	**/
	double m;
	const double t1 = -10;
	const double t2 = 0;
	const double c = 2100;
	const double lambda = 330000;
	cout << "������� ����� ���� � �����������" << endl;
	cin >> m;
	cout << "����� ������� " << (heating(m, c, t1, t2)) + (melting(lambda, m)) << "���" << endl;
}