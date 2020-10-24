#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int month;
	cout << "Enter the number of the month" << endl;
	cin >> month;
	switch (month)
	{
	case 12:
		cout << "31 days" << endl;
		break;
	case 1:
		cout << "31 days" << endl;
		break;
	case 2:
		cout << "28 days" << endl;
		break;
	case 3:
		cout << "31 days" << endl;
		break;
	case 4:
		cout << "30 days" << endl;
		break;
	case 5:
		cout << "31 days" << endl;
		break;
	case 6:
		cout << "30 days" << endl;
		break;
	case 7:
		cout << "31 days =)" << endl;
		break;
	case 8:
		cout << "31 days" << endl;
		break;
	case 9:
		cout << "30 days" << endl;
		break;
	case 10:
		cout << "31 days" << endl;
		break;
	case 11:
		cout << "30 days" << endl;
		break;
	default:
		cout << "invalid number of mounth" << endl;
		break;
	}
	system("pause");
	return(0);
}
