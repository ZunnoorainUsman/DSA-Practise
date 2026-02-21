#include<iostream>
using namespace std;
int main()
{
	int arr[5] = { 7,5,9,2,8 },large,sec;
	if (arr[0] > arr[1])
	{
		large = arr[0];
		sec = arr[1];
	}
	else
	{
		large = arr[1];
		sec = arr[0];
	}
	for (int i = 2; i < 5; ++i)
	{
		if (arr[i] > large)
		{
			sec = large;
			large = arr[i];
		}
		else if (arr[i] > sec)
		{
			sec = arr[i];
		}
	}
	cout << "2nd largest no is: " << sec;
	return 0;
}
