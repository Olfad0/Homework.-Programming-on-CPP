#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	
	int A[1000];
	int size,MAX,MIN;
	ifstream Fin;
	ofstream Fout;
	cout << "Введите количество элементов в файле input.txt\n";
	cin >> size;

	Fin.open("D:\input.txt");
	while (!Fin.eof())
	{
		for (int i = 0; i < size; i++)
		{
			Fin >> A[i];
		}
	}
	Fin.close();
	//Находим число которое возьмём за минимум и максимум если нет таких чисел в соответствующих переменных ставиться значение NULL
	for (int k = 0; k < size; k++)
	{
		if (A[k] % 2 == 0 && A[k] > 0)
		{
			MAX = A[k];
			MIN = A[k];
			break;
		}
		else
		{
			MAX = NULL;
			MIN = NULL;
		}
	}
	
	//Если не нашли нужных чисел записываем что нет таких чисел
	if (MAX == NULL && MIN == NULL)
	{
		//Открываем файл и записываем что нужно
		Fout.open("D:\output.txt");
		Fout << "Не удалось найи максимальный элемент массива удовлетворяющий условиям\n";
		Fout << "Не удалось найти минимальный элемент массива удовлетворяющий условиям\n";
		Fout.close();
	}
	else
	//Если числа есть то проверяем остальные элементы на соответствие условиям
	{
		//Цикл для нахождения максимума и минимума
		for (int i = 0; i < size; i++)
		{
			//Нахождение максимального числа и запись его в массив
			if (A[i] > MAX && A[i] % 2 == 0 && A[i] > 0)
			{
				MAX = A[i];
			}

			//Нахождение минимального числа и запись его в массив
			if (A[i] < MIN && A[i] % 2 == 0 && A[i] > 0)
			{
				MIN = A[i];
			}
		}
		//Открываем файл и записываем что нужно
		Fout.open("D:\output.txt");
		Fout << "Максимальный элемент равен " << MAX << endl;
		Fout << "Минимальный элемент равен " << MIN << endl;
		Fout.close();
	}	

	cout << "Результат записан на диск D в файл output.txt\n";
	system("pause");
  	return(0);
}