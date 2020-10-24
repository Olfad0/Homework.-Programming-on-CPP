#include <iostream>
#include<string>
using namespace std;

bool proverka1(string bin)
{
	for (int i = 0; i < (size(bin)/2); i++)
	{
		for (int k = size(bin)-1; k > (size(bin)/2); k--)
		{
			if (bin[i] == bin[k])
			{
				i++;
				k--;				
			}
			else
			{
				return(false);
			}
		}
	}
	return(true);
}



int bin(int A,  int count)
{
	int b;
	string bin="";

	while (A != 0)
	{
		b = A % 2;
		A = A / 2;
		bin += to_string(b);
	}
	if (true == proverka1(bin))
	{
		count++;
	}
	
	return(count);
}

int main()
{
	int A[5];
	int count=0;

	for (int i = 0; i < 5; i++)
	{
		cin >> A[i];
	}
	
	for (int i = 0; i < 5; i++)
	{
		count=bin(A[i], count);
	}

	cout << count << endl;
	return(0);
}