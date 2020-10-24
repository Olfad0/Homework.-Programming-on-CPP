#include <string>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	string s;
	cout << "Введите строку\n";
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)//меняем буквы
	{
		if (s[i] == 'a')          //Если буква a меняем на b
			s[i] = 'b';
		else
			if (s[i] == 'b')       //Если буква b меняем на a
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