#include<iostream>
using namespace std;

int main() 
{
	int A[2000];
	int size;
	setlocale(LC_ALL, "ru_RU");
	cout << "Введите размер массива" << endl;
	cin >> size;
	cout << "Введите значения, которые будут записаны в массив" << endl;
	for (int i = 0; i < size; i++)//Заполнение массива
	{
		cin >> A[i];
	}


	for (int i = 0; i < size - 1; i++)//Сортировка камнем
	{
		for (int j =0; j<size-i-1; j++)
		{
			if (A[j] > A[j + 1])
			{
				A[j] = A[j]+A[j+1];
				A[j+1] = A[j]-A[j+1];
				A[j] = A[j]-A[j+1];
			}
		}
	}
	
	cout << "Массив после сортировки" << endl;
	for (int i = 0; i < size; i++)//Вывод массива после сортировки 
	{
		cout << A[i]<<" ";
	}
	return(0);
}