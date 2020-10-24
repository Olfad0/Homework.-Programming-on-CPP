#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");

	int* A;
	int count=1, size=0, num, count1;
	ifstream Fin;
	ofstream Fout;
	Fin.open("D:\input.txt");
	while( !Fin.eof())
	{
		Fin >> num;
		size++;
	}
	A = new int [size];
	Fin.close();
	Fin.open("D:\input.txt");
	while (!Fin.eof())
	{
		for (int i = 0; i < size; i++)
		{
			Fin >> A[i];
		}
	}
	Fin.close();
	num = A[0];
	for (int i = 0; i < size; i++)
	{
		if (num == A[i])
		{
			count++;
		}
	}
	Fout.open("D:\output.txt");
	Fout << "Длина цепочки идущего подряд числа " << num << " равна " << count << endl;
	Fout.close();
	system("pause");
	return(0);
}