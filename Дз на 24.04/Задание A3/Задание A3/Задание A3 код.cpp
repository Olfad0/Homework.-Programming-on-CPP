#include<iostream>
#include<ctime>
using namespace std;

int main() 
{
	int A[10000];
	int size;
	srand(time(NULL));
	setlocale(LC_ALL,"ru_RU");

	cout << "¬ведите размер массива" << endl;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		A[i] = rand() % 20 - 10;
		cout << A[i] << " ";
    }
	cout << endl;
	
	for (int i = 0; i < size; i++)
	{
		if (A[i] % 2 == 0)
		{
			cout << A[i]<<" ";
		}
	}
	return(0);
}