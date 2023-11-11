#include <iostream>

int sum(int num1, int num2, int num3, int num4, int num5)
{
	return num1 + num2 + num3 + num4 + num5;
}

inline double sum2(double num1, double num2, double num3)
{
	return (num1 + num2 + num3) / 3;
}

int max(int num1, int num2, int num3)
{
	int maxnum = num1;
	if (maxnum < num2)
		maxnum = num2;

	if (maxnum < num3)
		maxnum = num3;
	return maxnum;
}

short max(short num1, short num2, short num3)
{
	short maxnum = num1;
	if (maxnum < num2)
		maxnum = num2;

	if (maxnum < num3)
		maxnum = num3;
	return maxnum;
}

double max(double num1, double num2, double num3)
{
	double maxnum = num1;
	if (maxnum < num2)
		maxnum = num2;

	if (maxnum < num3)
		maxnum = num3;
	return maxnum;
}

template <typename T>
void tarray(T arr[], int length)
{
	int minus;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] < 0)
			minus = i;
	}
	for (int j = minus + 1; j < length; j++)
	{
		arr[j] = 0;
	}
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << "\n";
}

int main() {
	setlocale(LC_ALL, "Russian");

	//Task1
	
	std::cout << "1) Сумма чисел = " << sum(1, 2, 3, 4, 5) << std::endl;

	//Task2
	std::cout << "2) Среднее арифмитическое -> " << sum2(9, 2, 4) << std::endl;

	//Task3
	std::cout << "3) " << max(3, 6, 9) << "\n";
	std::cout << max(3, 22, 9) << "\n";
	std::cout << max(3.2, 9.6, 9.2) << "\n";

	//Task4
	const int size = 5;
	int arr[size]{ 4, 6,-3, 89, 54 };
	tarray(arr, size);

	return 0;
}
