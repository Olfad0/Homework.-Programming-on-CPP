#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int N;
	float first_set=0, second_set=0, third_set=0, fourth_set=0, R;
	//���������� ���������� �����
	srand(time(NULL));

	cout << "Enter the count of random numbers" << endl;
	cin >> N;
	
	while (N > 0)
	{
		R = (float(rand() % 100) / 100);
		cout << R << endl;
		//float(rand() % 100)/100 - ������� ����� � ��������� �� 0 �� 1 (� ������ �� ����� ������� ������� �������� ����� �����, ���������� ������ �����)
		if ((R >= 0) and (R < 0.25))    //�������� ��� ������� ���������  
			first_set++;
	
		if ((R >= 0.25) and (R < 0.5)) //�������� ��� ������� ���������
			second_set++;

		if ((R >= 0.5) and (R < 0.75))  //�������� ��� �������� ���������
			third_set++;

		if ((R >= 0.75) and (R < 1))  //�������� ��� ��������� ���������
			fourth_set++;
		N--;
		
	}

	cout << "count of numbers included in the first set: " << first_set << endl;
	cout << "count of numbers included in the second set: " << second_set << endl;
	cout << "count of numbers included in the third set: " << third_set << endl;
	cout << "count of numbers included in the fourth set: " << fourth_set << endl;
	return(0);
}

//����� �����������, �������� �����. ����� �������� ���������� �����, �������� 10 ��� ���-�� �����, � ���������� ����� �� ����������� � ����� ������-�� ������ 10, ������� ������ ��������, �� ���������� � ��������� ��, �����, ��������