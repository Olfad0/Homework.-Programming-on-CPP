#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	srand(time(NULL));
	int* A;
	int size, min1, min2, min3, n_min1=0, n_min2=1, n_min3=2;
	cout << "¬ведите размер массива\n";
	cin >> size;
	A = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		A[i] = rand()%1001;
	}
	min1 = A[0];
	min2 = A[1];
	min3 = A[2];

	for (int i = 5; i < size; i++)
	{
		if (A[i-2] < min1 && min1 != A[i - 2] && min1 != min2 && min1 != min3)
		{
			min1 = A[i-2];
			n_min1 = i-2;
		}
		if (A[i-1] < min2 && min2 != A[i-1] && min2 != min1 && min2 != min3)
		{
			min2 = A[i-1];
			n_min2 = i-1;
		}
		if (A[i] < min3 && min3 != A[i] && min3 != min1 && min3 != min2)
		{
			min3 = A[i];
			n_min3 = i;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << A[i]<<" ";
	}
	cout<<endl;
	cout << min1 << " "<<min2<<" "<<min3<<endl;
	cout << n_min1 << " " << n_min2 << " " << n_min3 << endl;

	system("pause");
	return(0);
}