#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	int A[10000], st_num, count, dif;
	cout << "¬ведите первой член арифмитической прогрессии" << endl;
	cin >> st_num;
	cout << "¬ведите количество членов арифмитической прогресии" << endl;
	cin >> count;
	cout << "¬ведите разность арифмитической прогрессии" << endl;
	cin >> dif;
	for (int i = 0; i < count*dif; i= i+dif)
	{
		
		A[i] = i + st_num;
		cout << A[i] << " ";
	}
	return(0);
}