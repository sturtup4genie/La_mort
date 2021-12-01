#include <iostream>
#include <cmath>

using namespace std;

/**
*\brief ������� ��������� �����.
*\param a ������ �����.
*\param b ������ �����.
*\return �����.
*/
double getAmount(const double a, const double b)
{
	return a + b;
}
/**
*\brief ������� ��������� ��������.
*\param a ������ �����.
*\param b ������ �����.
*\return ��������.
*/
double getDifference(const double a, const double b)
{
	return a - b;
}
/**
*\brief ������� ��������� ������� ��������������.
*\param a ������ �����.
*\param b ������ �����.
*\return ������� ��������������.
*/
double getArithmeticMean(const double a, const double b)
{
	return (a + b)/2;
}
/**
*\brief ����� ������� �����(0),��������(1),�������� ���������������(2).
*\return 0 � ������ ������
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
	cout << "������� ����� a =  ";
	cin >> a;
	cout << "������� ����� b = ";
	cin >> b;
	int action;
	cout << "������� ����������� �������� (����� = " << static_cast<int>(MathFunct::amount) << ", �������� = " << static_cast<int>(MathFunct::difference) << ", ������� �������������� = " << static_cast<int>(MathFunct::arithmeticMean)<<")";
	cin >> action;
	const auto choice = static_cast<MathFunct>(action);
	switch (choice)
	{
		
	case MathFunct::amount:
		cout << "����� ����� = " << getAmount(a,b) << endl;
		break;
	case MathFunct::difference:
		cout << "�������� ����� = " << getDifference(a,b) << endl;
		break;
	case MathFunct::arithmeticMean:
		cout << "������� �������������� ����� = " << getArithmeticMean(a, b) << endl;
		break;
	default:
	}
}