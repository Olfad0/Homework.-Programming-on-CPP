#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru_RU");
	int weight, fir, sec, tri, count = 0;
	cin >> weight;
	while (weight > 0)
	{
		if (count == 0)
		{
			fir = weight % 10;
			weight = weight / 10;
			count++;
		}
		if (count == 1)
		{
			sec = weight % 10;
			weight = weight / 10;
			count++;
		}
		if (count == 2)
		{
			tri = weight % 10;
			weight = weight / 10;
			count++;
		}
	}

	if (sec == 1)
	{
		switch (tri)
		{
		case 0: cout << "";
			break;

		case 1: cout << "��� ";
			break;

		case 2: cout << "������ ";
			break;

		case 3: cout << "������ ";
			break;

		case 4: cout << "��������� ";
			break;

		case 5: cout << "������� ";
			break;

		case 6: cout << "�������� ";
			break;

		case 7: cout << "������� ";
			break;

		case 8: cout << "��������� ";
			break;

		case 9: cout << "��������� ";
			break;
		}

		switch (fir)
		{

		case 1: cout << "����������� ���������\n";
			break;

		case 2: cout << "���������� ����������\n";
			break;

		case 3: cout << "���������� ����������\n";
			break;

		case 4: cout << "������������ ����������\n";
			break;

		case 5: cout << "���������� ���������\n";
			break;

		case 6: cout << "����������� ���������\n";
			break;

		case 7: cout << "���������� ���������\n";
			break;

		case 8: cout << "������������ ���������\n";
			break;

		case 9: cout << "������������ ���������\n";
			break;
		}
	}

	else
	{
		switch (tri)
		{
		case 0: cout << "";
			break;

		case 1: cout << "��� ";
			break;

		case 2: cout << "������ ";
			break;

		case 3: cout << "������ ";
			break;

		case 4: cout << "��������� ";
			break;

		case 5: cout << "������� ";
			break;

		case 6: cout << "�������� ";
			break;

		case 7: cout << "������� ";
			break;

		case 8: cout << "��������� ";
			break;

		case 9: cout << "��������� ";
			break;
		}

		switch (sec)
		{
		case 0: cout << "";
			break;

		case 2: cout << "�������� ";
			break;

		case 3: cout << "�������� ";
			break;

		case 4: cout << "����� ";
			break;

		case 5: cout << "��������� ";
			break;

		case 6: cout << "���������� ";
			break;

		case 7: cout << "��������� ";
			break;

		case 8: cout << "����������� ";
			break;

		case 9: cout << "��������� ";
			break;
		}

		switch (fir)
		{
		case 0: cout << "���������\n";
			break;

		case 1: cout << "���� ���������\n";
			break;

		case 2: cout << "��� ����������\n";
			break;

		case 3: cout << "��� ����������\n";
			break;

		case 4: cout << "������ ����������\n";
			break;

		case 5: cout << "���� ���������\n";
			break;

		case 6: cout << "����� ���������\n";
			break;

		case 7: cout << "���� ���������\n";
			break;

		case 8: cout << "������ ���������\n";
			break;

		case 9: cout << "������ ���������\n";
			break;
		}
	}
	return(0);
}