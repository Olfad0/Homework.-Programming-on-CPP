#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int p=10;
	
	while (p>0)
	{
		if (p % 2 == 0)
			cout << pow(2, p) << endl;
		p--;
	}
	return(0);
}