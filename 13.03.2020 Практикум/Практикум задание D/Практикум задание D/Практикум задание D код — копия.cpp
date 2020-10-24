#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter the number" << endl;
	cin >> num;
	if (float(num) / 1000 < 1)
		cout << "Three-digit" << endl;
	else
		cout << "Not three-digit" << endl;
	return(0);
}