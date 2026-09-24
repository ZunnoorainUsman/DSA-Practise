#include<iostream>
using namespace std;

int sumSteps(int* startPtr, int days)
{
	
	int sum = 0;
	for (int i = 0; i < days; ++i)
	{
		sum += *(startPtr + i);
	}
	return sum;
}

int main()
{
	int steps[30];
	for (int i = 0; i < 23; ++i)
		steps[i] = 0;
	cout << "Enter steps fpr last 7 days: " << endl;
	for (int i = 23; i < 30; ++i)
	{
		cout << "Day " << i << " : ";
		cin >> steps[i];
	}
	int sum = sumSteps(steps + 23, 7);
	cout << sum;

	return 0;
}