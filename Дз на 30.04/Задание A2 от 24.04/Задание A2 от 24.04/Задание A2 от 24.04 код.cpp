#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	int A[1000];
	int size;
	ifstream Fin;
	ofstream Fout;
	cout << "������� ���������� ����� � ����� input.txt" << endl;
	cin >> size;
	//���������� ����� �� ���������� ����� � ������
	Fin.open("D:\input.txt");
	while (!Fin.eof())
	{
		for (int i = 0; i < size; i++)
		{
			Fin >> A[i];
		}
	}
	Fin.close();
	//���������� ����� ������ �������������� ����������
	int sum = A[0];
	for (int i = 1; i < size; i++)
	{
		sum = sum + A[i];
	}
    //������ ���������� � ���� ������
	Fout.open("D:\output.txt");
	Fout<< float(sum) / size;
	Fout.close();

	cout << "�������� �������������� �������� �� ���� D:\output.txt" << endl;
	system("pause");
	return(0);
}