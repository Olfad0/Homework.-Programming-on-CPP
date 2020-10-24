#include <iostream>
using namespace std;

int main()
{
	int vklad, percent, poluchim, year=0;
	cin >> vklad;
	cin >> percent;
	cin >> poluchim;

	while (floor(vklad) < poluchim)
	{
		vklad = vklad * (1 + float(percent) / 100);
		year++;
	}
	cout << year << endl;
	system("pause"); 
	return(0);
}