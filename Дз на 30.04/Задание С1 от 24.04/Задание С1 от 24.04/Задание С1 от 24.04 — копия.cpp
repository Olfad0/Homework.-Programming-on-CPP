#include<iostream>
using namespace std;

int summa(int n)//Нахождение суммы цифр числа
{
	int s = 0;
		while (n > 0)
		{
			s += n % 10;
			n = n / 10;
	    }
		return s;
}

int main()
{
	int *A;
	int size;
	setlocale(LC_ALL, "ru_RU");
	cout << "Введите размер массива\n";
	cin >> size;
	cout << "Введите числа, которые будут записаны в массив\n";
	A = new int[size];//Размер массива определяется по введённому числу
	for (int i = 0; i < size; i++)//Заполнение массива
	{
		cin >> A[i];
	}

	for (int i = 0; i < size - 1; i++)//Сортировка камнем по убыванию
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (summa(A[j]) < summa(A[j + 1]))
			{
				//Меняем местам
				A[j+1] = A[j+1] + A[j];
				A[j] = A[j+1] - A[j];
				A[j+1] = A[j+1] - A[j];
			}
		}
	}

	cout << "\nМассив после сортировки\n";
	for (int i = 0; i < size; i++)//Вывод массива после сортировки
	{
		cout << A[i] << " ";
	}
	return(0);
}