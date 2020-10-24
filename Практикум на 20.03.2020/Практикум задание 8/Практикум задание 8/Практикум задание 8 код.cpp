#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int N;
	float first_set=0, second_set=0, third_set=0, fourth_set=0, R;
	//ќбновление случайного числа
	srand(time(NULL));

	cout << "Enter the count of random numbers" << endl;
	cin >> N;
	
	while (N > 0)
	{
		R = (float(rand() % 100) / 100);
		cout << R << endl;
		//float(rand() % 100)/100 - дробное число в диапозоне от 0 до 1 (€ просто не нашЄл другого способа получить такие числа, получались только целые)
		if ((R >= 0) and (R < 0.25))    //ѕроверка дл€ первого множества  
			first_set++;
	
		if ((R >= 0.25) and (R < 0.5)) //ѕроверка дл€ второго множества
			second_set++;

		if ((R >= 0.5) and (R < 0.75))  //ѕроверка дл€ третьего множества
			third_set++;

		if ((R >= 0.75) and (R < 1))  //ѕроверка дл€ четвЄртого множества
			fourth_set++;
		N--;
		
	}

	cout << "count of numbers included in the first set: " << first_set << endl;
	cout << "count of numbers included in the second set: " << second_set << endl;
	cout << "count of numbers included in the third set: " << third_set << endl;
	cout << "count of numbers included in the fourth set: " << fourth_set << endl;
	return(0);
}

//“имур јнатольевич, проблема така€.  огда вводитс€ количество чисел, например 10 или что-то вроде, а количество чилел на промежутках в сумме почему-то больше 10, пыталс€ решить проблему, не получилось с услови€ми всЄ, вроде, впор€дке