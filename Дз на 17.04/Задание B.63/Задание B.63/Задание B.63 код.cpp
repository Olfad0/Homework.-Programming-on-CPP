#include<iostream>
using namespace std;

int main()
{
	int A[10000];
	int size, arr, num;
	setlocale(LC_ALL, "ru_RU");
	cout << "Введите размер массива" << endl;
	cin >> size;
	cout << "Введите числа, которые будут находится в массиве" << endl;
	for (int i = 1; i <= size; i++)
	{
		cin >> arr;
		A[i] = arr;
	}

	cout << "Введите значение равное значению массива" << endl;
	cin >> num;
	cout << "Порядковые номера чисел равных введённому:" << endl;
	for (int k = 1; k <= size; k++)
	{
		if (A[k] == num)
		{
			cout << k << " ";
		}
		else
		{
			cout << "-1 ";
		}
	}
	return(0);
}






