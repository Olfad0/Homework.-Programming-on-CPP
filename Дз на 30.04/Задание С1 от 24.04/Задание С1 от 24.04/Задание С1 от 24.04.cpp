#include<iostream>
using namespace std;

int summa(int n)//���������� ����� ���� �����
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
	cout << "������� ������ �������\n";
	cin >> size;
	cout << "������� �����, ������� ����� �������� � ������\n";
	A = new int[size];//������ ������� ������������ �� ��������� �����
	for (int i = 0; i < size; i++)//���������� �������
	{
		cin >> A[i];
	}

	for (int i = 0; i < size - 1; i++)//���������� ������ �� ��������
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (summa(A[j]) < summa(A[j + 1]))
			{
				//������ ������
				A[j+1] = A[j+1] + A[j];
				A[j] = A[j+1] - A[j];
				A[j+1] = A[j+1] - A[j];
			}
		}
	}

	cout << "\n������ ����� ����������\n";
	for (int i = 0; i < size; i++)//����� ������� ����� ����������
	{
		cout << A[i] << " ";
	}
	return(0);
}