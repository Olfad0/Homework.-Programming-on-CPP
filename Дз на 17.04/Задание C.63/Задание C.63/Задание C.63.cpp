#include<iostream>
using namespace std;

int main()
{
	int A[10000];
	int size, arr, MAX = 1, cMAX = 0;
	setlocale(LC_ALL, "ru_RU");
	cout << "Введите размер массива" << endl;
	cin >> size;
	cout << "Введите числа, которые будут находится в массиве" << endl;
	for (int i = 1; i <= size; i++)
	{
		cin >> arr;
		A[i] = arr;
	}

	for (int k = 1; k <= size; k++)
	{
		MAX = A[1];
		if (A[k] > MAX)
		{
			MAX = A[k];
		}
	}
	for (int k = 1; k <= size; k++)
	{
		if (A[k] == MAX)
		{
			cMAX++;
		}
	}

	cout << "Максимальное значение в массиве: " <<MAX<< endl;
	cout << "Количество элементов максимального значения в массиве: " << cMAX << endl;
	return(0);
}
