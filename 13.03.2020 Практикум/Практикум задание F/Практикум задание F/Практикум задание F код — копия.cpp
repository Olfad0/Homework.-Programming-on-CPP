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
		cout << "Winter" << endl;
		break;
	case 1:
		cout << "Winter" << endl;
		break;
	case 2:
		cout << "Winter" << endl;
		break;
	case 3:
		cout << "Spring" << endl;
		break;
	case 4:
		cout << "Spring" << endl;
		break;
	case 5:
		cout << "Spring" << endl;
		break;
	case 6:
		cout << "Summer" << endl;
		break;
	case 7:
		cout << "Summer =)" << endl;
		break;
	case 8:
		cout << "Summer" << endl;
		break;
	case 9:
		cout << "Autumn" << endl;
		break;
	case 10:
		cout << "Autumn" << endl;
		break;
	case 11:
		cout << "Autumn" << endl;
		break;
	default: 
		cout << "invalid number of mounth" << endl;
		break;
	}
	system("pause");
	return(0);
}
