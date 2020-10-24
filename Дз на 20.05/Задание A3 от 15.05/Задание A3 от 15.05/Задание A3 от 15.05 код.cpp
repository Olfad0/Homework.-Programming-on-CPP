#include<iostream>
#include<string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	string s;
	int NUM1, NUM2, NUM3;
	cout << "Введите 3 числа через + чтоб узнать их сумму\n";
	getline(cin, s);
	NUM1 = stoi(s);   //записываем первое число в переменную
	
	NUM3 = s.find('+'); //находим где + после первого числа
	s = s.substr(NUM3+1);  //убираем всё до следующего числа 
	NUM2 = stoi(s);      //записываем второе число в переменную
	
	NUM3 = s.find('+'); //находим где + после второго числа
	s = s.substr(NUM3+1);//убираем всё до третьего числа
	NUM3 = stoi(s);    //записываем третье число

	cout << NUM1 << "+" << NUM2 << "+" << NUM3 << "=" << NUM1 + NUM2 + NUM3; 
	cout << endl;
	system("pause");
	return(0);
}