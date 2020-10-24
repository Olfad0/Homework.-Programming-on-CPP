#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int A[10000];
	int size, c;
	srand(time(NULL));
	setlocale(LC_ALL, "ru_RU");
	cout << "¬ведите размер массива" << endl;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << " ";
	}
	cout << endl;
	c = A[size-1];
	for (int i = size-1; i >= 0; i--)
	{
		A[i] = A[i - 1];
	}
	A[0] = c;
	cout << endl;
	for (int k = 0; k < size; k++)
	{
		cout << A[k] << " ";
	}
	return(0);
}