#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	
	int A[1000];
	int size,MAX,MIN;
	ifstream Fin;
	ofstream Fout;
	cout << "������� ���������� ��������� � ����� input.txt\n";
	cin >> size;

	Fin.open("D:\input.txt");
	while (!Fin.eof())
	{
		for (int i = 0; i < size; i++)
		{
			Fin >> A[i];
		}
	}
	Fin.close();
	//������� ����� ������� ������ �� ������� � �������� ���� ��� ����� ����� � ��������������� ���������� ��������� �������� NULL
	for (int k = 0; k < size; k++)
	{
		if (A[k] % 2 == 0 && A[k] > 0)
		{
			MAX = A[k];
			MIN = A[k];
			break;
		}
		else
		{
			MAX = NULL;
			MIN = NULL;
		}
	}
	
	//���� �� ����� ������ ����� ���������� ��� ��� ����� �����
	if (MAX == NULL && MIN == NULL)
	{
		//��������� ���� � ���������� ��� �����
		Fout.open("D:\output.txt");
		Fout << "�� ������� ���� ������������ ������� ������� ��������������� ��������\n";
		Fout << "�� ������� ����� ����������� ������� ������� ��������������� ��������\n";
		Fout.close();
	}
	else
	//���� ����� ���� �� ��������� ��������� �������� �� ������������ ��������
	{
		//���� ��� ���������� ��������� � ��������
		for (int i = 0; i < size; i++)
		{
			//���������� ������������� ����� � ������ ��� � ������
			if (A[i] > MAX && A[i] % 2 == 0 && A[i] > 0)
			{
				MAX = A[i];
			}

			//���������� ������������ ����� � ������ ��� � ������
			if (A[i] < MIN && A[i] % 2 == 0 && A[i] > 0)
			{
				MIN = A[i];
			}
		}
		//��������� ���� � ���������� ��� �����
		Fout.open("D:\output.txt");
		Fout << "������������ ������� ����� " << MAX << endl;
		Fout << "����������� ������� ����� " << MIN << endl;
		Fout.close();
	}	

	cout << "��������� ������� �� ���� D � ���� output.txt\n";
	system("pause");
  	return(0);
}