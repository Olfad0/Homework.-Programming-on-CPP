#include<iostream>
using namespace std;

int main()
{
	int A[10000];
	int size, arr, MAX = 1, cMAX = 0;
	setlocale(LC_ALL, "ru_RU");
	cout << "������� ������ �������" << endl;
	cin >> size;
	cout << "������� �����, ������� ����� ��������� � �������" << endl;
	for (int i = 1; i <= size; i++)
	{
		cin >> arr;
		A[i] = arr;
	}

	for (int k = 1; k <= size; k++)
	{
		MAX = A[1];
		if (A[k] > MAX)
		{
			MAX = A[k];
		}
	}
	for (int k = 1; k <= size; k++)
	{
		if (A[k] == MAX)
		{
			cMAX++;
		}
	}

	cout << "������������ �������� � �������: " <<MAX<< endl;
	cout << "���������� ��������� ������������� �������� � �������: " << cMAX << endl;
	return(0);
}
