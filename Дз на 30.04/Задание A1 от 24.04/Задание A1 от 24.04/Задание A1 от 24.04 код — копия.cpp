#include<iostream>
using namespace std;

int main() 
{
	int A[2000];
	int size;
	setlocale(LC_ALL, "ru_RU");
	cout << "������� ������ �������" << endl;
	cin >> size;
	cout << "������� ��������, ������� ����� �������� � ������" << endl;
	for (int i = 0; i < size; i++)//���������� �������
	{
		cin >> A[i];
	}


	for (int i = 0; i < size - 1; i++)//���������� ������
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
	
	cout << "������ ����� ����������" << endl;
	for (int i = 0; i < size; i++)//����� ������� ����� ���������� 
	{
		cout << A[i]<<" ";
	}
	return(0);
}