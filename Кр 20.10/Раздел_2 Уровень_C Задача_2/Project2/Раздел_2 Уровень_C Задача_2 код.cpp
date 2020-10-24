#include <iostream>
#include <ctime>
using namespace std;

void qSort(int nStart, int nEnd, int A[], int B[])
{
	int L, R, c,c1, X;
	if (nStart >= nEnd) return; // готово
	L = nStart; R = nEnd;
	X = B[(L + R) / 2]; // или X = A[irand(L,R)];      
	while (L <= R) {         // разделение 
		while (B[L] > X) L++;
		while (B[R] < X) R--;
		if (L <= R) {
			c = A[L]; A[L] = A[R]; A[R] = c;
			c1 = B[L]; B[L] = B[R]; B[R] = c1;
			L++; R--;
		}
	}
	qSort(nStart, R, A, B);  // рекурсивные вызовы 
	qSort(L, nEnd, A, B);
}

int main()
{
	setlocale(LC_ALL, "ru_RU");
	srand(time(NULL));

	int* A;
	int* B;
	int size;
	cout << "Введите размер массива\n";
	cin >> size;
	A = new int [size];
	B = new int[size];
	for (int i = 0; i < size; i++)
	{
		A[i] = (rand() % 900) + 100;
	}
	
	for (int i = 0; i < size; i++)
	{
		B[i] = 0;
	}
	
	for (int i = 0; i < size; i++)
	{
		for (int k = 1; k <= A[i]; k++)
		{
			if (A[i] % k == 0)
			{
				B[i] ++;
			}
		}
	}
	qSort(0, size - 1, A, B);
	cout << "Массив после сортировки:\n";
	
	for (int i = 0; i < size; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	cout << endl;
	system("pause");
	return(0);
}