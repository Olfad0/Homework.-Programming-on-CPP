#include<iostream>
#include<string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru_RU");
	string s, swap, swap1;
	cout << "������� ������:\n";
	getline(cin, s);
	cout << "������� ��, ��� ����� ��������:\n";
	getline(cin, swap);
	cout << "������� ��, ��� �� ����� ��� ��������:\n";
	getline(cin, swap1);
	
	size_t i = 0;
	for (; (i = s.find(swap, i)) != string::npos; i += swap1.length())
		s.replace(i, swap.length(), swap1);
	
	cout << "���������\n"<<s<<endl;
	system("pause");
	return(0);
}