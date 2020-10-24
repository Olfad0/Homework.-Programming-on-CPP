#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int A[10000];
	int size, MAX, count = 0;
	setlocale(LC_ALL, "ru_RU");
	cout << "Введите размер массива" << endl;
	cin >> size;
	cout << "Введите значения находящиеся в массиве" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}
	MAX = A[1];
	for (int i = 0; i < size; i++)
	{
		if (MAX < A[i])
		{
			MAX = A[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (MAX == A[i])
		{
			count++;
		}
	}
	cout << "Максимальное значение равно: " << MAX << endl;
	cout << "Количество максимальных значений: " << count;
	return(0);
}