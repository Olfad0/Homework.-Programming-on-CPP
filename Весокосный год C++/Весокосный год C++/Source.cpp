#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	int year;
	cout << "Enter year" << endl;
	cin >> year;
	if (year % 4 == 0)
		cout << "YES :)" << endl;
	else
		cout << "NO :(" << endl;
	system("pause");
	return(0);
}
