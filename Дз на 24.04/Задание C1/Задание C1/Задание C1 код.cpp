#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int A[10000];
	int size, MAX, count = 0;
	setlocale(LC_ALL, "ru_RU");
	cout << "������� ������ �������" << endl;
	cin >> size;
	cout << "������� �������� ����������� � �������" << endl;
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
	cout << "������������ �������� �����: " << MAX << endl;
	cout << "���������� ������������ ��������: " << count;
	return(0);
}