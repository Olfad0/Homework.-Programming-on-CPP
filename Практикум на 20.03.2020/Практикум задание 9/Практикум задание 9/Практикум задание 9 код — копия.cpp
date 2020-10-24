#include<iostream>
using namespace std;

int main() {
	int Num;
	for (Num = 10000; Num < 100000; Num++)
	{
		if ((Num%133==125) and (Num%134==111))
			cout<<Num<<endl;
	}
	return(0);
}


