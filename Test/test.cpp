#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_ALL, "Ru_ru");
	cout << "Введи что угодно\n";
	int a = 0;
	cin >> a;
	cout << "Ты ввёл чило:" << a << endl;
	system("Pause");
	return (0);
}
