#include <iostream>
using namespace std;

int main()
{
	int maxK, time, count;
	cin >> maxK;
	cin >> time;
	cin >> count;

	if (count % maxK == 0)
	{
		cout << count / maxK * 2 * time << endl;
	}
	else
	{
		cout << (count / maxK + 1) * 2 * time << endl;
	}
	system("pause");
	return(0);
}