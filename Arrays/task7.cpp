#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 1,2,3,2,5,2 },target;
	int occur = 0;
	cout << "Target: ";
	cin >> target;
	for (int i = 0; i < 6; ++i)
	{
		if (arr[i] == target)
		{
			if (i > occur)
			{
				occur = i;
			}
		}
	}
	cout <<"Last occurnce of "<<target<<" : "<< occur;
	return 0;
}