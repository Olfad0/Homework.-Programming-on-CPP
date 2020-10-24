#include<iostream>
#include<string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	string s, s1,s2,s3,s4;
	int NUM1, NUM2, NUM3, g,k;
	cout << "Ââåäèòå âûðàæåíèå (ÂÍÈÌÀÍÈÅ! ÄÎÏÓÑÀÞÒÑß ÇÍÀÊÈ ÒÎËÜÊÎ + È - !)\n";
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] == '+') or (s[i] == '-'))
		{
			s1 = s.substr(0, i-1);
			s2 = s.substr(i + 1, s.size());
			g = i;
        }
	}
	for (int i = 0; i < s1.size(); i++)
	{
		if ((s1[i] == '+') or (s1[i] == '-'))
		{
			s3 = s.substr(0, i - 1);
			s4 = s.substr(i + 1, s1.size());
			k = i;
		}
	}
	NUM1 = stoi(s3);
	NUM2 = stoi(s4);
	NUM3 = stoi(s2);
	if ((s[k] = '+') and (s[g] = '+'))  cout<<NUM1+NUM2+NUM3;
	if ((s[k] = '-') and (s[g] = '-'))  cout << NUM1 - NUM2 - NUM3;
	if ((s[k] = '+') and (s[g] = '-'))  cout << NUM1 + NUM2 - NUM3;
	if ((s[k] = '-') and (s[g] = '+'))  cout << NUM1 - NUM2 + NUM3;
	system("pause");
	return(0);
}