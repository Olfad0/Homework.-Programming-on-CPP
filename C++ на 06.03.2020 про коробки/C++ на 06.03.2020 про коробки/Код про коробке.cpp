#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int lenght_1, height_1, width_1, lenght_2, height_2, width_2, first_box, second_box;
	cout << "enter the length, height and width of the first box"<< endl;
	cin >> lenght_1 >> height_1 >> width_1;
	first_box = lenght_1 * height_1 * width_1;
	cout << "first box size =" << first_box << endl;                                               //Вывод объёма первой коробки

	cout << "enter the length, height and width of the second box" << endl;
	cin >> lenght_2 >> height_2 >> width_2;
	second_box = lenght_2 * height_2* width_2;
	cout << "second box size =" << second_box << endl;                                            //Вывод объёма второй коробки 

	if (first_box > second_box)
		cout << "The first box is larger than the second one" << endl;
	else
		if (first_box == second_box)
			cout << "Boxes are equal" << endl;
		else
			cout << "The first box is smaller than the second one" << endl;                      //Какая коробка больше или они равны 

	system("pause");
	return 0;
}