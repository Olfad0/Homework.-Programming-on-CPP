#include <string>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	string s;
	cout << "������� ������\n";
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)//������ �����
	{
		if (s[i] == 'a')          //���� ����� a ������ �� b
			s[i] = 'b';
		else
			if (s[i] == 'b')       //���� ����� b ������ �� a
				s[i] = 'a';
	
		if (s[i] == 'A')
			s[i] = 'B';
		else
			if (s[i] == 'B')
				s[i] = 'A';
	}
	cout << s;
	cout << "\n";
	system("pause");
	return(0);
}