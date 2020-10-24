#include <iostream>
using namespace std;

int main() {
    int Num1, Num2;
    cout << "enter 2 numbers" << endl;
    cin >> Num1 >> Num2;
    
    for (int i = Num1; i > 0; i--) 
    {
        if (Num1 % i == 0 and Num2 % i == 0)
            cout << "nod = " << i << endl;
           }

    return 0;
}