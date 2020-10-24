#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru_RU");
	const int a = 100, b = 100;
	int A[a] [b];
	int min, max, L_size, H_size, L_max = 0, H_max = 0, L_min = 0, H_min = 0;
	
	cin >> H_size;
	cin >> L_size;
	
	srand(time(NULL));
	cout << "Матрица A:\n";
	
	for (int i = 0; i < H_size; i++)
	{
		for (int k = 0; k <L_size ; k++)
		{
			A[i][k] = rand() % 100;
			cout.width(3);
			cout << A[i] [k] << " "; 
		}
		cout << endl;
	}
	
 	max = A[0][0];
	min = A[0][0];

	for (int i = 0; i < H_size; i++)
	{
		for (int k = 0; k < L_size; k++)
		{
			if (A[i][k] > max)
			{
				max = A[i][k];
				L_max = k;
				H_max = i;
			}
			
			if (A[i][k] < min)
			{
				min = A[i][k];
				L_min = k;
				H_min = i;
			}
		}
	}
	
	cout << "Максимальный элемент A[" << H_max+1 << ", " << L_max + 1 <<"] "<<"= "<<max<<endl ;
	cout << "Минимальный элемент A[" << H_min+1  << ", " << L_min + 1 <<"] " << "= " << min << endl;
	
	system("pause");
	return(0);
}