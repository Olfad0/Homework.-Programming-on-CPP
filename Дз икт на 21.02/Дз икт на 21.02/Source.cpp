#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int a, b, c, plus, mult;
	float div;
	cout << "������� 3 ����� �����" << endl; // ������� 3 ����� �����
	cin >> a >> b >> c;                      
	plus = a + b + c;
	cout << a << "+" << b << "+" << c << "=" << plus << endl;
	mult = a * b * c;
	cout << a << "*" << b << "*" << c << "=" << mult << endl;
	div = (a + b + c) / 3;
	cout << "(" << a << "+" << b << "+" << c << "):3=" << div << endl;
	system("pause");
	return 0;
}