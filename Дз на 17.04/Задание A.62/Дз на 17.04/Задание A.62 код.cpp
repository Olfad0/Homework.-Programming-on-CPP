#include<iostream>
using namespace std;

int main() {
	const int N = 10000;
	int A[N], num;
	cout << "Enter the number" << endl;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		A[i] = i;
		cout << A[i] << " ";
	}
	return(0);
}