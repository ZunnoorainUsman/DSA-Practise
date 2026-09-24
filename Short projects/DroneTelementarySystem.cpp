#include<iostream>
#include<cstring>
using namespace std;



int main()
{
	int altitude, batteryLevel;
	cin >> altitude >> batteryLevel;
	int* a = &altitude;
	int* b = &batteryLevel;
	int safetyScore = *a * *b;
	cout << "Altitude adress: " << a << endl;
	cout << "BAttery adress: " << b << endl;
	cout << "Calculated safety score: " << safetyScore << endl;

	return 0;
}