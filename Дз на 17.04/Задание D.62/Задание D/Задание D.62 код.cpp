#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	int A[10000], st_num, count, dif;
	cout << "������� ������ ���� �������������� ����������" << endl;
	cin >> st_num;
	cout << "������� ���������� ������ �������������� ���������" << endl;
	cin >> count;
	cout << "������� �������� �������������� ����������" << endl;
	cin >> dif;
	for (int i = 0; i < count*dif; i= i+dif)
	{
		
		A[i] = i + st_num;
		cout << A[i] << " ";
	}
	return(0);
}