#include<iostream>
using namespace std;

int main()
{
	int A[1000];
	int size, arr, num;
	int count = 0;
	setlocale(LC_ALL,"ru_RU");
	cout << "������� ������ �������" << endl;
	cin >> size;
	cout << "������� �������� ������ �������� �������" << endl;
	cin >> num;
	cout << "������� �����, ������� ����� ��������� � �������" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr;
		if (arr == num)
		{
			count++;
		}
		A[i] = arr;
	}
	cout << "���������� �������� ������ ��������� ����� "<< count << endl;
	return(0);
}