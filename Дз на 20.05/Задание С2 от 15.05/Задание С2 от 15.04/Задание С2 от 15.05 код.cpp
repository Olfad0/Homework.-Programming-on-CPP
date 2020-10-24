#include<iostream>
#include<string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru_RU");
	string s, swap, swap1;
	cout << "¬ведите строку:\n";
	getline(cin, s);
	cout << "¬ведите то, что хотим изменить:\n";
	getline(cin, swap);
	cout << "¬ведите то, чем мы хотим это заменить:\n";
	getline(cin, swap1);
	
	size_t i = 0;
	for (; (i = s.find(swap, i)) != string::npos; i += swap1.length())
		s.replace(i, swap.length(), swap1);
	
	cout << "–езультат\n"<<s<<endl;
	system("pause");
	return(0);
}