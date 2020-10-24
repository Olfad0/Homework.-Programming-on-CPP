#include<bits/stdc++.h>

using namespace std;
int main()
{
	float x, y;
	cout << "Enter cordinates(first x, second y)" << endl;
	cin >> x >> y;
	// Условие для перовго рисунка
	if (y <= 1)
		cout << "1";
	else
		cout << "0";
	// Условие для второго рисунка
	if (y<=(-x))
		cout << "1";
	else
		cout << "0";
	// Условие для третьего рисунка
	if (pow(x,2)+pow(y,2)<=1)
		cout << "1";
	else
		cout << "0";
	//Условие для четвёртого рисунка
	if (pow((x-1), 2) + pow(y, 2) <= 1)
		cout << "1";
	else
		cout << "0";

	system("pause");
	return(0);
}
