#include<iostream>
#include<ctime>
#include<stdbool.h>
using namespace std;

bool isPrime(int n)                                  //Отбор простых чисел
{
	int k = 2;
	while (k * k <= n && n % k != 0)
		k++; 
	return (k * k > n);
}


int main()
{
	setlocale(LC_ALL, "ru_RU");
	srand(time(NULL));
	int A[100];
	int B[100];
	int size;

	cout << "Введите размер массива" << endl;
	cin >> size;
	cout << "Массив A:" << endl;  //Заполнение массива А случайными чмслами
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Массив B: " << endl;
	int count = 0;       //счётчик для массива B
	for (int i = 0; i < size; i++)
	{
		if (isPrime(A[i]))                          //Проверка числа
		{
			B[count] = A[i];
			cout<<B[count]<<" ";	
			count++;
        }

	}
	return(0);
}
