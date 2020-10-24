#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int month, day;
	cout << "Enter the number of the month and day, separated by space" << endl;
	cin >> month>>day;

	switch (month)                             //Если введётся неправильный день или номер месяца программа на это укажет, а если всё верно выведет количество дней оставшихся до нового года =)
	{
	case 12:
		if (day <= 31)
			cout << 365 - (334 + day) << "days" << endl;
		else 
			cout << "invalid day" << endl;                                      
		break;
	
	case 1:
		if(day <= 31)
			cout << 365 - (0 + day) << " days" << endl;
		else
			cout << "invalid day" << endl;		
		break;
	
	case 2:
		if(day <= 28)
			cout << 365 - (31 + day) << " days" << endl;
		else 
			cout << "invalid day" << endl;
		break;
	
	case 3:
		if(day <= 31)
			cout << 365 - (59 + day) << " days" << endl;
		else
			cout << "invalid day" << endl;
		break;
	
	case 4:
		if(day <= 30)
			cout << 365 - (90 + day) << " days" << endl;
		else 
			cout << "invalid day" << endl;
		break;
	
	case 5:
		if(day <= 31)
			cout << 365 - (120 + day) << " days" << endl;
		else
			cout << "invalid day" << endl;
		break;
	
	case 6:
		if(day <= 30)
			cout << 365 - (151 + day) << " days" << endl;
		else
			cout << "invalid day" << endl;
		break;
	
	case 7:
		if(day <= 31)
			cout << 365 - (181 + day) << " days" << endl;
		else
			cout << "invalid day" << endl;
		break;
	
	case 8:
		if(day <= 31)
			cout << 365 - (212 + day) << " days" << endl;
		else cout << "invalid day" << endl;
		break;
	
	case 9:
		if(day <= 30)
			cout << 365 - (243 + day) << " days" << endl;
		else
			cout << "invalid day" << endl;
		break;
	
	case 10:
		if(day <= 31)
			cout << 365 - (273 + day) << " days" << endl;
		else
			cout << "invalid day" << endl;
		break;
	
	case 11:
		if(day <= 30)
			cout << 365 - (304 + day) << " days" << endl;
		else 
			cout << "invalid day" << endl;
		break;
	
	default:
		cout << "invalid number of mounth" << endl;
		break;
	}                                                                 

	system("pause");
	return(0);
}
