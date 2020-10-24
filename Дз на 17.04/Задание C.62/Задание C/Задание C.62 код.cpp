#include<iostream>
using namespace std;

int main() {
	int A[10000],num, count;
	cout << "From what number to start?" << endl;
	cin >> num;
	cout << "How many numbers should I print?" << endl;
	cin >> count;
	for (int i = 1; i <= count; i++)
	{
		A[i] = i+num-1;
		cout << A[i]<<" ";
	}
	return(0);
}