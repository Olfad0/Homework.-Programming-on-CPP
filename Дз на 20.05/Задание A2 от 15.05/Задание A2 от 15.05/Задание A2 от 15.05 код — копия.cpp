#include<iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	string s, name, patronymic;
	int n;
	cout << "Введите фамилию, имя и отчество\n"; //ВНИМАНИЕ! Только по английски, так как с русскими символами волзникают ошибки кодировок
	getline(cin, s);
	
	n = s.find(' ');      //находим где заканчивается фамилия            
	name = s.substr(0, n);
	s = s.substr(n);
	s = s +' '+ name;     //перекидываем фамилию назад
	
	s = s.erase(0, 1);    //в самом начале оказался пробел, стираем его
	
	name = s.substr(0, 1) + '.';     // начало имени
	n = s.find(' ');                // находим конец имени по пробелу  
	s = s.substr(n + 1);           // удаляем имя
	
	n = s.find(' ');                      // находим конец отчества по пробелу
	patronymic = s.substr(0, 1) + '.';   // начало отчества
	s = s.substr(n + 1);                // осталась фамилия
	s = name + patronymic + s;       // приводим в нужный вид
	
	cout << s;
	cout << endl;
	system(" pause");
	return(0);
 }