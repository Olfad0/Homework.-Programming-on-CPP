#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	int num1, num2, num3;
    cout << "Enter 3 numbers" << endl;
	cin >> num1 >> num2 >> num3;
	if (num1 == num2 and num2 == num3)
		cout << "Of the entered numbers 3 are the same" << endl;
	else
		if (num1 == num2 or num2 == num3 or num1==num3)
			cout << "Of the entered numbers 2 are the same" << endl;
		else
			cout << "The entered numbers are different"<< endl;
	system("pause");
	return(0);
}