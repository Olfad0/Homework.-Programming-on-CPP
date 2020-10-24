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

		case 1: cout << "сто ";
			break;

		case 2: cout << "двести ";
			break;

		case 3: cout << "триста ";
			break;

		case 4: cout << "четыреста ";
			break;

		case 5: cout << "пятьсот ";
			break;

		case 6: cout << "шестьсот ";
			break;

		case 7: cout << "семьсот ";
			break;

		case 8: cout << "восемьсот ";
			break;

		case 9: cout << "девятьсот ";
			break;
		}

		switch (fir)
		{

		case 1: cout << "одиннадцать килограмм\n";
			break;

		case 2: cout << "двенадцать килограмма\n";
			break;

		case 3: cout << "тринадцать килограмма\n";
			break;

		case 4: cout << "четырнадцать килограмма\n";
			break;

		case 5: cout << "пятнадцать килограмм\n";
			break;

		case 6: cout << "шестнадцать килограмм\n";
			break;

		case 7: cout << "семнадцать килограмм\n";
			break;

		case 8: cout << "восемнадцать килограмм\n";
			break;

		case 9: cout << "девятнадцать килограмм\n";
			break;
		}
	}

	else
	{
		switch (tri)
		{
		case 0: cout << "";
			break;

		case 1: cout << "сто ";
			break;

		case 2: cout << "двести ";
			break;

		case 3: cout << "триста ";
			break;

		case 4: cout << "четыреста ";
			break;

		case 5: cout << "пятьсот ";
			break;

		case 6: cout << "шестьсот ";
			break;

		case 7: cout << "семьсот ";
			break;

		case 8: cout << "восемьсот ";
			break;

		case 9: cout << "девятьсот ";
			break;
		}

		switch (sec)
		{
		case 0: cout << "";
			break;

		case 2: cout << "двадцать ";
			break;

		case 3: cout << "тридцать ";
			break;

		case 4: cout << "сорок ";
			break;

		case 5: cout << "пятьдесят ";
			break;

		case 6: cout << "шестьдесят ";
			break;

		case 7: cout << "семьдесят ";
			break;

		case 8: cout << "восемьдесят ";
			break;

		case 9: cout << "девяносто ";
			break;
		}

		switch (fir)
		{
		case 0: cout << "килограмм\n";
			break;

		case 1: cout << "один килограмм\n";
			break;

		case 2: cout << "два килограмма\n";
			break;

		case 3: cout << "три килограмма\n";
			break;

		case 4: cout << "четыре килограмма\n";
			break;

		case 5: cout << "пять килограмм\n";
			break;

		case 6: cout << "шесть килограмм\n";
			break;

		case 7: cout << "семь килограмм\n";
			break;

		case 8: cout << "восемь килограмм\n";
			break;

		case 9: cout << "девять килограмм\n";
			break;
		}
	}
	return(0);
}