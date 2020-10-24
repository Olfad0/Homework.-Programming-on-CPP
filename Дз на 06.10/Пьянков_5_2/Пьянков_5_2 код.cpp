#include <iostream>
using namespace std;

int main()
{
	int number, proverka=0;
	cin >> number;
	
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			proverka++;
		}
	}

	if (proverka == 2)
		cout << "prime\n";
	else
		cout << "composite\n";

	return(0);
}