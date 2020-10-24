#include<iostream>
#include<ctime>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "ru_RU");
	srand(time(NULL));
	int A[10000];
	int size,MAX, set;
	cout << "Введите размер массива" << endl;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 10;
		cout << A[i] << " ";
	}
	cout << endl;
	MAX = A[1];
	for (int i = 1;i<size;i++ )
		if (MAX < A[i])
		{
			MAX = A[i];
			set = i;
			A[i] = 0;
		}
	cout << "Первый максимум находится на "<<set+1<<" месте и равен: " << MAX << endl;
	MAX = A[1];
	for (int i = 0; i < size; i++)
	{
		if (MAX < A[i])
		{
			MAX = A[i];
			set = i;
		}
	}
	cout << "Ворой максимум находится на " << set+1 << " месте и равен: " << MAX << endl;
	return(0);
}