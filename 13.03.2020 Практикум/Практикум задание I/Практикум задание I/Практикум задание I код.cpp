#include<bits/stdc++.h>

using namespace std;
int main()
{
	float x, y;
	cout << "Enter cordinates(first x, second y)" << endl;
	cin >> x >> y;
	// ������� ��� ������� �������
	if (y <= 1)
		cout << "1";
	else
		cout << "0";
	// ������� ��� ������� �������
	if (y<=(-x))
		cout << "1";
	else
		cout << "0";
	// ������� ��� �������� �������
	if (pow(x,2)+pow(y,2)<=1)
		cout << "1";
	else
		cout << "0";
	//������� ��� ��������� �������
	if (pow((x-1), 2) + pow(y, 2) <= 1)
		cout << "1";
	else
		cout << "0";

	system("pause");
	return(0);
}
