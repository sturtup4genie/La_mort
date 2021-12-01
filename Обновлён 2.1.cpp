#include <iostream>
#include <cmath>

using namespace std;

/**
*\brief функция вычисляет сумму.
*\param a первое число.
*\param b второе число.
*\return сумму.
*/
double getAmount(const double a, const double b)
{
	return a + b;
}
/**
*\brief функция вычисляет разность.
*\param a первое число.
*\param b второе число.
*\return разность.
*/
double getDifference(const double a, const double b)
{
	return a - b;
}
/**
*\brief функция вычисляет среднее арифметическое.
*\param a первое число.
*\param b второе число.
*\return среднее арифметическое.
*/
double getArithmeticMean(const double a, const double b)
{
	return (a + b)/2;
}
/**
*\brief Выбор расчёта суммы(0),разности(1),среднего арифметического(2).
*\return 0 в случае успеха
*/
enum class MathFunct
{
	amount,
	difference,
	arithmeticMean
};

void main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	cout << "Введите число a =  ";
	cin >> a;
	cout << "Введите число b = ";
	cin >> b;
	int action;
	cout << "Введите выполняемое действие (Сумма = " << static_cast<int>(MathFunct::amount) << ", Разность = " << static_cast<int>(MathFunct::difference) << ", Среднее арифметическое = " << static_cast<int>(MathFunct::arithmeticMean)<<")";
	cin >> action;
	const auto choice = static_cast<MathFunct>(action);
	switch (choice)
	{
		
	case MathFunct::amount:
		cout << "Сумма равна = " << getAmount(a,b) << endl;
		break;
	case MathFunct::difference:
		cout << "Разность равна = " << getDifference(a,b) << endl;
		break;
	case MathFunct::arithmeticMean:
		cout << "Среднее арифметическое равно = " << getArithmeticMean(a, b) << endl;
		break;
	default:
	}
}
