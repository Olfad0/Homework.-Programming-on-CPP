#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	string s, s1;	
	int count=0;
	cout << "������ ������ (��������! ����������� ��������� ������ � ����� ������!)\n";
	getline(cin, s);
	s1 = s;  //�������� �������� ������ � ��������������� ����������
	for (int i = 0; i<s.size(); i++)
	{
		if (s[i] == ' ')       //��������� ��� ������ ����� ��� ������
		{
			s1 = s1.erase(0,1);                //����� ������, � ��������������� ������ ������� ���� ������, � � �������� ������ ������������� ���
		}
		else
		{
			i = i+s1.find(' ')-1;             //����� �����, ������ ��� ����� � ��������������� ������ � ���������� � �������� �����, ���� � �������� ������ ���� ����� ���������� ����� ��� �����  
			count++;                         //������� ����
			s1 = s1.erase(0,s1.find(' '));     //������� ��������� ����� � ��������������� ������
		}
	}
	cout << "������� ����: " << count<<endl;
	system("pause");
	return(0);
}