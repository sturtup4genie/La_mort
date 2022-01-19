#include <iostream>
#include <ctime>

/**
* \brief заполнение массива случайными числами
* \param arr массив
* \param size размер массива
**/
void automatic_filling(int size, int arr[]);
/**
* \brief заполнение массива вручную
* \param arr массив
* \param size размер массива
**/
void filling_in_manually(int size, int arr[]);

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
void get_pair(int* arr, const size_t size, double input);

int main() 
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int size;
	std::cout << "Введите размер массива" << std::endl;
	std::cin >> size;
	int* arr = new int[size];
	int choise;
	std::cout << "\n0-автоматическое заполнение массива\n1-заполнить массив вручную\n" << std::endl;
	std::cin >> choise;
	if (choise == 0)
	{
		automatic_filling(size, arr);
	}
	else
	{
		filling_in_manually(size, arr);
	}
	std::cout << "Сумма положительных элементов: " << get_sum(arr, size) << "\n\n";

	std::cout << "Все четные положительные элементы массива,умноженные на последний элемент: \n";

	get_elements(arr, size);

	std::cout << "Найти номер первой пары соседних элементов с разными знаками, сумма которых меньше заданного числа: \n";
	double input;
	std::cin >> input;
	get_pair(arr, size, input);

	if (arr != nullptr)
	{
		delete[] arr;
		arr = nullptr;
	};

	return 0;
}

void automatic_filling(int size, int arr[])
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void filling_in_manually(int size, int arr[])
{
	std::cout << "Введите значения" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << "Значения массива" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
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
	for (size_t i = 0; i < size; i++){
		std::cout << arr[i] << std::endl;
	}
}


void get_pair(int* arr, const size_t size, double input)
{
	bool k = false;
	for (size_t i = 1; i < size; i++) 
	{
		if ((arr[i] * arr[i - 1] < 0) && (arr[i] + arr[i - 1]<input)) 
		{
			std::cout << "Это пара под номером: " << i << " " << i - 1 << " ";
			k = true;
		}
	}
	if (k == false) 
	{
		std::cout << "Таких пар нет ";
	}
}