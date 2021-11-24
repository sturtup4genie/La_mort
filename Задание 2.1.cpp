#include <iostream>
#include <cmath>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	double a, b;
	cout << "Введите число a = ";
	cin >> a;
	cout << "Введите число b = ";
	cin >> b;
	int deistvie;
	/**
	* \brief Выбор пользователя расчёта суммы,разности, и среднего арифметического
	**/
	cout << "Выберете действие: 1-сумма,2-разность,3-среднее арифметическое" << endl;
	cin >> deistvie;
	switch (deistvie)
	{
		/**
		* \brief Метод, считающий сумму чисел
		* \param a первое число
		* \param b второе число
		**/
	case 1:
		cout << a + b << endl;
		break;
		/**
		* \brief Метод, считающий разность чисел
		* \param a первое число
		* \param b второе число
		**/
	case 2:
		cout << a - b << endl;
		break;
		/**
		* \brief Метод, считающий среднее арифметическое чисел
		* \param a первое число
		* \param b второе число
		**/
	case 3:
		cout << (a + b) / 2 << endl;
		break;
		/**
		* \brief Проверка ввода на правильность
		**/
	default:
		cout << "Ошибка! Пункт меню отсутствует!" << endl;
		break;
	}
}
