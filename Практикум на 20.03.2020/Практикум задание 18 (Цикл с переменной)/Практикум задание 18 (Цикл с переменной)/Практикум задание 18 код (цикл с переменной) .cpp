#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	for (int p = 10; p > 0; p--)
	{
		if (p % 2 == 0)
			cout << pow(2, p) << endl;
	}
	return(0);
}
