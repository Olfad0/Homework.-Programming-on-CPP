#include  <iostream>
using namespace std;

int main()
{
	int* A;
	int size;
	bool j;
	cin >> size;
	A = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
    }

	for (int i = 1; i < size; i++)
	{
		if ((A[i] < 0 && A[i - 1] < 0) or (A[i] >= 0 && A[i - 1] >= 0))
		{
			j = true;
			break;
		}
		else
		{
			j = false;
		}
	}

	if (j == true)
		cout << "YES\n";
	else
		cout << "NO\n";
	return(0);
}