#include<iostream>
using namespace std;

int main()
{
	int A[1000];
	int size, arr, num;
	int count = 0;
	setlocale(LC_ALL,"ru_RU");
	cout << "Введите размер массива" << endl;
	cin >> size;
	cout << "Введите значение равное значению массива" << endl;
	cin >> num;
	cout << "Введите числа, которые будут находится в массиве" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr;
		if (arr == num)
		{
			count++;
		}
		A[i] = arr;
	}
	cout << "Количество значений равных заданному равно "<< count << endl;
	return(0);
}