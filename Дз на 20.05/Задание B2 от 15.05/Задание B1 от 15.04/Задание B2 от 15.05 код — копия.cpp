#include<iostream>
#include<string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	string s;
	cout << "Ââåäèòå ïîëíûé ïóòü ê ôàéëó. ÂÍÈÌÀÍÈÅ! ÄËß ÊÎÐÐÅÊÒÍÎÃÎ ÎÒÎÁÐÀÆÅÍÈß ÈÑÏÎËÜÇÓÉÒÅ ÏÓÒÜ ÑÎÑÒÎßÙÈÉ ÈÇ ËÀÒÈÍÑÊÈÉ ÁÓÊÂ È ÈÑÏÎËÜÇÓÉÒÅ ÄËß ÐÀÇÄÅËÅÍÈß ÇÍÀÊ '/' \n";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '/')
		{
			cout << endl;
		}
		else
		{
			cout << s[i];
		}
	}
	cout << endl;
	system("pause");
	return(0);
}