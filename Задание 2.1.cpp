#include <iostream>
#include <cmath>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	double a, b;
	cout << "������� ����� a = ";
	cin >> a;
	cout << "������� ����� b = ";
	cin >> b;
	int deistvie;
	/**
	* \brief ����� ������������ ������� �����,��������, � �������� ���������������
	**/
	cout << "�������� ��������: 1-�����,2-��������,3-������� ��������������" << endl;
	cin >> deistvie;
	switch (deistvie)
	{
		/**
		* \brief �����, ��������� ����� �����
		* \param a ������ �����
		* \param b ������ �����
		**/
	case 1:
		cout << a + b << endl;
		break;
		/**
		* \brief �����, ��������� �������� �����
		* \param a ������ �����
		* \param b ������ �����
		**/
	case 2:
		cout << a - b << endl;
		break;
		/**
		* \brief �����, ��������� ������� �������������� �����
		* \param a ������ �����
		* \param b ������ �����
		**/
	case 3:
		cout << (a + b) / 2 << endl;
		break;
		/**
		* \brief �������� ����� �� ������������
		**/
	default:
		cout << "������! ����� ���� �����������!" << endl;
		break;
	}
}
