#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 2,7,6,9,4,11 };
	int odd = arr[0], even = arr[0];
	for (int i = 0; i < 6; ++i)
	{
		if (arr[i] % 2 == 0)
		{
			if (arr[i] < even)
			{
				even = arr[i];
			}
		}
		else 
		{
			if (arr[i] > odd)
			{
				odd = arr[i];
			}
		}
	}
	cout << "Largest odd: " << odd << endl;
	cout << "Smallest even: " << even;
	return 0;
}
