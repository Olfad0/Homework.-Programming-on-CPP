#include<iostream>
using namespace std;

int main() {
	int A[10000],num;
	cout << "Enter the number" << endl;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		A[i] = i * i;
		cout << A[i] << " ";
	}
	return(0);
} 