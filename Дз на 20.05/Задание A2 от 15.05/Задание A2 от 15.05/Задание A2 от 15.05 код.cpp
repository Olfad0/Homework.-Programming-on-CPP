#include<iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	string s, name, patronymic;
	int n;
	cout << "������� �������, ��� � ��������\n"; //��������! ������ �� ���������, ��� ��� � �������� ��������� ���������� ������ ���������
	getline(cin, s);
	
	n = s.find(' ');      //������� ��� ������������� �������            
	name = s.substr(0, n);
	s = s.substr(n);
	s = s +' '+ name;     //������������ ������� �����
	
	s = s.erase(0, 1);    //� ����� ������ �������� ������, ������� ���
	
	name = s.substr(0, 1) + '.';     // ������ �����
	n = s.find(' ');                // ������� ����� ����� �� �������  
	s = s.substr(n + 1);           // ������� ���
	
	n = s.find(' ');                      // ������� ����� �������� �� �������
	patronymic = s.substr(0, 1) + '.';   // ������ ��������
	s = s.substr(n + 1);                // �������� �������
	s = name + patronymic + s;       // �������� � ������ ���
	
	cout << s;
	cout << endl;
	system(" pause");
	return(0);
 }