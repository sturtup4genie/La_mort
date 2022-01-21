#include <iostream>
#include <random>
using namespace std;

/**
* \brief перечислимый тип способов задания массива
*/
enum class type_of_filling
{
	/**
	* \brief генератор случайных чисел
	*/
	rand = 1,
	/**
	* \brief ввод вручную
	*/
	user = 2
};
/**
* \brief заполнение массива случайными числами
* \param arr массив
* \param size размер массива
**/
void automatic_filling(int* arr, const size_t size,const int min,const int max);
/**
* \brief заполнение массива вручную
* \param arr массив
* \param size размер массива
**/
void filling_in_manually(int* arr, const size_t size);

/**
* \brief функция для нахождения суммы элементов массива >0
* \param arr массив
* \param size размер массива
**/
int get_sum(int* arr, const size_t size);

/**
* \brief функция для нахождения колличества элементов,начения которых положительны и не превосходят заданного числа А
* \param arr массив
* \param size размер массива
**/
void get_elements(int* arr, const size_t size);

/**
* \brief функция для нахождения последней пары соседних элементов с разными знаками
* \param arr массив
* \param size размер массива
* \param input поиск пары меньше этого числа
**/
void get_pair(int* arr, const size_t size, int input);
/**
* \brief ввод массива с клавиатуры
* \param arr массив
* \param size размер массива
**/
void user_input(int* arr, const size_t size);
/**
* \brief вывод массива
* \param arr Массив
* \param size Размер массива
**/
void print(int* arr, const size_t size);
/**
* \brief вывод значений массива
* \param arr Массив
* \param size Размер массива
**/
void print_array(int*arr,const size_t size);

int main()
{
	setlocale(LC_ALL, "ru");
	size_t size,choice;
	std::cout << "Введите размер массива" << std::endl;
	std::cin >> size;
	int* arr = new int[size];
	std::cout << "1 - Сгенерировать массив\n2 - Заполнить массив вручную\n";
	std::cin >> choice;
	const auto filling = static_cast<type_of_filling>(choice);
	const int left = -100;
	const int right = 100;
	switch (filling)
	{
	case type_of_filling::rand:
		automatic_filling(arr, size,left,right);
		print(arr, size);
		break;
	case type_of_filling::user:
		user_input(arr, size);
		print(arr, size);
		break;
	default:
		std::cout << "Ошибка! Не выбран ни один из вариантов";
	}
	std::cout << "Сумма положительных элементов: " << get_sum(arr, size) << "\n\n";

	std::cout << "Все четные положительные элементы массива,умноженные на последний элемент: \n";

	get_elements(arr, size);

	std::cout << "Найти номер первой пары соседних элементов с разными знаками, сумма которых меньше заданного числа: \n";
	int input;
	std::cin >> input;
	get_pair(arr, size, input);

	if (arr != nullptr)
	{
		delete[] arr;
		arr = nullptr;
	};

	return 0;
}

void automatic_filling(int* arr, const size_t size,const int min,const int max)
{
	random_device rd;
	mt19937 gen(rd());
	const uniform_real_distribution<int>dist(min,max);

	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void filling_in_manually(int* arr, const size_t size)
{
	std::cout << "Введите значения" << std::endl;
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << "Значения массива" << std::endl;
	print_array(arr,size);
}


int get_sum(int* arr, const size_t size)
{
	int sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		if ((arr[i] >= 0) && (arr[i] > 9) && (arr[i] < 100))
		{
			sum += arr[i];
		}
	}
	return sum;
}

void get_elements(int* arr, const size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		if ((arr[i] % 2 == 0) && (arr[i] >= 0))
		{
			arr[i] = arr[i] * arr[size];
		}
	}
	print_array(arr,size);
}


void get_pair(int* arr, const size_t size, int input)
{
	bool pairExists=false;
	for (size_t i = 1; i < size; i++)
	{
		if ((arr[i] * arr[i - 1] < 0) && (arr[i] + arr[i - 1]<input))
		{
			std::cout << "Это пара под номером: " << i << " " << i - 1 << " ";
			pairExists = true;
		}
	}
	if (!pairExists)
	{
		std::cout << "Таких пар нет ";
	}
}
void user_input(int* arr, const size_t size)
{
	for (size_t i = 0; i < size; i++) 
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr[i];
	}
}
void print(int* arr, const size_t size) 
{
	std::cout << "array[" << size << "]" << "= {";
	for (size_t i = 0; i < size - 1; i++) 
	{
		std::cout << arr[i] << ";";
	}
	std::cout << arr[size - 1] << "}";
}
void print_array(int*arr,const size_t size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
}
