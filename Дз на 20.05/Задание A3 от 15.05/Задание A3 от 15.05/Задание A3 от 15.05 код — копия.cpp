#include<iostream>
#include<string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	string s;
	int NUM1, NUM2, NUM3;
	cout << "������� 3 ����� ����� + ���� ������ �� �����\n";
	getline(cin, s);
	NUM1 = stoi(s);   //���������� ������ ����� � ����������
	
	NUM3 = s.find('+'); //������� ��� + ����� ������� �����
	s = s.substr(NUM3+1);  //������� �� �� ���������� ����� 
	NUM2 = stoi(s);      //���������� ������ ����� � ����������
	
	NUM3 = s.find('+'); //������� ��� + ����� ������� �����
	s = s.substr(NUM3+1);//������� �� �� �������� �����
	NUM3 = stoi(s);    //���������� ������ �����

	cout << NUM1 << "+" << NUM2 << "+" << NUM3 << "=" << NUM1 + NUM2 + NUM3; 
	cout << endl;
	system("pause");
	return(0);
}